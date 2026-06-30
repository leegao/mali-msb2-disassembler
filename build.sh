# slangc sample.slang -target glsl -line-directive-mode none > sample.comp
# rm sample_mbs2_shader.h
# frida -f ~/Downloads/Arm_Performance_Studio_2026.2/mali_offline_compiler/malioc -l hook.js -- -c Mali-G615 --vulkan sample.comp
glslc -c s3tc.comp -o s3tc.spv
rm sample_mbs2_shader.h
frida -f ~/Downloads/Arm_Performance_Studio_2026.2/mali_offline_compiler/malioc -l hook.js -- -c Mali-G615 --vulkan s3tc.spv

echo "// AUTO-GENERATED - DO NOT EDIT" > disassemble.c
uv run python disasm.py --xml ISA.xml >> disassemble.c

gcc sample_mbs2_shader.c disassemble.c cmpbe_chunks.c -o sample_mbs2_shader.out
./sample_mbs2_shader.out

# gcc astc_encoder_mbs2_shader.c disassemble.c -o astc_encoder_mbs2_shader.out
# ./astc_encoder_mbs2_shader.out
