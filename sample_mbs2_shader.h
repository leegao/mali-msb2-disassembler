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
static const uint8_t b_4[] = "_43_pushConstants_0";
static const cmpbe_chunk_STRI STRI_4 = { 19, (uint8_t*)b_4 };
static const uint8_t b_5[] = "u_TextureDimensions_0";
static const cmpbe_chunk_STRI STRI_5 = { 21, (uint8_t*)b_5 };
static const cmpbe_chunk_TPGE TPGE_6 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x2,
	(uint8_t) 0x2,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x8,
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
static cmpbe_chunk_TPSE a_5[1] = { TPSE_5, };
static const cmpbe_chunk_TPIB TPIB_8 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x0,
	(uint32_t) 0x8,
	(uint32_t) 0x1,
	a_5,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_9 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_RLOC RLOC_10 =
{
	(uint16_t) 0x0,
	(uint16_t) 0x1c,
	(uint16_t) 0x0,
	(uint16_t) 0x8,
};
static cmpbe_chunk_RLOC a_10[1] = { RLOC_10, };
static const cmpbe_chunk_SYMB SYMB_4 =
{
	STRI_4,
	(cmpbe_chunk_symbol_flags) 0x24,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x0,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(uint16_t) 0xffff,
	TYPE_9,
	(uint32_t) 0x1,
	a_10,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static cmpbe_chunk_SYMB a_4[1] = { SYMB_4, };
static const cmpbe_chunk_SSYM SSYM_11 =
{
	(uint32_t) 0x1,
	a_4,
};
static const cmpbe_chunk_SSYM SSYM_12 =
{
	(uint32_t) 0x0,
	NULL,
};
static const cmpbe_chunk_SSYM SSYM_13 =
{
	(uint32_t) 0x0,
	NULL,
};
static const uint8_t b_14[] = "_12__DEBUG_LINE_BUFFER_0";
static const cmpbe_chunk_STRI STRI_14 = { 24, (uint8_t*)b_14 };
static const uint8_t b_15[] = "_data";
static const cmpbe_chunk_STRI STRI_15 = { 5, (uint8_t*)b_15 };
static const cmpbe_chunk_TPGE TPGE_16 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x3,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_17 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_16,
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
static const cmpbe_chunk_TPAR TPAR_18 =
{
	(uint32_t) 0x0,
	TYPE_17,
};
static const cmpbe_chunk_TYPE TYPE_19 =
{
	NULL,
	(cmpbe_chunk_TPAR*)&TPAR_18,
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
static const cmpbe_chunk_TPSE TPSE_15 =
{
	STRI_15,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_19,
};
static cmpbe_chunk_TPSE a_15[1] = { TPSE_15, };
static const cmpbe_chunk_TPIB TPIB_20 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x1,
	(uint32_t) 0x4,
	(uint32_t) 0x1,
	a_15,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_21 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_20,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_SYMB SYMB_14 =
{
	STRI_14,
	(cmpbe_chunk_symbol_flags) 0x24,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x4,
	(uint32_t) 0x2,
	(uint16_t) 0x2,
	(uint16_t) 0xffff,
	TYPE_21,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static const uint8_t b_22[] = "_77_output_0";
static const cmpbe_chunk_STRI STRI_22 = { 12, (uint8_t*)b_22 };
static const uint8_t b_23[] = "_data";
static const cmpbe_chunk_STRI STRI_23 = { 5, (uint8_t*)b_23 };
static const cmpbe_chunk_TPGE TPGE_24 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x3,
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
static const cmpbe_chunk_TPAR TPAR_26 =
{
	(uint32_t) 0x0,
	TYPE_25,
};
static const cmpbe_chunk_TYPE TYPE_27 =
{
	NULL,
	(cmpbe_chunk_TPAR*)&TPAR_26,
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
static const cmpbe_chunk_TPSE TPSE_23 =
{
	STRI_23,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_27,
};
static cmpbe_chunk_TPSE a_23[1] = { TPSE_23, };
static const cmpbe_chunk_TPIB TPIB_28 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x1,
	(uint32_t) 0x4,
	(uint32_t) 0x1,
	a_23,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_29 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_28,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_SYMB SYMB_22 =
{
	STRI_22,
	(cmpbe_chunk_symbol_flags) 0x24,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x4,
	(uint32_t) 0x1,
	(uint16_t) 0x1,
	(uint16_t) 0xffff,
	TYPE_29,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static const uint8_t b_30[] = "_83_input_0";
static const cmpbe_chunk_STRI STRI_30 = { 11, (uint8_t*)b_30 };
static const uint8_t b_31[] = "_data";
static const cmpbe_chunk_STRI STRI_31 = { 5, (uint8_t*)b_31 };
static const cmpbe_chunk_TPGE TPGE_32 =
{
	(cmpbe_chunk_TPGE_scalar_type) 0x3,
	(uint8_t) 0x1,
	(cmpbe_chunk_TPGE_scalar_size) 0x2,
	(cmpbe_chunk_TPGE_precision) 0x1,
	(uint32_t) 0x4,
	(cmpbe_chunk_TPGE_aux_qualifier) 0x8,
	(uint8_t) 0x0,
};
static const cmpbe_chunk_TYPE TYPE_33 =
{
	NULL,
	NULL,
	(cmpbe_chunk_TPGE*)&TPGE_32,
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
static const cmpbe_chunk_TPAR TPAR_34 =
{
	(uint32_t) 0x0,
	TYPE_33,
};
static const cmpbe_chunk_TYPE TYPE_35 =
{
	NULL,
	(cmpbe_chunk_TPAR*)&TPAR_34,
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
static const cmpbe_chunk_TPSE TPSE_31 =
{
	STRI_31,
	(uint32_t) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_symbol_flags) 0x0,
	(uint16_t) 0xffff,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	TYPE_35,
};
static cmpbe_chunk_TPSE a_31[1] = { TPSE_31, };
static const cmpbe_chunk_TPIB TPIB_36 =
{
	(cmpbe_chunk_TPIB_layout) 0x0,
	(cmpbe_chunk_TPIB_kind) 0x1,
	(uint32_t) 0x4,
	(uint32_t) 0x1,
	a_31,
	NULL,
};
static const cmpbe_chunk_TYPE TYPE_37 =
{
	NULL,
	NULL,
	NULL,
	(cmpbe_chunk_TPIB*)&TPIB_36,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const cmpbe_chunk_SYMB SYMB_30 =
{
	STRI_30,
	(cmpbe_chunk_symbol_flags) 0x824,
	(cmpbe_chunk_SYMB_semantics) 0x0,
	(uint8_t) 0x4,
	(uint32_t) 0x0,
	(uint16_t) 0x0,
	(uint16_t) 0xffff,
	TYPE_37,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	NULL,
	NULL,
	NULL,
};
static cmpbe_chunk_SYMB a_14[3] = { SYMB_14, SYMB_22, SYMB_30, };
static const cmpbe_chunk_SSYM SSYM_38 =
{
	(uint32_t) 0x3,
	a_14,
};
static const cmpbe_chunk_UBUF UBUF_39 =
{
	(uint32_t) 0x0,
	NULL,
};
static const cmpbe_chunk_FCST FCST_40 =
{
	(uint16_t) 0x4,
	(uint16_t) 0x24,
	(uint32_t) 0x40501062,
};
static cmpbe_chunk_FCST a_40[1] = { FCST_40, };
static const uint8_t b_41[] = "\x80\x88\x00\x18\x00@i\x00=\xc8\xc0\x19\x01\xc1\xb4\x00""A\x88\xc0\x80\x02\xc1\xf8\x00<\xc8\xc0\x19\x01\xc0\xb4\x00@\x87""A\x80\x02\xc0\xf8\x08\x80\x98\x00X\x00@i\x00@\x13\x00\x00\x00\xc0\x1f\x00\x00\x00\x00\x00\x00\xc0\x00\x10\x80\xa8\x00\x18\x00@i\x00}\x86\x0a\x00\x00\xc0\xa0\x00@|\x00\x00\x00\xc2\xa0\x00\x82\x02' \x00\xc0\xa3\x01\x84""B' \x00\xfe\xa3\x01\xfe\x90\x00\x00\x00\xfc\x10\x07\xff\x00\x00\x00\x00\xfd\x91\x0e\x80\xb8\x00X\x00@i\x00@\x00\x00\x18\x82\x83`\x08|\x02'$\x00\xfc\xa3\x01|\x00\x00\x18\x82\x80`\x00""C\x00\x19\x00\x0c\xfc\x90\x00|\x89\xc0\x00\x04\xfc\xb2\x00|\x00\x1c\xc0\x0c\xfc\x90\x08|@\x00\x00\x00\xfd\xa0\x10~\x00\x00\x18\x02}a\x00\xc0\x01\x00\x00\x00\xff\x10\x09\x80\xc4\x80\x18\x02\x7fhP\x00\x00\x00\x00\x00\xc0\x00x\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x02\x04\x05\x06\x08\x09\x0a\x10\x11\x12\x14\x15\x16\x18\x19\x1a\x03\x07\x0f\x13\x17\x1b\x0c\x0d\x0e !\x22$%&()*01245689:#'\x2f""37;,-.@ABDEFHIJPQRTUVXYZCGOSW[LMN\x80\x81\x82\x84\x85\x86\x88\x89\x8a\x90\x91\x92\x94\x95\x96\x98\x99\x9a\x83\x87\x8f\x93\x97\x9b\x8c\x8d\x8e\xa0\xa1\xa2\xa4\xa5\xa6\xa8\xa9\xaa\xb0\xb1\xb2\xb4\xb5\xb6\xb8\xb9\xba\xa3\xa7\xaf\xb3\xb7\xbb\xac\xad\xae\xc0\xc1\xc2\xc4\xc5\xc6\xc8\xc9\xca\xd0\xd1\xd2\xd4\xd5\xd6\xd8\xd9\xda\xc3\xc7\xcf\xd3\xd7\xdb\xcc\xcd\xce`abdefhijpqrtuvxyzcgosw{lmn\xe0\xe1\xe2\xe4\xe5\xe6\xe8\xe9\xea\xf0\xf1\xf2\xf4\xf5\xf6\xf8\xf9\xfa\xe3\xe7\xef\xf3\xf7\xfb\xec\xed\xee\x1c\x1d\x1e<=>\x5c]^\x9c\x9d\x9e\xbc\xbd\xbe\xdc\xdd\xde\x1f?\x7f\x9f\xbf\xff\xfc\xfd\xfe\x00\x00\x00\x00\x00";
static const cmpbe_chunk_OBJC OBJC_41 = { 504, (uint8_t*)b_41 };
static const cmpbe_chunk_EBIN EBIN_42 =
{
	(uint16_t) 0x1,
	(uint16_t) 0x3000,
	(cmpbe_chunk_FSHA_prepass_flags) 0x0,
	(uint32_t) 0xd8,
	(uint16_t) 0x20,
	(uint16_t) 0x5,
	(uint32_t) 0x0,
	(cmpbe_chunk_FSHA_flags) 0x42000,
	(cmpbe_chunk_FSHA_variant) 0x80,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OBJC_41,
	NULL,
	NULL,
};
static const uint8_t b_43[] = "\x02\x00\x00(\xf4\xbc`\x00""B@\x00h\xf4\x84`\x00\xc0\x03\x00\x00\x00\xff\x10\x09}\xff\xff\xff\x00\xfd\x18\x01<\x04\x00\x18\x82\xbe`\x00|\x08\x00(\xf4\xbc`\x10""E\xff\xff\xff\x00\xc5\x18\x01\x04H\x00h\xf4\x86`\x00\x04\x08\x00\xa8\xf4\xba`\x00""D(\x00\xa8\xf4\x84`\x08~?}\xc5\x01\xfdP\x01|\x00\x00\x18\x82\x82`\x10\x00\x00\x00h\x04""Fa \x00\x08\x00h\x04za\x00\x00\x10\x00h\x04""Da\x08\x02\xc0\x7f\xc0\x04\xc3X\x01""BC\x00\x00\x00\xc2\xa0\x00""B\xc8\xc0\x19\x04\xc2\xb4\x00@\x18\x00\x18\x02""Bax";
static const cmpbe_chunk_OBJC OBJC_43 = { 152, (uint8_t*)b_43 };
static const cmpbe_chunk_EBIN EBIN_44 =
{
	(uint16_t) 0xffff,
	(uint16_t) 0x0,
	(cmpbe_chunk_FSHA_prepass_flags) 0x0,
	(uint32_t) 0xffffffff,
	(uint16_t) 0x20,
	(uint16_t) 0x5,
	(uint32_t) 0x0,
	(cmpbe_chunk_FSHA_flags) 0x20042000,
	(cmpbe_chunk_FSHA_variant) 0x0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OBJC_43,
	NULL,
	NULL,
};
static cmpbe_chunk_EBIN a_42[2] = { EBIN_42, EBIN_44, };
static const cmpbe_chunk_CMMN CMMN_1 =
{
	VELA_1,
	SSYM_2,
	SSYM_3,
	SSYM_11,
	SSYM_12,
	SSYM_13,
	SSYM_38,
	UBUF_39,
	(uint16_t) 0x0,
	(uint32_t) 0x1,
	a_40,
	(uint32_t) 0x2,
	a_42,
	NULL,
};
static const uint8_t b_45[] = "main";
static const cmpbe_chunk_STRI STRI_45 = { 4, (uint8_t*)b_45 };
static const cmpbe_chunk_KWGS KWGS_46 =
{
	(uint32_t) 0x8,
	(uint32_t) 0x8,
	(uint32_t) 0x1,
};
static const cmpbe_chunk_KERN KERN_45 =
{
	STRI_45,
	(uint32_t) 0x0,
	NULL,
	(uint32_t) 0x0,
	(cmpbe_chunk_MBS2_reserved_enum) 0x0,
	(cmpbe_chunk_KWGS*)&KWGS_46,
};
static const cmpbe_chunk_CCOM CCOM_1 =
{
	CMMN_1,
	KERN_45,
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
