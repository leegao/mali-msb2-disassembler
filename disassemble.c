// AUTO-GENERATED - DO NOT EDIT

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "disassemble.h"
#include "cmpbe_chunks.h"

#define BIT(b)          (1ull << (b))
#define MASK(count)    ((1ull << (count)) - 1)
#define SEXT(b, count) ((b ^ BIT(count - 1)) - BIT(count - 1))
#define UNUSED         __attribute__((unused))

#define VA_SRC_UNIFORM_TYPE 0x2
#define VA_SRC_IMM_TYPE     0x3

UNUSED static const char *valhall_flow[] = {
   "",
   ".wait0",
   ".wait1",
   ".wait01",
   ".wait2",
   ".wait02",
   ".wait12",
   ".wait012",
   ".wait0126",
   ".wait",
   ".reconverge",
   ".reserved",
   ".wait_resource",
   ".discard",
   ".reserved",
   ".end",
};

UNUSED static const char *valhall_fau_special_page_0[] = {
   ".reserved",
   ".reserved",
   ".warp_id",
   ".reserved",
   ".framebuffer_size",
   ".atest_datum",
   ".sample",
   ".reserved",
   ".blend_descriptor_0",
   ".blend_descriptor_1",
   ".blend_descriptor_2",
   ".blend_descriptor_3",
   ".blend_descriptor_4",
   ".blend_descriptor_5",
   ".blend_descriptor_6",
   ".blend_descriptor_7",
};

UNUSED static const char *valhall_fau_special_page_1[] = {
   ".reserved",
   ".thread_local_pointer",
   ".reserved",
   ".workgroup_local_pointer",
   ".reserved",
   ".reserved",
   ".reserved",
   ".resource_table_pointer",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_fau_special_page_3[] = {
   ".reserved",
   ".lane_id",
   ".reserved",
   ".core_id",
   ".shader_output",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".program_counter",
};

UNUSED static const char *valhall_swizzles_8_bit[] = {
   "",
   ".b3210",
   ".b0101",
   ".b2323",
   ".b0000",
   ".b1111",
   ".b2222",
   ".b3333",
   ".b2301",
   ".b1032",
   ".b0011",
   ".b2233",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_lanes_8_bit[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".b00",
   ".b11",
   ".b22",
   ".b33",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_half_swizzles_8_bit[] = {
   ".b00",
   ".b10",
   ".b20",
   ".b30",
   ".b01",
   ".b11",
   ".b21",
   ".b31",
   ".b02",
   ".b12",
   ".b22",
   ".b32",
   ".b03",
   ".b13",
   ".b23",
   ".b33",
};

UNUSED static const char *valhall_swizzles_16_bit[] = {
   ".h00",
   ".h10",
   "",
   ".h11",
   ".b00",
   ".b20",
   ".b02",
   ".b22",
   ".b11",
   ".b31",
   ".b13",
   ".b33",
   ".b01",
   ".b23",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_swizzles_32_bit[] = {
   "",
   ".reserved",
   ".h0",
   ".h1",
   ".b0",
   ".b1",
   ".b2",
   ".b3",
};

UNUSED static const char *valhall_swizzles_64_bit[] = {
   "",
   ".reserved",
   ".h0",
   ".h1",
   ".b0",
   ".b1",
   ".b2",
   ".b3",
   ".w0",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_lane_8_bit[] = {
   ".b0",
   ".b1",
   ".b2",
   ".b3",
};

UNUSED static const char *valhall_combine[] = {
   "",
   ".h0",
   ".h1",
   ".and",
   ".lowbits",
};

UNUSED static const char *valhall_lane_16_bit[] = {
   ".h0",
   ".h1",
};

UNUSED static const char *valhall_load_lane_8_bit[] = {
   "",
   ".b1",
   ".b2",
   ".b3",
   ".h0",
   ".h1",
   ".w0",
   ".d0",
};

UNUSED static const char *valhall_load_lane_16_bit[] = {
   "",
   ".h1",
   ".w0",
   ".d0",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_load_lane_24_bit[] = {
   "",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_load_lane_32_bit[] = {
   "",
   ".d0",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_load_lane_48_bit[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   "",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_load_lane_64_bit[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   "",
};

UNUSED static const char *valhall_load_lane_96_bit[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   "",
   ".reserved",
};

UNUSED static const char *valhall_load_lane_128_bit[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   "",
};

UNUSED static const char *valhall_round_mode[] = {
   "",
   ".rtp",
   ".rtn",
   ".rtz",
};

UNUSED static const char *valhall_result_type[] = {
   ".i1",
   ".f1",
   ".m1",
   ".u1",
};

UNUSED static const char *valhall_widen[] = {
   "",
   ".h0",
   ".h1",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
};

UNUSED static const char *valhall_clamp[] = {
   "",
   ".clamp_0_inf",
   ".clamp_m1_1",
   ".clamp_0_1",
};

UNUSED static const char *valhall_condition[] = {
   ".eq",
   ".gt",
   ".ge",
   ".ne",
   ".lt",
   ".le",
   ".gtlt",
   ".total",
};

UNUSED static const char *valhall_dimension[] = {
   ".1d",
   ".2d",
   ".3d",
   ".cube",
};

UNUSED static const char *valhall_lod_mode[] = {
   ".zero",
   ".computed",
   ".reserved",
   ".reserved",
   ".explicit",
   ".computed_bias",
   ".grdesc",
   ".reserved",
};

UNUSED static const char *valhall_register_format[] = {
   ".auto",
   ".reserved",
   ".f32",
   ".f16",
   ".s32",
   ".s16",
   ".u32",
   ".u16",
};

UNUSED static const char *valhall_staging_register_count[] = {
   ".sr0",
   ".sr1",
   ".sr2",
   ".sr3",
   ".sr4",
   ".sr5",
   ".sr6",
   ".sr7",
};

UNUSED static const char *valhall_staging_register_write_count[] = {
   ".write1",
   ".write2",
   ".write3",
   ".write4",
   ".write5",
   ".write6",
   ".write7",
   ".write8",
};

UNUSED static const char *valhall_write_mask[] = {
   ".reserved",
   ".r",
   ".g",
   ".rg",
   ".b",
   ".rb",
   ".gb",
   ".rgb",
   ".a",
   ".ra",
   ".ga",
   ".rga",
   ".ba",
   ".rba",
   ".gba",
   "",
};

UNUSED static const char *valhall_fetch_component[] = {
   ".gather4_r",
   ".gather4_g",
   ".gather4_b",
   ".gather4_a",
};

UNUSED static const char *valhall_register_type[] = {
   ".reserved",
   ".f",
   ".u",
   ".s",
};

UNUSED static const char *valhall_register_width[] = {
   ".16",
   ".32",
};

UNUSED static const char *valhall_varying_texture_register_width[] = {
   ".16",
   ".32",
   ".16.32",
   ".32.32",
};

UNUSED static const char *valhall_vector_size[] = {
   "",
   ".v2",
   ".v3",
   ".v4",
};

UNUSED static const char *valhall_slot[] = {
   ".slot0",
   ".slot1",
   ".slot2",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".slot7",
};

UNUSED static const char *valhall_memory_access[] = {
   "",
   ".istream",
   ".estream",
   ".force",
};

UNUSED static const char *valhall_subgroup_size[] = {
   ".subgroup2",
   ".subgroup4",
   ".subgroup8",
   "",
};

UNUSED static const char *valhall_lane_operation[] = {
   "",
   ".xor",
   ".accumulate",
   ".shift",
};

UNUSED static const char *valhall_inactive_result[] = {
   "",
   ".umax",
   ".i1",
   ".v2i1",
   ".smin",
   ".smax",
   ".v2smin",
   ".v2smax",
   ".v4smin",
   ".v4smax",
   ".f1",
   ".v2f1",
   ".infn",
   ".inf",
   ".v2infn",
   ".v2inf",
};

UNUSED static const char *valhall_mux[] = {
   ".neg",
   "",
   ".fp_zero",
   ".bit",
};

UNUSED static const char *valhall_sample_mode[] = {
   ".center",
   ".centroid",
   ".sample",
   ".explicit",
};

UNUSED static const char *valhall_update_mode[] = {
   ".store",
   ".retrieve",
   ".reserved",
   ".clobber",
};

UNUSED static const char *valhall_sample_and_update_mode[] = {
   ".center_store",
   ".centroid_store",
   ".sample_store",
   ".explicit_store",
   ".center_clobber",
   ".reserved",
   ".sample_clobber",
   ".retrieve",
};

UNUSED static const char *valhall_source[] = {
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".cycle_counter",
   ".system_timestamp",
};

UNUSED static const char *valhall_source_format[] = {
   ".src_flat32",
   ".src_flat16",
   ".src_f32",
   ".src_f16",
};

UNUSED static const char *valhall_atomic_operation[] = {
   ".reserved",
   ".reserved",
   ".aadd",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".reserved",
   ".asmin",
   ".asmax",
   ".aumin",
   ".aumax",
   ".aand",
   ".aor",
   ".axor",
   ".axchg",
};

UNUSED static const char *valhall_atomic_operation_with_1[] = {
   ".ainc",
   ".adec",
   ".aumax1",
   ".asmax1",
   ".aor1",
};

UNUSED static const char *valhall_nan_mode[] = {
   ".none",
   ".flush_nan",
   ".quiet_nan",
};

static const uint32_t va_immediates[32] = {
   0x0,
   0xffffffff,
   0x7fffffff,
   0xfafcfdfe,
   0x1000000,
   0x80002000,
   0x70605030,
   0xc0b0a090,
   0x3020100,
   0x7060504,
   0xb0a0908,
   0xf0e0d0c,
   0x13121110,
   0x17161514,
   0x1b1a1918,
   0x1f1e1d1c,
   0x3f800000,
   0x3dcccccd,
   0x3ea2f983,
   0x3f317218,
   0x40490fdb,
   0x0,
   0x477fff00,
   0x5c005bf8,
   0x2e660000,
   0x34000000,
   0x38000000,
   0x3c000000,
   0x40000000,
   0x44000000,
   0x48000000,
   0x42480000,
};

static inline void
va_print_src(FILE *fp, unsigned type, unsigned value, unsigned size, unsigned fau_page, const cmpbe_chunk_CMMN *ctx)
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

         // FCST constant pools
         for (uint32_t c = 0; c < ctx->constant_count; c++) {
            if (ctx->constants[c].constant_id == byte_offset) {
               uint32_t raw_val = ctx->constants[c].value;
               float float_val;
               memcpy(&float_val, &raw_val, sizeof(float));
               if (raw_val != 0 && ((raw_val >= 0x38000000 && raw_val <= 0x4B800000) ||
                                    (raw_val >= 0xB8000000 && raw_val <= 0xCB800000))) {
                  fprintf(fp, " (const: %gf)", float_val);
               } else {
                  fprintf(fp, " (const: %u / 0x%X)", raw_val, raw_val);
               }
               matched_meta = true;
               break;
            }
         }

         // Push constants
         if (!matched_meta) {
            for (uint32_t i = 0; i < ctx->ssym_24.count; i++) {
               for (uint32_t r = 0; r < ctx->ssym_24.symbols[i].rloc_count; r++) {
                  uint32_t start = ctx->ssym_24.symbols[i].relocations[r].offset;
                  uint32_t end = start + ctx->ssym_24.symbols[i].relocations[r].size;

                  if (byte_offset >= start && byte_offset < end) {
                     uint32_t internal_offset = byte_offset - start;
                     const char *member_name = NULL;
                     uint32_t member_base = 0;

                     // Get member name
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
                           fprintf(fp, " (pushConstants_0.%s)", member_name);
                        } else {
                           fprintf(fp, " (pushConstants_0.%s + %uB)", member_name, internal_offset - member_base);
                        }
                     } else {
                        fprintf(fp, " (pushConstants_%s + %uB)", ctx->ssym_24.symbols[i].name.string_data, internal_offset);
                     }
                     matched_meta = true;
                     break;
                  }
               }
               if (matched_meta) break;
            }
         }

         // Descriptors
         if (!matched_meta) {
            for (uint32_t b = 0; b < ctx->ssym_43.count; b++) {
               if (ctx->ssym_43.symbols[b].binding_id == pair_index) {
                  fprintf(fp, " (descriptor: %s)", ctx->ssym_43.symbols[b].name.string_data);
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
   }
}

static inline void
va_print_float_src(FILE *fp, unsigned type, unsigned value, unsigned size, unsigned fau_page, bool neg, bool abs, const cmpbe_chunk_CMMN *ctx)
{
   if (type == VA_SRC_IMM_TYPE) {
      assert(value < 32 && "overflow in LUT");
      fprintf(fp, "0x%X", va_immediates[value]);
   } else {
      va_print_src(fp, type, value, size, fau_page, ctx);
   }

   if (neg) fprintf(fp, ".neg");
   if (abs) fprintf(fp, ".abs");
}

static inline void
va_print_dest(FILE *fp, unsigned mask, unsigned value, unsigned size)
{
   if (size > 32)
      fprintf(fp, "[r%u:r%u]", value, value + 1);
   else
      fprintf(fp, "r%u", value);

   if (mask != 0x3)
      fprintf(fp, ".h%u", (mask == 1) ? 0 : 1);
}





void
va_disasm_instr(FILE *fp, uint64_t instr, const cmpbe_chunk_CMMN *ctx)
{
   unsigned opcode;
   
   opcode = (instr >> 48) & 0x1ff;
   switch (opcode) {
   case 0x0:
   {



      fputs("NOP", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);


      break;
   }
   case 0x1f:
   {



      fputs("BRANCHZ", fp);
      if (instr & BIT(35)) fputs(".conservative", fp);
      if (instr & BIT(36)) fputs(".eq", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_combine[(instr >> 37) & 0x7], fp);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(27)) , 27));


      break;
   }
   case 0x20:
   {



      fputs("DISCARD.f32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x2f:
   {



      fputs("BRANCHZI", fp);
      if (instr & BIT(35)) fputs(".conservative", fp);
      if (instr & BIT(36)) fputs(".eq", fp);
      if (instr & BIT(40)) fputs(".absolute", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_combine[(instr >> 37) & 0x7], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x45:
   {



      fputs("BARRIER", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);


      break;
   }
   case 0x154:
   {



      fputs("CSEL.f32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);


      break;
   }
   case 0x155:
   {



      fputs("CSEL.v2f16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);


      break;
   }
   case 0x150:
   {



      fputs("CSEL.u32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x151:
   {



      fputs("CSEL.v2u16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x158:
   {



      fputs("CSEL.s32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x159:
   {



      fputs("CSEL.v2s16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x56:
   {



      fputs("LD_VAR_SPECIAL", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 12) & MASK(4)) );


      break;
   }
   case 0x40:
   {



      fputs("LD_VAR_BUF_FLAT_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 8) & MASK(11)) );


      break;
   }
   case 0x5f:
   {



      fputs("LD_VAR_BUF_FLAT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x5c:
   {



      fputs("LD_VAR_BUF_IMM.f32", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_source_format[(instr >> 24) & 0xf], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 16) & MASK(8)) );


      break;
   }
   case 0x5d:
   {



      fputs("LD_VAR_BUF_IMM.f16", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_source_format[(instr >> 24) & 0xf], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 16) & MASK(8)) );


      break;
   }
   case 0x6c:
   {



      fputs("LD_VAR_BUF.f32", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_source_format[(instr >> 24) & 0xf], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x6d:
   {



      fputs("LD_VAR_BUF.f16", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_source_format[(instr >> 24) & 0xf], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x64:
   {



      fputs("LD_VAR", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x54:
   {



      fputs("LD_VAR_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_sample_mode[(instr >> 38) & 0x3], fp);
      fputs(valhall_update_mode[(instr >> 36) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 8) & MASK(4)) );

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 12) & MASK(8)) );


      break;
   }
   case 0x55:
   {



      fputs("LD_VAR_FLAT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x41:
   {



      fputs("LD_VAR_FLAT_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 8) & MASK(4)) );

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 12) & MASK(8)) );


      break;
   }
   case 0x66:
   {

   opcode = (instr >> 37) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("LD_ATTR_IMM", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 20) & MASK(4)) );

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 16) & MASK(4)) );


      break;
   }
   case 0x1:
   {



      fputs("LD_TEX_IMM", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 20) & MASK(4)) );

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 16) & MASK(4)) );


      break;
   }
   }

      break;
   }
   case 0x76:
   {

   opcode = (instr >> 37) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("LD_ATTR", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("LD_TEX", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x44:
   {



      fputs("LD_GCLK_U64", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }


      break;
   }
   case 0x67:
   {

   opcode = (instr >> 37) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("LEA_ATTR_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 16) & MASK(4)) );

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 20) & MASK(4)) );


      break;
   }
   case 0x1:
   {



      fputs("LEA_TEX_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 16) & MASK(4)) );

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 20) & MASK(4)) );


      break;
   }
   }

      break;
   }
   case 0x77:
   {

   opcode = (instr >> 37) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("LEA_ATTR", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("LEA_TEX", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x6a:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x0:
   {



      fputs("LD_PKA.i8", fp);
      fputs(valhall_load_lane_8_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("LD_PKA.i16", fp);
      fputs(valhall_load_lane_16_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x2:
   {



      fputs("LD_PKA.i24", fp);
      fputs(valhall_load_lane_24_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x3:
   {



      fputs("LD_PKA.i32", fp);
      fputs(valhall_load_lane_32_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x4:
   {



      fputs("LD_PKA.i48", fp);
      fputs(valhall_load_lane_48_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x5:
   {



      fputs("LD_PKA.i64", fp);
      fputs(valhall_load_lane_64_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x6:
   {



      fputs("LD_PKA.i96", fp);
      fputs(valhall_load_lane_96_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x7:
   {



      fputs("LD_PKA.i128", fp);
      fputs(valhall_load_lane_128_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x6e:
   {



      fputs("LEA_BUF", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x5e:
   {



      fputs("LEA_BUF_IMM", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", table:0x%X", (uint32_t)  ((instr >> 8) & MASK(4)) );

      fprintf(fp, ", index:0x%X", (uint32_t)  ((instr >> 12) & MASK(8)) );


      break;
   }
   case 0x60:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x0:
   {



      fputs("LOAD.i8", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_8_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x1:
   {



      fputs("LOAD.i16", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_16_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x2:
   {



      fputs("LOAD.i24", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_24_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x3:
   {



      fputs("LOAD.i32", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_32_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x4:
   {



      fputs("LOAD.i48", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_48_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x5:
   {



      fputs("LOAD.i64", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_64_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x6:
   {



      fputs("LOAD.i96", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_96_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x7:
   {



      fputs("LOAD.i128", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_load_lane_128_bit[(instr >> 36) & 0x7], fp);
      if (instr & BIT(39)) fputs(".unsigned", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   }

      break;
   }
   case 0x61:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x0:
   {



      fputs("STORE.i8", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x1:
   {



      fputs("STORE.i16", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x2:
   {



      fputs("STORE.i24", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x3:
   {



      fputs("STORE.i32", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x4:
   {



      fputs("STORE.i48", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x5:
   {



      fputs("STORE.i64", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x6:
   {



      fputs("STORE.i96", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   case 0x7:
   {



      fputs("STORE.i128", fp);
      fputs(valhall_memory_access[(instr >> 24) & 0x3], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:%d", (uint32_t) SEXT( ((instr >> 8) & MASK(16)) , 16));


      break;
   }
   }

      break;
   }
   case 0x6b:
   {



      fputs("LEA_PKA", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x70:
   {



      fputs("LD_CVT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_memory_access[(instr >> 37) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x71:
   {



      fputs("ST_CVT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_memory_access[(instr >> 37) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x78:
   {



      fputs("LD_TILE", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x79:
   {



      fputs("ST_TILE", fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x7f:
   {



      fputs("BLEND", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_vector_size[(instr >> 28) & 0x3], fp);
      fputs(valhall_register_format[(instr >> 24) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", target:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x7d:
   {



      fputs("ATEST", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x7e:
   {



      fputs("ZS_EMIT", fp);
      if (instr & BIT(25)) fputs(".z", fp);
      if (instr & BIT(24)) fputs(".stencil", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x90:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0x7:
   {



      fputs("V2S16_TO_V2F16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x9:
   {



      fputs("S32_TO_F32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x17:
   {



      fputs("V2U16_TO_V2F16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x19:
   {



      fputs("U32_TO_F32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x4:
   {



      fputs("S16_TO_S32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0x5:
   {



      fputs("S16_TO_F32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0x14:
   {



      fputs("U16_TO_U32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0x15:
   {



      fputs("U16_TO_F32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0xc:
   {



      fputs("F32_TO_S32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);


      break;
   }
   case 0x1c:
   {



      fputs("F32_TO_U32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);


      break;
   }
   case 0xe:
   {



      fputs("V2F16_TO_V2S16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x1e:
   {



      fputs("V2F16_TO_V2U16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xa:
   {



      fputs("F16_TO_S32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0x1a:
   {



      fputs("F16_TO_U32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0xb:
   {



      fputs("F16_TO_F32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);


      break;
   }
   case 0x0:
   {



      fputs("S8_TO_S32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x1:
   {



      fputs("S8_TO_F32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x10:
   {



      fputs("U8_TO_U32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x11:
   {



      fputs("U8_TO_F32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x2:
   {



      fputs("V2S8_TO_V2S16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_half_swizzles_8_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x3:
   {



      fputs("V2S8_TO_V2F16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_half_swizzles_8_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x12:
   {



      fputs("V2U8_TO_V2U16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_half_swizzles_8_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x13:
   {



      fputs("V2U8_TO_V2F16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_half_swizzles_8_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0xd:
   {



      fputs("FROUND.f32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xf:
   {



      fputs("FROUND.v2f16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   }

      break;
   }
   case 0x91:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0x0:
   {



      fputs("MOV.i32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x4:
   {



      fputs("CLZ.u32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x5:
   {



      fputs("CLZ.v2u16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x6:
   {



      fputs("CLZ.v4u8", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x8:
   {



      fputs("IABS.s32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0x9:
   {



      fputs("IABS.v2s16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IABS.v4s8", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xc:
   {



      fputs("POPCOUNT.i32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xd:
   {



      fputs("BITREV.i32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xe:
   {



      fputs("NOT_OLD.i32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x191:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0xe:
   {



      fputs("NOT_OLD.i64", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x95:
   {



      fputs("WMASK", fp);
      fputs(valhall_subgroup_size[(instr >> 36) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x98:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0x0:
   {



      fputs("FLUSH.f32", fp);
      fputs(valhall_nan_mode[(instr >> 8) & 0x3], fp);
      if (instr & BIT(10)) fputs(".ftz", fp);
      if (instr & BIT(11)) fputs(".flush_inf", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x1:
   {



      fputs("FLUSH.v2f16", fp);
      fputs(valhall_nan_mode[(instr >> 8) & 0x3], fp);
      if (instr & BIT(10)) fputs(".ftz", fp);
      if (instr & BIT(11)) fputs(".flush_inf", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   }

      break;
   }
   case 0x99:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0x0:
   {



      fputs("FREXPM.f32", fp);
      if (instr & BIT(24)) fputs(".sqrt", fp);
      if (instr & BIT(25)) fputs(".log", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x1:
   {



      fputs("FREXPM.v2f16", fp);
      if (instr & BIT(24)) fputs(".sqrt", fp);
      if (instr & BIT(25)) fputs(".log", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x2:
   {



      fputs("FREXPE.f32", fp);
      if (instr & BIT(24)) fputs(".sqrt", fp);
      if (instr & BIT(25)) fputs(".log", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3, false, false, ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x3:
   {



      fputs("FREXPE.v2f16", fp);
      if (instr & BIT(24)) fputs(".sqrt", fp);
      if (instr & BIT(25)) fputs(".log", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   }

      break;
   }
   case 0x9c:
   {

   opcode = (instr >> 16) & 0x1f;
   switch (opcode) {
   case 0x0:
   {



      fputs("FRCP.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x1:
   {



      fputs("FRCP.f16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x2:
   {



      fputs("FRSQ.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x3:
   {



      fputs("FRSQ.f16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x8:
   {



      fputs("FLOGD.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xa:
   {



      fputs("FPCLASS.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xb:
   {



      fputs("FPCLASS.f16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xc:
   {



      fputs("FLOG_TABLE.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xe:
   {



      fputs("FRCP_APPROX.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0xf:
   {



      fputs("FRSQ_APPROX.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);


      break;
   }
   case 0x4:
   {



      fputs("FSIN_TABLE.u6", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x5:
   {



      fputs("FCOS_TABLE.u6", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x6:
   {



      fputs("FSINCOS_OFFSET.u6", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xd:
   {



      fputs("FEXP_TABLE.u4", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xa4:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("FADD.f32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x2:
   {



      fputs("FMIN.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x3:
   {



      fputs("FMAX.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x6:
   {



      fputs("LDEXP.f32", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x8:
   {



      fputs("FEXP.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);


      break;
   }
   case 0x9:
   {



      fputs("FADD_LSCALE.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);


      break;
   }
   case 0xe:
   {



      fputs("FATAN_ASSIST.f32", fp);
      if (instr & BIT(24)) fputs(".second", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xa5:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("FADD.v2f16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x2:
   {



      fputs("FMIN.v2f16", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x3:
   {



      fputs("FMAX.v2f16", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);


      break;
   }
   case 0x4:
   {



      fputs("V2F32_TO_V2F16", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);


      break;
   }
   case 0x6:
   {



      fputs("LDEXP.v2f16", fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xa0:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.u32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.u32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.i32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.u32", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xf:
   {



      fputs("CLPER.i32", fp);
      fputs(valhall_subgroup_size[(instr >> 36) & 0xf], fp);
      fputs(valhall_lane_operation[(instr >> 32) & 0x3], fp);
      fputs(valhall_inactive_result[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0xa1:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.v2u16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x5:
   {



      fputs("MKVEC.v2i16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 28) & 0x1], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_16_bit[(instr >> 26) & 0x1], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.v2u16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.v2i16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.v2u16", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0xa2:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.v4u8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.v4u8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.v4i8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.v4u8", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0xa8:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.s32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.s32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.s32", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.s32", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0xa9:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.v2s16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.v2s16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.v2s16", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.v2s16", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0xaa:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.v4s8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.v4s8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xa:
   {



      fputs("IMUL.v4s8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0xb:
   {



      fputs("HADD.v4s8", fp);
      if (instr & BIT(30)) fputs(".rhadd", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0x1a3:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.u64", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.u64", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x6:
   {



      fputs("SEG_ADD.u64", fp);
      if (instr & BIT(38)) fputs(".neg", fp);
      if (instr & BIT(39)) fputs(".preserve_null", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x7:
   {



      fputs("SHADDX.u64", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);

      fprintf(fp, ", shift:0x%X", (uint32_t)  ((instr >> 20) & MASK(3)) );


      break;
   }
   case 0xa:
   {



      fputs("IMULD.u64", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   }

      break;
   }
   case 0x1ab:
   {

   opcode = (instr >> 16) & 0xf;
   switch (opcode) {
   case 0x0:
   {



      fputs("IADD.s64", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x1:
   {



      fputs("ISUB.s64", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);


      break;
   }
   case 0x7:
   {



      fputs("SHADDX.s64", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 26) & 0xf], fp);

      fprintf(fp, ", shift:0x%X", (uint32_t)  ((instr >> 20) & MASK(3)) );


      break;
   }
   }

      break;
   }
   case 0xb2:
   {



      fputs("FMA.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(valhall_widen[(instr >> 24) & 0x3], fp);


      break;
   }
   case 0xb3:
   {



      fputs("FMA.v2f16", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fputs(valhall_round_mode[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 24) & 0x3], fp);


      break;
   }
   case 0xb4:
   {

   opcode = (instr >> 24) & 0x703;
   switch (opcode) {
   case 0x100:
   {



      fputs("LSHIFT_AND.i32", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x0:
   {



      fputs("RSHIFT_AND.i32", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x101:
   {



      fputs("LSHIFT_OR.i32", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x1:
   {



      fputs("RSHIFT_OR.i32", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x102:
   {



      fputs("LSHIFT_XOR.i32", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x2:
   {



      fputs("RSHIFT_XOR.i32", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   }

      break;
   }
   case 0xb5:
   {

   opcode = (instr >> 24) & 0x703;
   switch (opcode) {
   case 0x100:
   {



      fputs("LSHIFT_AND.v2i16", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x0:
   {



      fputs("RSHIFT_AND.v2i16", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x101:
   {



      fputs("LSHIFT_OR.v2i16", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x1:
   {



      fputs("RSHIFT_OR.v2i16", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x102:
   {



      fputs("LSHIFT_XOR.v2i16", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x2:
   {



      fputs("RSHIFT_XOR.v2i16", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   }

      break;
   }
   case 0xb6:
   {

   opcode = (instr >> 24) & 0x703;
   switch (opcode) {
   case 0x100:
   {



      fputs("LSHIFT_AND.v4i8", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x0:
   {



      fputs("RSHIFT_AND.v4i8", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x101:
   {



      fputs("LSHIFT_OR.v4i8", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x1:
   {



      fputs("RSHIFT_OR.v4i8", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x102:
   {



      fputs("LSHIFT_XOR.v4i8", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x2:
   {



      fputs("RSHIFT_XOR.v4i8", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   }

      break;
   }
   case 0x1b7:
   {

   opcode = (instr >> 24) & 0x703;
   switch (opcode) {
   case 0x100:
   {



      fputs("LSHIFT_AND.i64", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x0:
   {



      fputs("RSHIFT_AND.i64", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x101:
   {



      fputs("LSHIFT_OR.i64", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x1:
   {



      fputs("RSHIFT_OR.i64", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x102:
   {



      fputs("LSHIFT_XOR.i64", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   case 0x2:
   {



      fputs("RSHIFT_XOR.i64", fp);
      if (instr & BIT(34)) fputs(".signed", fp);
      if (instr & BIT(30)) fputs(".not_result", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 64);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_64_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lanes_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      if (instr & BIT(35)) fputs(".not", fp);


      break;
   }
   }

      break;
   }
   case 0xb8:
   {



      fputs("MUX.i32", fp);
      fputs(valhall_mux[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xb9:
   {



      fputs("MUX.v2i16", fp);
      fputs(valhall_mux[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 24) & 0x3], fp);


      break;
   }
   case 0xba:
   {



      fputs("MUX.v4i8", fp);
      fputs(valhall_mux[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xbc:
   {

   opcode = (instr >> 24) & 0x1;
   switch (opcode) {
   case 0x0:
   {



      fputs("CUBE_SSEL", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("CUBE_TSEL", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xbd:
   {



      fputs("MKVEC.v2i8", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 38) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_lane_8_bit[(instr >> 36) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0xc0:
   {



      fputs("CUBEFACE1", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);


      break;
   }
   case 0xc1:
   {



      fputs("CUBEFACE2_V9", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);


      break;
   }
   case 0xc2:
   {

   opcode = (instr >> 24) & 0x1;
   switch (opcode) {
   case 0x0:
   {



      fputs("IDPADD.v4s8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("IDPADD.v4u8", fp);
      if (instr & BIT(30)) fputs(".saturate", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf0:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.u32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.u32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x2:
   {



      fputs("ICMP_MULTI.u32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf1:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.v2u16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.v2u16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf2:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.v4u8", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.v4u8", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf4:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("FCMP_OR.f32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("FCMP_AND.f32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_widen[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_widen[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf5:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("FCMP_OR.v2f16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("FCMP_AND.v2f16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 28) & 0x3], fp);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         16, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0x3], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf8:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.s32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.s32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x2:
   {



      fputs("ICMP_MULTI.s32", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_32_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xf9:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.v2s16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.v2s16", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_16_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0xfa:
   {

   opcode = (instr >> 24) & 0x3;
   switch (opcode) {
   case 0x0:
   {



      fputs("ICMP_OR.v4s8", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x1:
   {



      fputs("ICMP_AND.v4s8", fp);
      fputs(valhall_condition[(instr >> 32) & 0x7], fp);
      fputs(valhall_result_type[(instr >> 30) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 36) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 14) & 3, (instr >> 8) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);
      fputs(valhall_swizzles_8_bit[(instr >> 26) & 0xf], fp);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

      break;
   }
   case 0x110:
   {



      fputs("IADD_IMM.i32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", #0x%X", (uint32_t)  ((instr >> 8) & MASK(32)) );


      break;
   }
   case 0x111:
   {



      fputs("IADD_IMM.v2i16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   16, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", #0x%X", (uint32_t)  ((instr >> 8) & MASK(32)) );


      break;
   }
   case 0x112:
   {



      fputs("IADD_IMM.v4i8", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 8);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   8, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", #0x%X", (uint32_t)  ((instr >> 8) & MASK(32)) );


      break;
   }
   case 0x114:
   {



      fputs("FADD_IMM.f32", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", #0x%X", (uint32_t)  ((instr >> 8) & MASK(32)) );


      break;
   }
   case 0x115:
   {



      fputs("FADD_IMM.v2f16", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 16);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                         16, (instr >> 57) & 0x3, false, false, ctx);

      fprintf(fp, ", #0x%X", (uint32_t)  ((instr >> 8) & MASK(32)) );


      break;
   }
   case 0x69:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x3:
   {



      fputs("ATOM1_RETURN.i32", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_atomic_operation_with_1[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x5:
   {



      fputs("ATOM1_RETURN.i64", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_atomic_operation_with_1[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   }

      break;
   }
   case 0x68:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x3:
   {



      fputs("ATOM.i32", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_atomic_operation[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x5:
   {



      fputs("ATOM.i64", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      fputs(valhall_atomic_operation[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   }

      break;
   }
   case 0x120:
   {

   opcode = (instr >> 27) & 0x7;
   switch (opcode) {
   case 0x3:
   {



      fputs("ATOM_RETURN.i32", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(26)) fputs(".compare", fp);
      fputs(valhall_atomic_operation[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   case 0x5:
   {



      fputs("ATOM_RETURN.i64", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(26)) fputs(".compare", fp);
      fputs(valhall_atomic_operation[(instr >> 22) & 0xf], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);

      fprintf(fp, ", offset:0x%X", (uint32_t)  ((instr >> 8) & MASK(8)) );


      break;
   }
   }

      break;
   }
   case 0x125:
   {



      fputs("TEX_FETCH", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_register_width[(instr >> 46) & 0x1], fp);
      fputs(valhall_write_mask[(instr >> 22) & 0xf], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(8)) fputs(".wide_indices", fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(11)) fputs(".texel_offset", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x128:
   {



      fputs("TEX_SINGLE", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_register_width[(instr >> 46) & 0x1], fp);
      fputs(valhall_write_mask[(instr >> 22) & 0xf], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(8)) fputs(".wide_indices", fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(11)) fputs(".texel_offset", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x129:
   {



      fputs("TEX_GATHER", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_register_width[(instr >> 46) & 0x1], fp);
      fputs(valhall_write_mask[(instr >> 22) & 0xf], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(8)) fputs(".wide_indices", fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(11)) fputs(".texel_offset", fp);
      if (instr & BIT(13)) fputs(".integer_coordinates", fp);
      fputs(valhall_fetch_component[(instr >> 14) & 0x3], fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x12a:
   {



      fputs("TEX_GRADIENT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_register_width[(instr >> 46) & 0x1], fp);
      fputs(valhall_write_mask[(instr >> 22) & 0xf], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(8)) fputs(".wide_indices", fp);
      if (instr & BIT(13)) fputs(".lod_mode", fp);
      if (instr & BIT(14)) fputs(".lod_mode", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x12f:
   {



      fputs("TEX_DUAL", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_register_width[(instr >> 46) & 0x1], fp);
      fputs(valhall_register_width[(instr >> 47) & 0x1], fp);
      fputs(valhall_write_mask[(instr >> 22) & 0xf], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(8)) fputs(".wide_indices", fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(11)) fputs(".texel_offset", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 16) & 0x3f) + i));
      }
      fputs(", ", fp);

      fprintf(fp, "@");
      for (unsigned i = 0; i < ((instr >> 33) & 0x7); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x130:
   {



      fputs("VAR_TEX_BUF_SINGLE", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x131:
   {



      fputs("VAR_TEX_BUF_GATHER", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(13)) fputs(".integer_coordinates", fp);
      fputs(valhall_fetch_component[(instr >> 14) & 0x3], fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x132:
   {



      fputs("VAR_TEX_BUF_GRADIENT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      if (instr & BIT(13)) fputs(".lod_mode", fp);
      if (instr & BIT(14)) fputs(".lod_mode", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x137:
   {



      fputs("VAR_TEX_BUF_DUAL", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x138:
   {



      fputs("VAR_TEX_SINGLE", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x139:
   {



      fputs("VAR_TEX_GATHER", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(13)) fputs(".integer_coordinates", fp);
      fputs(valhall_fetch_component[(instr >> 14) & 0x3], fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x13a:
   {



      fputs("VAR_TEX_GRADIENT", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      if (instr & BIT(13)) fputs(".lod_mode", fp);
      if (instr & BIT(14)) fputs(".lod_mode", fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x13f:
   {



      fputs("VAR_TEX_DUAL", fp);
      fputs(valhall_slot[(instr >> 30) & 0x7], fp);
      if (instr & BIT(39)) fputs(".skip", fp);
      fputs(valhall_sample_and_update_mode[(instr >> 33) & 0x7], fp);
      fputs(valhall_register_type[(instr >> 26) & 0x3], fp);
      fputs(valhall_varying_texture_register_width[(instr >> 24) & 0x3], fp);
      fputs(valhall_dimension[(instr >> 28) & 0x3], fp);
      if (instr & BIT(10)) fputs(".array_enable", fp);
      if (instr & BIT(12)) fputs(".shadow", fp);
      fputs(valhall_lod_mode[(instr >> 13) & 0x7], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      fprintf(fp, "@");
      for (unsigned i = 0; i < (((instr >> 36) & 0x7) + 1); ++i) {
         fprintf(fp, "%sr%u", (i == 0) ? "" : ":",
                 (uint32_t) (((instr >> 40) & 0x3f) + i));
      }
      fputs(", ", fp);

      va_print_src(fp, (instr >> 6) & 3, (instr >> 0) & 0x3f,
                   64, (instr >> 57) & 0x3, ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 22) & 3, (instr >> 16) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x160:
   {



      fputs("FMA_RSCALE.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x161:
   {



      fputs("FMA_RSCALE_N.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x162:
   {



      fputs("FMA_RSCALE_LEFT.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   case 0x163:
   {



      fputs("FMA_RSCALE_SCALE16.f32", fp);
      fputs(valhall_clamp[(instr >> 32) & 0x3], fp);
      fprintf(fp, "%s ", valhall_flow[(instr >> 59) & 0xf]);

      va_print_dest(fp, (instr >> 46) & 0x3, (instr >> 40) & 0x3f, 32);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 6) & 0x3, (instr >> 0) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(38), instr & BIT(39), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 14) & 0x3, (instr >> 8) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(36), instr & BIT(37), ctx);
      fputs(", ", fp);

      va_print_float_src(fp, (instr >> 22) & 0x3, (instr >> 16) & 0x3f,
                         32, (instr >> 57) & 0x3,
                         instr & BIT(34), instr & BIT(35), ctx);
      fputs(", ", fp);

      va_print_src(fp, (instr >> 30) & 3, (instr >> 24) & 0x3f,
                   32, (instr >> 57) & 0x3, ctx);


      break;
   }
   }

}

static bool is_branch(uint64_t instr)
{

   if ((instr & 0x1ff000000000000) == 0x1f000000000000) return true;

   if ((instr & 0x1ff000000000000) == 0x2f000000000000) return true;
   return false;
}

void
disassemble_valhall(FILE *fp, const void *code, size_t size, bool verbose, const cmpbe_chunk_CMMN *ctx)
{
   assert((size & 7) == 0);
   const uint64_t *words = (const uint64_t *)code;
   bool in_data_section = false;

   for (unsigned i = 0; i < (size / 8); ++i) {
      uint64_t instr = words[i];
      unsigned current_offset = i * 8;

      if (in_data_section) {
         if (instr == 0) {
            fprintf(fp, "/* [0x%04X] */   .align_padding\n", current_offset);
         } else {
            fprintf(fp, "/* [0x%04X] %016llX */   .word 0x%08X, 0x%08X\n",
                    current_offset, (unsigned long long)instr, (uint32_t)(instr & 0xFFFFFFFF), (uint32_t)(instr >> 32));
         }
         continue;
      }

      if (verbose) {
         for (unsigned j = 0; j < 8; ++j)
            fprintf(fp, "%02x ", (uint8_t)(instr >> (j * 8)));
         fprintf(fp, "   ");
      } else {
         fprintf(fp, "   ");
      }

      va_disasm_instr(fp, instr, ctx);
      fprintf(fp, "\n");

      if (((instr >> 59) & 0x0F) == 0x0F) {
         in_data_section = true;
         fprintf(fp, "\n; ---- TERMINAL BREAK HIT: EMBEDDED POOL DATA ----\n");
      } else if (is_branch(instr)) {
         fprintf(fp, "\n");
      }
   }
   fprintf(fp, "\n");
}

