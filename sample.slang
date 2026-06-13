[[vk::binding(0, 0)]]
StructuredBuffer<uint> input;

[[vk::binding(1, 0)]]
RWStructuredBuffer<uint> output;

RWStructuredBuffer<uint> __DEBUG_LINE_BUFFER__;
#define MARK() InterlockedAdd(__DEBUG_LINE_BUFFER__[__LINE__], 1)

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
  MARK();
  int2 block_pos = int2(gl_GlobalInvocationID.xy);
  int2 tex_coord = block_pos * 4;

  MARK();
  if (any(tex_coord >= pushConstants.u_TextureDimensions))
    return;

  MARK();
  var buffer_index =
      block_pos.y * (pushConstants.u_TextureDimensions.x / 4) + block_pos.x;

  MARK();
  output[buffer_index] =
      uint(input[buffer_index] * 3.251) + packed_trit_data[input[buffer_index]];
  MARK();
}
