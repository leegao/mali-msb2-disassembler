#include "cmpbe_chunks.h"

#include <stdio.h>

static const char *
ccom_string_data(const cmpbe_chunk_STRI *stri)
{
    if (!stri || !stri->string_data)
        return "(null)";
    return (const char *)stri->string_data;
}

static const char *
ccom_tpge_scalar_type_str(cmpbe_chunk_TPGE_scalar_type t)
{
    switch (t) {
    case CMPBE_TYPE_SCALAR_INT:  return "int";
    case CMPBE_TYPE_SCALAR_UINT: return "uint";
    default:                     return "?";
    }
}

static const char *
ccom_tpge_scalar_size_str(cmpbe_chunk_TPGE_scalar_size s)
{
    switch (s) {
    case CMPBE_TYPE_SIZE_16BIT: return "16";
    case CMPBE_TYPE_SIZE_32BIT: return "32";
    default:                    return "?";
    }
}

static const char *
ccom_tpge_precision_str(cmpbe_chunk_TPGE_precision p)
{
    switch (p) {
    case CMPBE_PRECISION_LOW:    return "lowp";
    case CMPBE_PRECISION_MEDIUM: return "mediump";
    case CMPBE_PRECISION_HIGH:   return "highp";
    default:                     return "?";
    }
}

static const char *
ccom_tpge_aux_qual_str(cmpbe_chunk_TPGE_aux_qualifier q)
{
    switch (q) {
    case CMPBE_AUX_QUAL_NONE:          return "none";
    case CMPBE_AUX_QUAL_PUSH_CONSTANT: return "push_constant";
    default:                           return "?";
    }
}

static const char *
ccom_tpib_layout_str(cmpbe_chunk_TPIB_layout l)
{
    switch (l) {
    case CMPBE_LAYOUT_STD140: return "std140";
    case CMPBE_LAYOUT_STD430: return "std430";
    default:                  return "?";
    }
}

static const char *
ccom_tpib_kind_str(cmpbe_chunk_TPIB_kind k)
{
    switch (k) {
    case CMPBE_KIND_UNIFORM_BLOCK: return "uniform";
    case CMPBE_KIND_STORAGE_BLOCK: return "storage";
    default:                       return "?";
    }
}

static const char *
ccom_fsha_flags_str(cmpbe_chunk_FSHA_flags f)
{
    switch (f) {
    case CMPBE_FSHA_FLAG_COMPUTE: return "compute";
    case CMPBE_FSHA_FLAG_AUX_ALT: return "aux_alt";
    default:                      return "?";
    }
}

static const char *
ccom_fsha_variant_str(cmpbe_chunk_FSHA_variant v)
{
    switch (v) {
    case CMPBE_VARIANT_DEFAULT: return "default";
    case CMPBE_VARIANT_ASTC:    return "astc";
    default:                    return "?";
    }
}

static void
ccom_print_type(FILE *fp, const cmpbe_chunk_TYPE *type, int indent)
{
    if (!type) {
        fprintf(fp, "(null)");
        return;
    }

    fprintf(fp, "TYPE {\n");
    fprintf(fp, "%*.s  unknown0: %p\n", indent, "", type->unknown0);

    if (type->tpar) {
        fprintf(fp, "%*.s  tpar: array_size=%u, element_type:\n", indent, "", type->tpar->array_size);
        ccom_print_type(fp, &type->tpar->element_type, indent + 6);
    } else {
        fprintf(fp, "%*.s  tpar: (null)\n", indent, "");
    }

    if (type->tpge) {
        fprintf(fp, "%*.s  tpge: %s%s%u %s align=%u aux=%s\n",
            indent, "",
            ccom_tpge_scalar_type_str(type->tpge->scalar_type),
            ccom_tpge_scalar_size_str(type->tpge->scalar_size),
            type->tpge->component_count,
            ccom_tpge_precision_str(type->tpge->precision),
            type->tpge->alignment,
            ccom_tpge_aux_qual_str(type->tpge->aux_qualifier));
    } else {
        fprintf(fp, "%*.s  tpge: (null)\n", indent, "");
    }

    if (type->tpib) {
        fprintf(fp, "%*.s  tpib: layout=%s kind=%s block_size=%u members=%u\n",
            indent, "",
            ccom_tpib_layout_str(type->tpib->layout),
            ccom_tpib_kind_str(type->tpib->kind),
            type->tpib->block_size,
            type->tpib->member_count);
        for (uint32_t m = 0; m < type->tpib->member_count; m++) {
            const cmpbe_chunk_TPSE *mem = &type->tpib->members[m];
            fprintf(fp, "%*.s    [%u] \"%s\" offset=%u binding=%u flags=0x%x location=%u\n",
                indent, "", m,
                ccom_string_data(&mem->name),
                mem->offset, mem->binding, mem->flags, mem->location);
        }
    } else {
        fprintf(fp, "%*.s  tpib: (null)\n", indent, "");
    }

    if (type->tpst) {
        fprintf(fp, "%*.s  tpst: size=%u members=%u tag=\"%s\"\n",
            indent, "",
            type->tpst->size,
            type->tpst->member_count,
            ccom_string_data(&type->tpst->tag));
        for (uint32_t m = 0; m < type->tpst->member_count; m++) {
            const cmpbe_chunk_TPSE *mem = &type->tpst->members[m];
            fprintf(fp, "%*.s    [%u] \"%s\" offset=%u binding=%u flags=0x%x location=%u\n",
                indent, "", m,
                ccom_string_data(&mem->name),
                mem->offset, mem->binding, mem->flags, mem->location);
        }
    } else {
        fprintf(fp, "%*.s  tpst: (null)\n", indent, "");
    }

    fprintf(fp, "%*.s  unknown4: %p\n", indent, "", type->unknown4);
    fprintf(fp, "%*.s  unknown5: %p\n", indent, "", type->unknown5);
    fprintf(fp, "%*.s  unknown6: %p\n", indent, "", type->unknown6);
    fprintf(fp, "%*.s  unknown7: %p\n", indent, "", type->unknown7);
    fprintf(fp, "%*.s  unknown8: %p\n", indent, "", type->unknown8);
    fprintf(fp, "%*.s  unknown9: %p\n", indent, "", type->unknown9);
    fprintf(fp, "%*.s  unknown11: %p\n", indent, "", type->unknown11);
    fprintf(fp, "%*.s}", indent - 2, "");
}

static void
ccom_print_symtab(FILE *fp, const char *label, const cmpbe_chunk_SSYM *ssym)
{
    fprintf(fp, "; %s: count=%u\n", label, ssym->count);
    for (uint32_t i = 0; i < ssym->count; i++) {
        const cmpbe_chunk_SYMB *sym = &ssym->symbols[i];
        fprintf(fp, ";   [%u] \"%s\" flags=0x%x semantics=%u set=%u id=%u loc=%u comp=%u\n",
            i,
            ccom_string_data(&sym->name),
            sym->flags, sym->semantics,
            sym->binding_set, sym->binding_id,
            sym->location, sym->component);

        fprintf(fp, ";       rloc_count=%u nested_count=%u\n",
            sym->rloc_count, sym->nested_count);
        for (uint32_t r = 0; r < sym->rloc_count; r++) {
            fprintf(fp, ";       rloc[%u] seg=%u offset=%u type=%u size=%u\n",
                r,
                sym->relocations[r].segment,
                sym->relocations[r].offset,
                sym->relocations[r].type,
                sym->relocations[r].size);
        }

        fprintf(fp, ";       ");
        ccom_print_type(fp, &sym->type, 0);
        fprintf(fp, "\n");
    }
}

void
print_ccom(FILE *fp, const cmpbe_chunk_CCOM *ccom)
{
    if (!ccom) {
        fprintf(fp, "; CCOM: (null)\n");
        return;
    }

    fprintf(fp, "; ======================================\n");
    fprintf(fp, "; CCOM (Compilation Command)\n");
    fprintf(fp, "; ======================================\n\n");

    fprintf(fp, "; --- KERNEL ---\n");
    fprintf(fp, "; entry_point_name: \"%s\"\n", ccom_string_data(&ccom->kernel.entry_point_name));
    fprintf(fp, "; kernel_flags: 0x%08x\n", ccom->kernel.kernel_flags);
    fprintf(fp, "; reserved1: %p\n", ccom->kernel.reserved1);
    fprintf(fp, "; argument_count: %u\n", ccom->kernel.argument_count);
    fprintf(fp, "; reserved_enum: %u\n", (unsigned)ccom->kernel.reserved_enum);
    if (ccom->kernel.workgroup_sizes) {
        fprintf(fp, "; workgroup_size: (%u, %u, %u)\n",
            ccom->kernel.workgroup_sizes->workgroup_x,
            ccom->kernel.workgroup_sizes->workgroup_y,
            ccom->kernel.workgroup_sizes->workgroup_z);
    } else {
        fprintf(fp, "; workgroup_size: (null)\n");
    }
    fprintf(fp, "\n");

    const cmpbe_chunk_CMMN *cmn = &ccom->common;

    fprintf(fp, "; --- COMMON ---\n");
    fprintf(fp, "; language: %u\n", (unsigned)cmn->language.lang);
    fprintf(fp, "; compilation_flags: 0x%04x\n", cmn->compilation_flags);
    fprintf(fp, "; constant_count: %u\n", cmn->constant_count);
    fprintf(fp, "; binary_count: %u\n", cmn->binary_count);
    fprintf(fp, "; ubuf_44: count=%u data=%p\n", cmn->ubuf_44.count, cmn->ubuf_44.data);
    fprintf(fp, "; common_tail: %p\n", cmn->common_tail);
    fprintf(fp, "\n");

    fprintf(fp, "; --- CONSTANTS (%u) ---\n", cmn->constant_count);
    for (uint32_t i = 0; i < cmn->constant_count; i++) {
        fprintf(fp, ";   [%u] size=%u id=%u value=0x%08x (%u)\n",
            i,
            cmn->constants[i].size,
            cmn->constants[i].constant_id,
            cmn->constants[i].value,
            cmn->constants[i].value);
    }
    fprintf(fp, "\n");

    ccom_print_symtab(fp, "SSYM_2", &cmn->ssym_2);
    fprintf(fp, "\n");
    ccom_print_symtab(fp, "SSYM_3", &cmn->ssym_3);
    fprintf(fp, "\n");
    ccom_print_symtab(fp, "SSYM_24 (push constants)", &cmn->ssym_24);
    fprintf(fp, "\n");
    ccom_print_symtab(fp, "SSYM_25", &cmn->ssym_25);
    fprintf(fp, "\n");
    ccom_print_symtab(fp, "SSYM_26", &cmn->ssym_26);
    fprintf(fp, "\n");
    ccom_print_symtab(fp, "SSYM_43 (resources)", &cmn->ssym_43);
    fprintf(fp, "\n");

    fprintf(fp, "; --- BINARIES (%u) ---\n", cmn->binary_count);
    for (uint32_t i = 0; i < cmn->binary_count; i++) {
        const cmpbe_chunk_EBIN *eb = &cmn->binaries[i];
        fprintf(fp, "; --- BINARY[%u] ---\n", i);
        fprintf(fp, ";   id: %u\n", eb->id);
        fprintf(fp, ";   pipeline_stage: %u\n", eb->pipeline_stage);
        fprintf(fp, ";   prepass_flags: %u\n", (unsigned)eb->prepass_flags);
        fprintf(fp, ";   uncompressed_code_size: %u\n", eb->uncompressed_code_size);
        fprintf(fp, ";   register_count: %u\n", eb->register_count);
        fprintf(fp, ";   local_thread_limit: %u\n", eb->local_thread_limit);
        fprintf(fp, ";   scratch_allocation_bytes: %u\n", eb->scratch_allocation_bytes);
        fprintf(fp, ";   fsha_flags: %s (0x%08x)\n",
            ccom_fsha_flags_str(eb->fsha_flags), eb->fsha_flags);
        fprintf(fp, ";   variant: %s (0x%02x)\n",
            ccom_fsha_variant_str(eb->variant), (unsigned)eb->variant);
        fprintf(fp, ";   unk0: %p\n", eb->unk0);
        fprintf(fp, ";   unk1: %p\n", eb->unk1);
        fprintf(fp, ";   unk2: %p\n", eb->unk2);
        fprintf(fp, ";   unk3: %p\n", eb->unk3);
        fprintf(fp, ";   unk4: %p\n", eb->unk4);
        fprintf(fp, ";   bytecode: size=%u byte_code=%p\n",
            eb->bytecode.size, eb->bytecode.byte_code);
        fprintf(fp, ";   unk5: %p\n", eb->unk5);
        fprintf(fp, ";   unk6: %p\n", eb->unk6);
        fprintf(fp, "\n");
    }

    fprintf(fp, "; --- CUSTOM EXTENSIONS ---\n");
    fprintf(fp, "; custom_ext0: %p\n", ccom->custom_ext0);
    fprintf(fp, "; custom_ext1: %p\n", ccom->custom_ext1);

    fprintf(fp, "\n; ======================================\n");
    fprintf(fp, "; End of CCOM\n");
    fprintf(fp, "; ======================================\n");
}
