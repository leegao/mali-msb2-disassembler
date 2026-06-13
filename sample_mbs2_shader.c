#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "disassemble.h"
#include "cmpbe_chunks.h"

#include "sample_mbs2_shader.h"

void pretty_print_mbs2_shader(FILE *fp, const cmpbe_chunk_MBS2 *root)
{
    if (!root || !root->compilation_command) {
        fprintf(stderr, "Error: root is nullptr.\n");
        return;
    }

    const cmpbe_chunk_CCOM *ccom = root->compilation_command;

    if (ccom->common.binary_count == 0 || !ccom->common.binaries) {
        fprintf(stderr, "Error: no shaders\n");
        return;
    }

    const cmpbe_chunk_OBJC *bytecode = &ccom->common.binaries[0].bytecode;
    uint16_t registers = ccom->common.binaries[0].register_count;

    fprintf(fp, "; ======================================\n");
    fprintf(fp, "; VALHALL MBS2 SHADER (Dis)ASM\n");
    fprintf(fp, "; Entry: %s\n", ccom->kernel.entry_point_name.string_data);
    fprintf(fp, "; Vregs: %u / 64 (32 = max occupancy)\n", registers);
    fprintf(fp, "; Size: %u bytes, %u bytes of scratch alloca\n",
        bytecode->size, ccom->common.binaries[0].scratch_allocation_bytes);
    fprintf(fp, "; ======================================\n\n");

    const uint8_t *raw_bytes = bytecode->byte_code;
    uint32_t total_bytes = bytecode->size;
    uint32_t instruction_count = total_bytes / 8;
    bool finished = false;
    bool in_zeroes = false;
    uint32_t zeroes_start = 0;
    for (uint32_t i = 0; i < instruction_count; i++) {
        uint64_t instr_word = 0;
        memcpy(&instr_word, &raw_bytes[i * 8], sizeof(uint64_t));
        if (instr_word == 0) {
            if (!in_zeroes) zeroes_start = i;
            in_zeroes = true;
            continue;
        } else if (in_zeroes) {
            fprintf(fp, "... (%u bytes of zeroes) ...\n", (i - zeroes_start) * 8);
            in_zeroes = false;
        }
        fprintf(fp, "/* [0x%04X] %016llX */   ", i * 8, (unsigned long long)instr_word);
        if (!finished) {
            va_disasm_instr(fp, instr_word, &ccom->common);
        }
        fprintf(fp, "\n");

        // flow control mask (Bits 59-62) with 0x0F implies terminal block execution (.end)
        if (!finished && ((instr_word >> 59) & 0x0F) == 0x0F) {
            finished = true;
            fprintf(fp, "\n.rodata (%u bytes):\n", (instruction_count - i) * 8);
        }
    }

    fprintf(fp, "\n; End of Disassembly\n");
}

int main() {
    pretty_print_mbs2_shader(stdout, &MBS2);
}
