# encoding=utf-8

# Copyright (C) 2021 Collabora, Ltd.
# Copyright (C) 2026 Arm Ltd.
# Copyright (C) 2026 Lee Gao
# SPDX-License-Identifier: MIT

import argparse

from mako import exceptions
from mako.template import Template

from valhall import valhall_parse_isa

parser = argparse.ArgumentParser()
parser.add_argument("--xml", required=True, help="Input ISA XML file")

args = parser.parse_args()

(instructions, immediates, enums, typesize, safe_name) = valhall_parse_isa(args.xml)

template = """
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "disassemble.h"
#include "cmpbe_chunks.h"

#define BIT(b)          (1ull << (b))
#define MASK(count)    ((1ull << (count)) - 1)
#define SEXT(b, count) ((b ^ BIT(count - 1)) - BIT(count - 1))
#define UNUSED          __attribute__((unused))

#define VA_SRC_UNIFORM_TYPE 0x2
#define VA_SRC_IMM_TYPE     0x3

#define MAX_GPR_REGS 64
#define MAX_STACK_SLOTS 256

typedef struct {
   uint64_t raw_word;
   uint64_t gen_mask;
   uint64_t def_mask;
   int32_t  stack_slot;
   bool     is_store;
   bool     is_load;
   bool     is_reconverge;
   bool     is_branch;
   int32_t  branch_target_idx;

   uint32_t num_incoming_branches;
   uint32_t incoming_branch_offsets[16];

   uint64_t live_regs_in;
   uint64_t live_regs_out;
   uint8_t  live_stack_in[MAX_STACK_SLOTS];
   uint8_t  live_stack_out[MAX_STACK_SLOTS];
} AnalyzedInstruction;

% for name, en in ENUMS.items():
UNUSED static const char *valhall_${name}[] = {
% for v in en.values:
   "${"" if v.default else "." + v.value}",
% endfor
};

% endfor
static const uint32_t va_immediates[32] = {
% for imm in IMMEDIATES:
   ${hex(imm)},
% endfor
};

static void
va_print_live_set_ranges(FILE *fp, const char *prefix, uint64_t mask)
{
   uint32_t total_vregs = 0;
   fprintf(fp, "// %s: ", prefix);

   if (mask == 0) {
      fprintf(fp, "none (0 vregs) */\\n");
      return;
   }

   bool first_range = true;
   int start = -1;
   int end = -1;

   for (int r = 0; r <= MAX_GPR_REGS; r++) {
      bool is_set = (r < MAX_GPR_REGS) && ((mask & BIT(r)) != 0);

      if (is_set) {
         total_vregs++;
         if (start == -1) {
            start = r;
         }
         end = r;
      } else {
         if (start != -1) {
            if (!first_range) {
               fprintf(fp, ",");
            }
            if (start == end) {
               fprintf(fp, "r%d", start);
            } else {
               fprintf(fp, "r%d-r%d", start, end);
            }
            first_range = false;
            start = -1;
            end = -1;
         }
      }
   }

   fprintf(fp, " (%u vregs)\\n", total_vregs);
}

static inline void
va_print_src(FILE *fp, unsigned type, unsigned value, unsigned size, unsigned fau_page,
             const cmpbe_chunk_CMMN *ctx, unsigned instr_idx, const uint32_t *first_def_idx)
{
   if (type == VA_SRC_IMM_TYPE) {
      if (value >= 32) {
         if (fau_page == 0)
            fputs(valhall_fau_special_page_0[(value - 0x20) >> 1] + 1, fp);
         else if (fau_page == 1)
            fputs(valhall_fau_special_page_1[(value - 0x20) >> 1] + 1, fp);
         else if (fau_page == 3)
            fputs(valhall_fau_special_page_3[(value - 0x20) >> 1] + 1, fp);
         else
            fprintf(fp, "reserved_page2");

         fprintf(fp, ".w%u", value & 1);
      } else {
         fprintf(fp, "0x%X", va_immediates[value]);
      }
   } else if (type == VA_SRC_UNIFORM_TYPE) {
      unsigned pair_index = (value >> 1) | (fau_page << 5);
      fprintf(fp, "u%u", pair_index);
      if (size <= 32)
         fprintf(fp, ".w%u", value & 1);

      if (ctx) {
         bool matched_meta = false;
         unsigned word_index = (pair_index * 2) + (value & 1);
         uint32_t byte_offset = word_index * 4;

         for (uint32_t c = 0; c < ctx->constant_count; c++) {
            if (ctx->constants[c].constant_id == byte_offset) {
               uint32_t raw_val = ctx->constants[c].value;
               float float_val;
               memcpy(&float_val, &raw_val, sizeof(float));
               if (raw_val != 0 && ((raw_val >= 0x38000000 && raw_val <= 0x4B800000) ||
                                    (raw_val >= 0xB8000000 && raw_val <= 0xCB800000))) {
                  fprintf(fp, " /* %gf */", float_val);
               } else {
                  fprintf(fp, " /* %u (0x%X) */", raw_val, raw_val);
               }
               matched_meta = true;
               break;
            }
         }
         if (!matched_meta) {
            for (uint32_t i = 0; i < ctx->ssym_24.count; i++) {
               for (uint32_t r = 0; r < ctx->ssym_24.symbols[i].rloc_count; r++) {
                  uint32_t start = ctx->ssym_24.symbols[i].relocations[r].offset;
                  uint32_t end = start + ctx->ssym_24.symbols[i].relocations[r].size;
                  if (byte_offset >= start && byte_offset < end) {
                     uint32_t internal_offset = byte_offset - start;
                     const char *member_name = NULL;
                     uint32_t member_base = 0;
                     if (ctx->ssym_24.symbols[i].type.tpib) {
                        const cmpbe_chunk_TPIB *tpib = ctx->ssym_24.symbols[i].type.tpib;
                        for (uint32_t m = 0; m < tpib->member_count; m++) {
                           if (internal_offset >= tpib->members[m].offset && tpib->members[m].offset >= member_base) {
                              member_name = (const char*)tpib->members[m].name.string_data;
                              member_base = tpib->members[m].offset;
                           }
                        }
                     }
                     if (member_name) {
                        if (internal_offset == member_base) {
                           fprintf(fp, " /* pushConstants_0.%s */", member_name);
                        } else {
                           fprintf(fp, " /* pushConstants_0.%s + %uB */", member_name, internal_offset - member_base);
                        }
                     } else {
                        fprintf(fp, " /* %s + %uB */", ctx->ssym_24.symbols[i].name.string_data, internal_offset);
                     }
                     matched_meta = true;
                     break;
                  }
               }
               if (matched_meta) break;
            }
         }
         if (!matched_meta) {
            for (uint32_t b = 0; b < ctx->ssym_43.count; b++) {
               if (ctx->ssym_43.symbols[b].binding_id == pair_index) {
                  fprintf(fp, " /* @%s */", ctx->ssym_43.symbols[b].name.string_data);
                  break;
               }
            }
         }
      }
   } else {
      bool discard = (type & 1);
      char *dmark = discard ? "^" : "";
      if (size > 32)
         fprintf(fp, "[r%u%s:r%u%s]", value, dmark, value + 1, dmark);
      else
         fprintf(fp, "r%u%s", value, dmark);

      if (value >= 55 && value <= 62 && instr_idx < first_def_idx[value]) {
         const char *compute_labels[] = {
            "gl_LocalInvocationID.xy", "gl_LocalInvocationID.z",
            "gl_WorkGroupID.x", "gl_WorkGroupID.y", "gl_WorkGroupID.z",
            "gl_GlobalInvocationID.x", "gl_GlobalInvocationID.y", "gl_GlobalInvocationID.z"
         };
         fprintf(fp, " /* %s */", compute_labels[value - 55]);
      }
   }
}

static inline void
va_print_float_src(FILE *fp, unsigned type, unsigned value, unsigned size, unsigned fau_page,
                   bool neg, bool abs, const cmpbe_chunk_CMMN *ctx, unsigned instr_idx, const uint32_t *first_def_idx)
{
   if (type == VA_SRC_IMM_TYPE) {
      assert(value < 32 && "overflow in LUT");
      fprintf(fp, "0x%X", va_immediates[value]);
   } else {
      va_print_src(fp, type, value, size, fau_page, ctx, instr_idx, first_def_idx);
   }

   if (neg) fprintf(fp, ".neg");
   if (abs) fprintf(fp, ".abs");
}

static inline void
va_print_dest(FILE *fp, unsigned mask, unsigned value, unsigned size, unsigned instr_idx, const uint32_t *first_def_idx)
{
   if (size > 32)
      fprintf(fp, "[r%u:r%u]", value, value + 1);
   else
      fprintf(fp, "r%u", value);

   if (mask != 0x3)
      fprintf(fp, ".h%u", (mask == 1) ? 0 : 1);

   if (value >= 55 && value <= 62 && instr_idx == first_def_idx[value]) {
      const char *compute_labels[] = {
         "gl_LocalInvocationID.xy", "gl_LocalInvocationID.z",
         "gl_WorkGroupID.x", "gl_WorkGroupID.y", "gl_WorkGroupID.z",
         "gl_GlobalInvocationID.x", "gl_GlobalInvocationID.y", "gl_GlobalInvocationID.z"
       };
      fprintf(fp, " /* clobbers %s */", compute_labels[value - 55]);
   }
}

<%def name="print_instr(op)">
      if (!fp && program_ctx) {
         AnalyzedInstruction *ai = &program_ctx[instr_idx];
         % for src in op.srcs:
            if (((instr >> ${src.offset['mode']}) & ${src.mask['mode']}) <= 1) {
               uint32_t r = (instr >> ${src.offset['value']}) & ${hex(src.mask['value'])};
               if (r < 64) {
                  % if src.size == 64:
                     % if src.swizzle or src.widen:
                        <%
                           swz_field = src.offset.get('swizzle', src.offset.get('widen'))
                           swz_mask = src.mask.get('swizzle', src.mask.get('widen'))
                        %>
                        unsigned swz = (instr >> ${swz_field}) & ${hex(swz_mask)};
                        if ((swz & 1) == 0) {
                           ai->gen_mask |= BIT(r);
                        } else {
                           ai->gen_mask |= BIT(r + 1);
                        }
                     % else:
                        ai->gen_mask |= BIT(r) | BIT(r + 1);
                     % endif
                  % else:
                     ai->gen_mask |= BIT(r);
                  % endif
               }
            }
         % endfor

         % for index, sr in enumerate(op.staging):
            <%
               # Determine structural staging size dynamically
               sr_count = sr.count if sr.count != 0 else 1
               for mod in op.modifiers:
                  if mod.name == "staging_register_write_count" and sr.write:
                     sr_count = f"(((instr >> {mod.start}) & {hex((1 << mod.size) - 1)}) + 1)"
                  elif mod.name == "staging_register_count":
                     sr_count = f"((instr >> {mod.start}) & {hex((1 << mod.size) - 1)})"
            %>
            {
               uint32_t base_r = (instr >> ${sr.offset['value']}) & ${hex(sr.mask['value'])};
               uint32_t count = ${sr_count};
               for (uint32_t i = 0; i < count; ++i) {
                  if (base_r + i < 64) {
                     % if op.name.startswith("STORE"):
                        // STORE reads from staging registers to push to memory
                        ai->gen_mask |= BIT(base_r + i);
                     % else:
                        // LOAD and texture samples write into staging registers
                        ai->def_mask |= BIT(base_r + i);
                     % endif
                  }
               }
            }
         % endfor

         % for dest in op.dests:
            if (((instr >> ${dest.offset['mode']}) & ${dest.mask['mode']}) != 0xC0) {
               uint32_t r = (instr >> ${dest.offset['value']}) & ${hex(dest.mask['value'])};
               if (r < 64) {
                  % if dest.size == 64:
                     ai->def_mask |= BIT(r) | BIT(r + 1);
                  % else:
                     ai->def_mask |= BIT(r);
                  % endif
               }
            }
         % endfor

         % if op.name.startswith("LOAD") or op.name.startswith("STORE"):
            if (((instr >> 6) & 0x3) != VA_SRC_UNIFORM_TYPE) {
               uint32_t parsed_offset = (instr >> 16) & 0xFFFF;
               if (parsed_offset < MAX_STACK_SLOTS) {
                  ai->stack_slot = parsed_offset;
                  % if op.name.startswith("STORE"):
                     ai->is_store = true;
                  % else:
                     ai->is_load = true;
                  % endif
               }
            }
         % endif
         return;
      }

<% no_comma = True %>
      fputs("${op.name}", fp);
% for mod in op.modifiers:
% if mod.name not in ["staging_register_count", "staging_register_write_count"]:
% if mod.is_enum:
      fputs(valhall_${safe_name(mod.enum)}[(instr >> ${mod.start}) & ${hex((1 << mod.size) - 1)}], fp);
% else:
      if (instr & BIT(${mod.start})) fputs(".${mod.name}", fp);
% endif
% endif
% endfor
      fprintf(fp, "%s ", valhall_flow[(instr >> ${op.offset['flow']}) & ${hex(op.mask['flow'])}]);
% for i, dest in enumerate(op.dests):
<% no_comma = False %>
      va_print_dest(fp, (instr >> ${dest.offset['mode']}) & ${hex(dest.mask['mode'])}, (instr >> ${dest.offset['value']}) & ${hex(dest.mask['value'])}, ${dest.size}, instr_idx, first_def_idx);
% endfor
% for index, sr in enumerate(op.staging):
% if not no_comma:
      fputs(", ", fp);
% endif
<%
   no_comma = False
   if sr.count != 0:
      sr_count = sr.count;
   else:
      for mod in op.modifiers:
         if mod.name == "staging_register_write_count" and sr.write:
            sr_count = f"(((instr >> {mod.start}) & {hex((1 << mod.size) - 1)}) + 1)";
         elif mod.name == "staging_register_count":
            sr_count = f"((instr >> {mod.start}) & {hex((1 << mod.size) - 1)})";
%>
      fprintf(fp, "@");
      for (unsigned i = 0; i < ${sr_count}; ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> ${sr.offset['value']}) & ${hex(sr.mask['value'])}) + i));
      }
% endfor
% for i, src in enumerate(op.srcs):
% if not no_comma:
      fputs(", ", fp);
% endif
<% no_comma = False %>
% if src.absneg:
      va_print_float_src(fp, (instr >> ${src.offset['mode']}) & ${hex(src.mask['mode'])}, (instr >> ${src.offset['value']}) & ${hex(src.mask['value'])},
                         ${src.size}, (instr >> ${op.offset['fau_page']}) & ${hex(op.mask['fau_page'])},
                         instr & BIT(${src.offset['neg']}), instr & BIT(${src.offset['abs']}), ctx, instr_idx, first_def_idx);
% elif src.is_float:
      va_print_float_src(fp, (instr >> ${src.offset['mode']}) & ${src.mask['mode']}, (instr >> ${src.offset['value']}) & ${hex(src.mask['value'])},
                         ${src.size}, (instr >> ${op.offset['fau_page']}) & ${hex(op.mask['fau_page'])}, false, false, ctx, instr_idx, first_def_idx);
% else:
      va_print_src(fp, (instr >> ${src.offset['mode']}) & ${src.mask['mode']}, (instr >> ${src.offset['value']}) & ${hex(src.mask['value'])},
                   ${src.size}, (instr >> ${op.offset['fau_page']}) & ${hex(op.mask['fau_page'])}, ctx, instr_idx, first_def_idx);
% endif
% if src.swizzle:
% if src.size == 32:
      fputs(valhall_widen[(instr >> ${src.offset['swizzle']}) & ${hex(src.mask['swizzle'])}], fp);
% else:
      fputs(valhall_swizzles_16_bit[(instr >> ${src.offset['swizzle']}) & ${hex(src.mask['swizzle'])}], fp);
% endif
% endif
% if src.lanes:
      fputs(valhall_lanes_8_bit[(instr >> ${src.offset['widen']}) & ${hex(src.mask['widen'])}], fp);
% elif src.halfswizzle:
      fputs(valhall_half_swizzles_8_bit[(instr >> ${src.offset['widen']}) & ${hex(src.mask['widen'])}], fp);
% elif src.widen:
      fputs(valhall_swizzles_${src.size}_bit[(instr >> ${src.offset['widen']}) & ${hex(src.mask['widen'])}], fp);
% elif src.combine:
      fputs(valhall_combine[(instr >> ${src.offset['combine']}) & ${hex(src.mask['combine'])}], fp);
% endif
% if src.lane:
      fputs(valhall_lane_${src.size}_bit[(instr >> ${src.offset['lane']}) & ${hex(src.mask['lane'])}], fp);
% endif
% if 'not' in src.offset:
      if (instr & BIT(${src.offset['not']})) fputs(".not", fp);
% endif
% endfor
% for imm in op.immediates:
<%
   prefix = "#" if imm.name == "constant" else imm.name + ":"
   fmt = "%d" if imm.signed else "0x%X"
%>
      fprintf(fp, ", ${prefix}${fmt}", (uint32_t) ${"SEXT(" if imm.signed else ""} ((instr >> ${imm.start}) & MASK(${imm.size})) ${f", {imm.size})" if imm.signed else ""});
% endfor
</%def>

<%def name="recurse_subcodes(op_bucket)">
%if op_bucket.instr:
${print_instr(op_bucket.instr)}
%else:
   opcode = (instr >> ${op_bucket.start}) & ${hex(op_bucket.mask)};
   switch (opcode) {
%for op in op_bucket.children:
   case ${hex(op)}:
   {
${recurse_subcodes(op_bucket.children[op])}
      break;
   }
%endfor
   }
%endif
</%def>

static AnalyzedInstruction *program_ctx = NULL;

void
va_disasm_instr(FILE *fp, uint64_t instr, const cmpbe_chunk_CMMN *ctx, unsigned instr_idx, const uint32_t *first_def_idx)
{
   unsigned opcode;
   ${recurse_subcodes(OPCODES)}
}

static bool is_branch(uint64_t instr)
{
<% (exact, mask) = OPCODES.get_exact_mask("BRANCHZ") %>
   if ((instr & ${hex(mask)}) == ${hex(exact)}) return true;
<% (exact, mask) = OPCODES.get_exact_mask("BRANCHZI") %>
   if ((instr & ${hex(mask)}) == ${hex(exact)}) return true;
   return false;
}

void
disassemble_valhall(FILE *fp, const void *code, size_t size, bool verbose, const cmpbe_chunk_CMMN *ctx)
{
   assert((size & 7) == 0);
   const uint64_t *words = (const uint64_t *)code;
   uint32_t instruction_count = size / 8;

   if (instruction_count == 0) return;

   AnalyzedInstruction *program = calloc(instruction_count, sizeof(AnalyzedInstruction));
   assert(program != NULL);

   uint32_t first_def_idx[64];
   for (int r = 0; r < 64; r++) first_def_idx[r] = 0xFFFFFFFF;

   program_ctx = program;

   uint32_t executable_limit = instruction_count;
   for (uint32_t i = 0; i < instruction_count; i++) {
      program[i].raw_word = words[i];
      program[i].branch_target_idx = -1;
      program[i].num_incoming_branches = 0;

      if (((words[i] >> 59) & 0x0F) == 0x0F) {
         executable_limit = i + 1;
         break;
      }

      va_disasm_instr(NULL, words[i], NULL, i, first_def_idx);

      for (int r = 0; r < 64; r++) {
         if ((program[i].def_mask & BIT(r)) && first_def_idx[r] == 0xFFFFFFFF) {
            first_def_idx[r] = i;
         }
      }

      if (program[i].is_branch = is_branch(words[i])) {
         int32_t relative_offset = (int32_t)SEXT((words[i] >> 8) & MASK(24), 24);
         int32_t dest_idx = (int32_t)i + 1 + relative_offset;
         if (dest_idx >= 0 && dest_idx < (int32_t)instruction_count) {
            program[i].branch_target_idx = dest_idx;
         }
      }
   }

   program_ctx = NULL;

   for (uint32_t i = 0; i < executable_limit; i++) {
      if (program[i].is_branch && program[i].branch_target_idx != -1) {
         uint32_t target = program[i].branch_target_idx;
         if (target < instruction_count) {
            uint32_t cnt = program[target].num_incoming_branches;
            if (cnt < 16) {
               program[target].incoming_branch_offsets[cnt] = i * 8;
               program[target].num_incoming_branches++;
            }
         }
      }
   }

   bool change = true;
   uint64_t global_divergence_mask = 0;

   while (change) {
      change = false;
      for (int32_t i = (int32_t)executable_limit - 1; i >= 0; i--) {
         uint64_t next_live_regs = 0;
         uint8_t next_live_stack[MAX_STACK_SLOTS];
         memset(next_live_stack, 0, MAX_STACK_SLOTS);

         if (i == (int32_t)executable_limit - 1) {
            next_live_regs = 0;
         } else {
            next_live_regs = program[i + 1].live_regs_in;
            memcpy(next_live_stack, program[i + 1].live_stack_in, MAX_STACK_SLOTS);
         }

         if (program[i].branch_target_idx != -1) {
            uint32_t target = program[i].branch_target_idx;
            next_live_regs |= program[target].live_regs_in;
            for (int s = 0; s < MAX_STACK_SLOTS; s++) {
               if (program[target].live_stack_in[s]) next_live_stack[s] = 1;
            }
         }

         if (program[i].is_reconverge = (((words[i] >> 56) & 0x1) == 0x1)) {
            global_divergence_mask = 0;
         }
         if (program[i].is_branch) {
            uint32_t target = program[i].branch_target_idx;
            if (target != -1) {
               global_divergence_mask |= program[target].live_regs_in;
            }
         }

         next_live_regs |= global_divergence_mask;

         if (program[i].live_regs_out != next_live_regs) {
            program[i].live_regs_out = next_live_regs;
            change = true;
         }

         uint64_t computed_regs_in = program[i].gen_mask | (program[i].live_regs_out & ~program[i].def_mask);
         if (program[i].live_regs_in != computed_regs_in) {
            program[i].live_regs_in = computed_regs_in;
            change = true;
         }

         if (program[i].stack_slot != -1) {
            if (program[i].is_load) {
               next_live_stack[program[i].stack_slot] = 1;
            } else if (program[i].is_store) {
               next_live_stack[program[i].stack_slot] = 0;
            }
         }

         if (memcmp(program[i].live_stack_out, next_live_stack, MAX_STACK_SLOTS) != 0) {
            memcpy(program[i].live_stack_out, next_live_stack, MAX_STACK_SLOTS);
            change = true;
         }

         uint8_t computed_stack_in[MAX_STACK_SLOTS];
         memcpy(computed_stack_in, next_live_stack, MAX_STACK_SLOTS);
         if (program[i].stack_slot != -1 && program[i].is_load) {
            computed_stack_in[program[i].stack_slot] = 1;
         }

         if (memcmp(program[i].live_stack_in, computed_stack_in, MAX_STACK_SLOTS) != 0) {
            memcpy(program[i].live_stack_in, computed_stack_in, MAX_STACK_SLOTS);
            change = true;
         }
      }
   }

    bool in_data_section = false;
    fprintf(fp, ".text: // %u instructions\\n", executable_limit);

    for (unsigned i = 0; i < instruction_count; ++i) {
        uint64_t instr = words[i];
        unsigned current_offset = i * 8;

        if (in_data_section) {
        uint32_t row_bytes = 8;
        uint64_t next_instr = 0;
        if (i + 1 < instruction_count) {
            next_instr = words[i + 1];
            row_bytes = 16;
        }
        uint32_t q0 = (uint32_t)(instr & 0xFFFFFFFF);
        uint32_t q1 = (uint32_t)(instr >> 32);
        uint32_t q2 = (uint32_t)(next_instr & 0xFFFFFFFF);
        uint32_t q3 = (uint32_t)(next_instr >> 32);

        unsigned char db[16];
        memcpy(&db[0], &instr, 8);
        if (row_bytes == 16) {
            memcpy(&db[8], &next_instr, 8);
            fprintf(fp, "/* [0x%04X] */  %08X %08X %08X %08X  | ", current_offset, q0, q1, q2, q3);
        } else {
            memset(&db[8], 0, 8);
            fprintf(fp, "/* [0x%04X] */  %08X %08X -------- --------  | ", current_offset, q0, q1);
        }
        for (int j = 0; j < 16; j++) {
            if (j < (int)row_bytes) {
                fprintf(fp, "%c", (db[j] >= 32 && db[j] <= 126) ? db[j] : '.');
            } else {
                fprintf(fp, " ");
            }
        }
        fprintf(fp, " |\\n");
        if (row_bytes == 16) i++;
        continue;
        }

        bool is_jump_target = (program[i].num_incoming_branches > 0);
        bool is_branch_instr = program[i].is_branch;
        bool is_above_jump_target = (i + 1 < executable_limit) && (program[i + 1].num_incoming_branches > 0);

        bool live_flows_sequentially = false;
        if (i + 1 < executable_limit) {
            live_flows_sequentially = (program[i].live_regs_out == program[i + 1].live_regs_in);
        }

        bool show_as_generic_live = live_flows_sequentially && !is_jump_target;
        if (is_jump_target) {
        fprintf(fp, "/* Jump target from: ");
        for (uint32_t b = 0; b < program[i].num_incoming_branches; b++) {
            fprintf(fp, "0x%04X%s", program[i].incoming_branch_offsets[b], (b == program[i].num_incoming_branches - 1) ? "" : ", ");
        }
        fprintf(fp, " */\\n");
        }

        if (show_as_generic_live) {
            va_print_live_set_ranges(fp, "live", program[i].live_regs_in);
        } else {
            va_print_live_set_ranges(fp, "live-in", program[i].live_regs_in);
        }

        fprintf(fp, "%4u [0x%04X] %016llX   ", i, current_offset, (unsigned long long)instr);
        va_disasm_instr(fp, instr, ctx, i, first_def_idx);

        if (is_branch_instr && program[i].branch_target_idx != -1) {
            fprintf(fp, " /* jumps to 0x%04X (instruction #%u) */",
                program[i].branch_target_idx * 8, program[i].branch_target_idx);
        }
        fprintf(fp, "\\n");
        bool force_live_out = is_branch_instr || is_above_jump_target || !live_flows_sequentially;

        if (force_live_out) {
        va_print_live_set_ranges(fp, "live-out", program[i].live_regs_out);
            fprintf(fp, "\\n");
        }

        if (((instr >> 59) & 0x0F) == 0x0F) {
            in_data_section = true;
            fprintf(fp, ".rodata: // %lu bytes\\n", size - (executable_limit * 8));
        }
    }

    free(program);
    fprintf(fp, "\\n");
}
"""


class OpBucket:
    def __init__(self):
        self.start = None
        self.mask = None
        self.instr = None
        self.children = {}

    def insert(self, subcodes, ins):
        if len(subcodes) == 0:
            self.instr = ins
        else:
            sc = subcodes[0]
            assert self.start is None or self.start == sc.start
            assert self.mask is None or self.mask == sc.mask
            self.start = sc.start
            self.mask = sc.mask
            if sc.value not in self.children:
                self.children[sc.value] = OpBucket()
            self.children[sc.value].insert(subcodes[1:], ins)

    def get_exact_mask(self, op_name, exact=0, mask=0):
        if self.instr:
            if self.instr.name == op_name:
                return (exact, mask)
            else:
                return ()
        else:
            for op in self.children:
                exact_mask = self.children[op].get_exact_mask(
                    op_name,
                    exact | (op << self.start),
                    mask | (self.mask << self.start),
                )
                if exact_mask:
                    return exact_mask
            return ()


OPCODES = OpBucket()
for ins in instructions:
    OPCODES.insert(ins.opcode, ins)

try:
    print(
        Template(template).render(
            OPCODES=OPCODES,
            IMMEDIATES=immediates,
            ENUMS=enums,
            typesize=typesize,
            safe_name=safe_name,
        )
    )
except:
    print(exceptions.text_error_template().render())
