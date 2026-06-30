#include "cmpbe_chunks.h"
#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif
static const cmpbe_chunk_VEHW VEHW_0 =
{
	(cmpbe_chunk_VEHW_core) 0x1c,
	(uint32_t) 0x0,
	(uint32_t) 0x0,
};
static const cmpbe_chunk_VELA VELA_1 =
{
	(cmpbe_chunk_VELA_lang) 0x7,
};
static const cmpbe_chunk_SSYM SSYM_2 =
{
	(uint32_t) 0x0,
	NULL,
};
static const cmpbe_chunk_SSYM SSYM_3 =
{
	(uint32_t) 0x0,
	NULL,
};
static const uint8_t b_4[] = "_11_registers";
static const cmpbe_chunk_STRI STRI_4 = { 13, (uint8_t*)b_4 };
static const uint8_t b_5[] = "format";
static const cmpbe_chunk_STRI STRI_5 = { 6, (uint8_t*)b_5 };
static const cmpbe_chunk_TPGE TPGE_6 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_7 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_5 =
{
	STRI_5,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_7,
};
static const uint8_t b_8[] = "width";
static const cmpbe_chunk_STRI STRI_8 = { 5, (uint8_t*)b_8 };
static const cmpbe_chunk_TPGE TPGE_9 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_10 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_8 =
{
	STRI_8,
	(uint32_t) 0x4,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_10,
};
static const uint8_t b_11[] = "height";
static const cmpbe_chunk_STRI STRI_11 = { 6, (uint8_t*)b_11 };
static const cmpbe_chunk_TPGE TPGE_12 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_13 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_12,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_11 =
{
	STRI_11,
	(uint32_t) 0x8,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_13,
};
static const uint8_t b_14[] = "depth";
static const cmpbe_chunk_STRI STRI_14 = { 5, (uint8_t*)b_14 };
static const cmpbe_chunk_TPGE TPGE_15 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_16 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_15,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_14 =
{
	STRI_14,
	(uint32_t) 0xc,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_16,
};
static const uint8_t b_17[] = "offset";
static const cmpbe_chunk_STRI STRI_17 = { 6, (uint8_t*)b_17 };
static const cmpbe_chunk_TPGE TPGE_18 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_19 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_18,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_17 =
{
	STRI_17,
	(uint32_t) 0x10,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_19,
};
static const uint8_t b_20[] = "bufferRowLength";
static const cmpbe_chunk_STRI STRI_20 = { 15, (uint8_t*)b_20 };
static const cmpbe_chunk_TPGE TPGE_21 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_22 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_21,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_20 =
{
	STRI_20,
	(uint32_t) 0x14,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_22,
};
static const uint8_t b_23[] = "bufferImageHeight";
static const cmpbe_chunk_STRI STRI_23 = { 17, (uint8_t*)b_23 };
static const cmpbe_chunk_TPGE TPGE_24 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_25 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_24,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_23 =
{
	STRI_23,
	(uint32_t) 0x18,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_25,
};
static const uint8_t b_26[] = "offsetX";
static const cmpbe_chunk_STRI STRI_26 = { 7, (uint8_t*)b_26 };
static const cmpbe_chunk_TPGE TPGE_27 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_28 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_27,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_26 =
{
	STRI_26,
	(uint32_t) 0x1c,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_28,
};
static const uint8_t b_29[] = "offsetY";
static const cmpbe_chunk_STRI STRI_29 = { 7, (uint8_t*)b_29 };
static const cmpbe_chunk_TPGE TPGE_30 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_31 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_30,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_29 =
{
	STRI_29,
	(uint32_t) 0x20,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_31,
};
static cmpbe_chunk_TPSE a_5[9] = { TPSE_5, TPSE_8, TPSE_11, TPSE_14, TPSE_17, TPSE_20, TPSE_23, TPSE_26, TPSE_29, };
static const cmpbe_chunk_TPIB TPIB_32 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x0,
	(uint32_t) 0x24,
	(uint32_t) 0x9,
	a_5,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_33 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_32,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_RLOC RLOC_34 =
{
	(uint16_t) 0x0,
	(uint16_t) 0x10,
	(uint16_t) 0x4,
	(uint16_t) 0xc,
};
static cmpbe_chunk_RLOC a_34[1] = { RLOC_34, };
static const cmpbe_chunk_SYMB SYMB_4 =
{
	STRI_4,
	(cmpbe_chunk_symbol_flags) 0x24,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x0,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(uint16_t) 0xffff,
	TYPE_33,
	(uint32_t) 0x1,
	a_34,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static cmpbe_chunk_SYMB a_4[1] = { SYMB_4, };
static const cmpbe_chunk_SSYM SSYM_35 =
{
	(uint32_t) 0x1,
	a_4,
};
static const cmpbe_chunk_SSYM SSYM_36 =
{
	(uint32_t) 0x0,
	NULL,
};
static const cmpbe_chunk_SSYM SSYM_37 =
{
	(uint32_t) 0x0,
	NULL,
};
static const uint8_t b_38[] = "_142_uInput";
static const cmpbe_chunk_STRI STRI_38 = { 11, (uint8_t*)b_38 };
static const uint8_t b_39[] = "data";
static const cmpbe_chunk_STRI STRI_39 = { 4, (uint8_t*)b_39 };
static const cmpbe_chunk_TPGE TPGE_40 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x3,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_41 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_40,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPAR TPAR_42 =
{
	(uint32_t) 0x0,
	TYPE_41,
};
static const cmpbe_chunk_TYPE TYPE_43 =
{
	NULL,
	(cmpbe_chunk_TPAR*)&TPAR_42,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_39 =
{
	STRI_39,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_43,
};
static cmpbe_chunk_TPSE a_39[1] = { TPSE_39, };
static const cmpbe_chunk_TPIB TPIB_44 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x1,
	(uint32_t) 0x4,
	(uint32_t) 0x1,
	a_39,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_45 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_44,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_SYMB SYMB_38 =
{
	STRI_38,
	(cmpbe_chunk_symbol_flags) 0x824,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x4,
	(uint32_t) 0x1,
	(uint16_t) 0x1,
	(uint16_t) 0xffff,
	TYPE_45,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static const uint8_t b_46[] = "_164_uOutput";
static const cmpbe_chunk_STRI STRI_46 = { 12, (uint8_t*)b_46 };
static const uint8_t b_47[] = "data";
static const cmpbe_chunk_STRI STRI_47 = { 4, (uint8_t*)b_47 };
static const cmpbe_chunk_TPGE TPGE_48 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x3,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_49 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_48,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPAR TPAR_50 =
{
	(uint32_t) 0x0,
	TYPE_49,
};
static const cmpbe_chunk_TYPE TYPE_51 =
{
	NULL,
	(cmpbe_chunk_TPAR*)&TPAR_50,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_TPSE TPSE_47 =
{
	STRI_47,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_51,
};
static cmpbe_chunk_TPSE a_47[1] = { TPSE_47, };
static const cmpbe_chunk_TPIB TPIB_52 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x1,
	(uint32_t) 0x4,
	(uint32_t) 0x1,
	a_47,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_53 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_52,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_SYMB SYMB_46 =
{
	STRI_46,
	(cmpbe_chunk_symbol_flags) 0x24,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x4,
	(uint32_t) 0x0,
	(uint16_t) 0x0,
	(uint16_t) 0xffff,
	TYPE_53,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static cmpbe_chunk_SYMB a_38[2] = { SYMB_38, SYMB_46, };
static const cmpbe_chunk_SSYM SSYM_54 =
{
	(uint32_t) 0x2,
	a_38,
};
static const cmpbe_chunk_UBUF UBUF_55 =
{
	(uint32_t) 0x0,
	NULL,
};
static const uint8_t b_56[] = "=\x85\xc0\x80\x02\xc0\xf8\x00<\x84@\x80\x02\xc0\xf8\x00>\x86@\x80\x02\xc0\xf8\x00@\x07\x00\x00\x00\xc0\x1f\x00}\x84\x0a\x00\x00\xc0\xa0\x00~\x81\x0a\x00\x00\xc1\xa0\x00""A@\x00\x00\x00\xc0\xa0\x00@|\x00\x00\x00\xc0\xa0\x00\x82@' \x00\xc0\xab\x01\x80\x00\x00\x00\x00\xc2\x91\x00@\x00\x00\x18\x02""BaP\x00\x00\x00\x00\x00\xc0\x00x";
static const cmpbe_chunk_OBJC OBJC_56 = { 96, (uint8_t*)b_56 };
static const cmpbe_chunk_EBIN EBIN_57 =
{
	(uint16_t) 0x1,
	(uint16_t) 0x7000,
	(cmpbe_chunk_FSHA_prepass_flags) 0x0,
	(uint32_t) 0xffffffff,
	(uint16_t) 0x20,
	(uint16_t) 0x4,
	(uint32_t) 0x0,
	(cmpbe_chunk_FSHA_flags) 0x42000,
	(cmpbe_chunk_FSHA_variant) 0x80,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OBJC_56,
	NULL,
	NULL,
};
static const uint8_t b_58[] = "\x02\x00\x00(\xf4\xba`\x00""B@\x00h\xf4\x84`\x00\xc0\x0b\x00\x00\x00\xc7\x10\x09{\xff\xff\xff\x00\xfb\x18\x01:\x04\x00\x18\x82\x86`\x00z\x08\x00(\xf4\xba`\x10""E\xff\xff\xff\x00\xc5\x18\x01\x04(\x00\xa8\xf4\xbc`\x00""D\x08\x00h\xf4\xbe`\x08""FG{\xc5\x01\xfbP\x01z\x04\x00(\xf4\xba`\x10\x00\x08\x00h\x04~a\x08{z\x0a\x00\x00\xfb\xa0 |\x00\x00\x18\x82\xba`\x08z\x00\x19\x00\x0c\xfa\x90\x00z\xc0\x00\x00\x13\xfa\xa4\x00z\xd7\xc0\x04\x04\xfa\xb2\x00z\x00\x1c\x00\x0c\xfa\x90\x00\xc0\xff\xff\xff\xff\xba\x10\x01zz\xc2\x00 \xfa\xbd\x00@\x00\x00(\x04zax";
static const cmpbe_chunk_OBJC OBJC_58 = { 168, (uint8_t*)b_58 };
static const cmpbe_chunk_EBIN EBIN_59 =
{
	(uint16_t) 0xffff,
	(uint16_t) 0x0,
	(cmpbe_chunk_FSHA_prepass_flags) 0x0,
	(uint32_t) 0xffffffff,
	(uint16_t) 0x20,
	(uint16_t) 0x4,
	(uint32_t) 0x0,
	(cmpbe_chunk_FSHA_flags) 0x20042000,
	(cmpbe_chunk_FSHA_variant) 0x0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OBJC_58,
	NULL,
	NULL,
};
static cmpbe_chunk_EBIN a_57[2] = { EBIN_57, EBIN_59, };
static const cmpbe_chunk_CMMN CMMN_1 =
{
	VELA_1,
	SSYM_2,
	SSYM_3,
	SSYM_35,
	SSYM_36,
	SSYM_37,
	SSYM_54,
	UBUF_55,
	(uint16_t) 0x0,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x2,
	a_57,
	NULL,
};
static const uint8_t b_60[] = "main";
static const cmpbe_chunk_STRI STRI_60 = { 4, (uint8_t*)b_60 };
static const cmpbe_chunk_KWGS KWGS_61 =
{
	(uint32_t) 0x8,
	(uint32_t) 0x8,
	(uint32_t) 0x1,
};
static const cmpbe_chunk_KERN KERN_60 =
{
	STRI_60,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	(cmpbe_chunk_MBS2_reserved_enum) 0x0,
	(cmpbe_chunk_KWGS*)&KWGS_61,
};
static const cmpbe_chunk_CCOM CCOM_1 =
{
	CMMN_1,
	KERN_60,
	NULL,
	NULL,
};
cmpbe_chunk_MBS2 MBS2 =
{
	/*version = */48,
	VEHW_0,
	NULL,
	(cmpbe_chunk_CCOM*)&CCOM_1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};



#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
