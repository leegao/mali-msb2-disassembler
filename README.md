# mali-msb2-disassembler
Disassembler for msb2 compiled objects from malioc/mali shader compiler (specifically for Valhall)

Assuming you've downloaded [Arm_Performance_Studio_2026.2](https://developer.arm.com/documentation/107649/2026-2/) to `~/Downloads/Arm_Performance_Studio_2026.2`

```
; ======================================
; VALHALL MBS2 SHADER (Dis)ASM
; Entry: main
; Vregs: 32 / 64 (32 = max occupancy)
; Size: 504 bytes, 0 bytes of scratch alloca
; ======================================

/* [0x0000] 00B4C00119C0C83D */   LSHIFT_OR.i32 r0, r61, 0x3020100.b22, 0x0
/* [0x0008] 00F8C00280C08640 */   ICMP_OR.s32.ge.m1 r0, r0^, u3.w0 (pushConstants_0.u_TextureDimensions_0 + 4B), 0x0
/* [0x0010] 00B4C10119C0C83C */   LSHIFT_OR.i32 r1, r60, 0x3020100.b22, 0x0
/* [0x0018] 00F8C00280408541 */   ICMP_OR.s32.ge.m1 r0, r1^, u2.w1 (pushConstants_0.u_TextureDimensions_0), r0^
/* [0x0020] 001FC00000000E40 */   BRANCHZ r0^, offset:14
/* [0x0028] 00A0C000000A847D */   IMUL.i32 r0, r61^, u2.w0
/* [0x0030] 00A0C20000007C40 */   IADD.u32 r2, r0^, r60^
/* [0x0038] 01A3C00020270280 */   SHADDX.u64 [r0:r1], u0 (descriptor: _59_input_0), [r2:r3].w0, shift:0x2
/* [0x0040] 0060838218000040 */   LOAD.i32.unsigned.slot0 @r3, [r0^:r1^], offset:0
/* [0x0048] 01A3FE0020270282 */   SHADDX.u64 [r62:r63], u1 (descriptor: _53_output_0), [r2:r3].w0, shift:0x2
/* [0x0050] 0710FC000000A8FE */   IADD_IMM.i32 r60, program_counter.w0, #0xA8
/* [0x0058] 0E91FD00000000FF */   MOV.i32.wait0 r61, program_counter.w1
/* [0x0060] 01A3FC002427027C */   SHADDX.u64 [r60:r61], [r60^:r61^], [r2:r3].reserved, shift:0x2
/* [0x0068] 006080821800007C */   LOAD.i32.unsigned.slot0 @r0, [r60^:r61^], offset:0
/* [0x0070] 0090FC0C00190043 */   U32_TO_F32 r60, r3^
/* [0x0078] 00B2FC0400C0877C */   FMA.f32 r60, r60^, u3.w1 (const: 3.251f), 0x0.neg
/* [0x0080] 0890FC0CC01C007C */   F32_TO_U32.rtz.wait0 r60, r60^
/* [0x0088] 00A0FD000000407C */   IADD.u32 r61, r60^, r0^
/* [0x0090] 50617D021800007E */   STORE.i32.slot0.reconverge @r61, [r62^:r63^], offset:0
/* [0x0098] 7800C00000000000 */   NOP.end

.rodata (352 bytes):
... (96 bytes of zeroes) ...
/* [0x0100] 0908060504020100 */
/* [0x0108] 181615141211100A */
/* [0x0110] 1B17130F07031A19 */
/* [0x0118] 25242221200E0D0C */
/* [0x0120] 343231302A292826 */
/* [0x0128] 2F27233A39383635 */
/* [0x0130] 41402E2D2C3B3733 */
/* [0x0138] 504A494846454442 */
/* [0x0140] 5A59585655545251 */
/* [0x0148] 4D4C5B57534F4743 */
/* [0x0150] 888685848281804E */
/* [0x0158] 9695949291908A89 */
/* [0x0160] 97938F87839A9998 */
/* [0x0168] A4A2A1A08E8D8C9B */
/* [0x0170] B2B1B0AAA9A8A6A5 */
/* [0x0178] A7A3BAB9B8B6B5B4 */
/* [0x0180] C0AEADACBBB7B3AF */
/* [0x0188] CAC9C8C6C5C4C2C1 */
/* [0x0190] D9D8D6D5D4D2D1D0 */
/* [0x0198] CCDBD7D3CFC7C3DA */
/* [0x01A0] 666564626160CECD */
/* [0x01A8] 75747271706A6968 */
/* [0x01B0] 736F67637A797876 */
/* [0x01B8] E2E1E06E6D6C7B77 */
/* [0x01C0] F1F0EAE9E8E6E5E4 */
/* [0x01C8] E3FAF9F8F6F5F4F2 */
/* [0x01D0] EEEDECFBF7F3EFE7 */
/* [0x01D8] 5D5C3E3D3C1E1D1C */
/* [0x01E0] DCBEBDBC9E9D9C5E */
/* [0x01E8] FFBF9F7F3F1FDEDD */
/* [0x01F0] 0000000000FEFDFC */

; End of Disassembly

Mali Offline Compiler v8.8.1 (Build 73b41e)
Copyright (c) 2007-2025 Arm Limited. All rights reserved.

Configuration
=============

Hardware: Mali-G615 r0p0
Architecture: Valhall
Driver: r55p0-00rel0
Shader type: Vulkan Compute

Main shader
===========

Work registers: 8 (25% used at 100% occupancy)
Uniform registers: 8 (6% used)
[Frida] cmpbe_v2_compile_multiple_shaders returning
Shared storage size: 0 bytes
Stack use: false
16-bit arithmetic: 0%

                                A      LS       T    Bound
Total instruction cycles:    0.30    3.00    0.00       LS
Shortest path cycles:        0.09    0.00    0.00        A
Longest path cycles:         0.30    3.00    0.00       LS

A = Arithmetic, LS = Load/Store, T = Texture

Shader properties
=================

Has uniform computation: true

```

for

```
[[vk::binding(0, 0)]]
StructuredBuffer<uint> input;

[[vk::binding(1, 0)]]
RWStructuredBuffer<uint> output;

struct PushConstants {
  int2 u_TextureDimensions;
};

[[vk::push_constant]]
PushConstants pushConstants;

static const uint packed_trit_data[61] = {
  0x04020100, 0x09080605, 0x1211100A, 0x18161514, 0x07031A19, 0x1B17130F,
  0x200E0D0C, 0x25242221, 0x2A292826, 0x34323130, 0x39383635, 0x2F27233A,
  0x2C3B3733, 0x41402E2D, 0x46454442, 0x504A4948, 0x55545251, 0x5A595856,
  0x534F4743, 0x4D4C5B57, 0x8281804E, 0x88868584, 0x91908A89, 0x96959492,
  0x839A9998, 0x97938F87, 0x8E8D8C9B, 0xA4A2A1A0, 0xA9A8A6A5, 0xB2B1B0AA,
  0xB8B6B5B4, 0xA7A3BAB9, 0xBBB7B3AF, 0xC0AEADAC, 0xC5C4C2C1, 0xCAC9C8C6,
  0xD4D2D1D0, 0xD9D8D6D5, 0xCFC7C3DA, 0xCCDBD7D3, 0x6160CECD, 0x66656462,
  0x706A6968, 0x75747271, 0x7A797876, 0x736F6763, 0x6D6C7B77, 0xE2E1E06E,
  0xE8E6E5E4, 0xF1F0EAE9, 0xF6F5F4F2, 0xE3FAF9F8, 0xF7F3EFE7, 0xEEEDECFB,
  0x3C1E1D1C, 0x5D5C3E3D, 0x9E9D9C5E, 0xDCBEBDBC, 0x3F1FDEDD, 0xFFBF9F7F,
  0x00FEFDFC,
};

[shader("compute")]
[numthreads(8, 8, 1)]
void main(uint3 gl_GlobalInvocationID: SV_DispatchThreadID) {
  int2 block_pos = int2(gl_GlobalInvocationID.xy);
  int2 tex_coord = block_pos * 4;

  if (any(tex_coord >= pushConstants.u_TextureDimensions))
    return;

  var buffer_index =
      block_pos.y * (pushConstants.u_TextureDimensions.x / 4) + block_pos.x;

  // Encoding
  output[buffer_index] =
      uint(input[buffer_index] * 3.251) + packed_trit_data[input[buffer_index]];
}
```

Thanks to Panfrost's Valhall compiler team for the disassembler
