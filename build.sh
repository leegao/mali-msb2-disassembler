slangc sample.slang -target glsl -line-directive-mode none > sample.comp
frida -f ~/Downloads/Arm_Performance_Studio_2026.2/mali_offline_compiler/malioc -l hook.js -- -c Mali-G615 --vulkan sample.comp

echo "// AUTO-GENERATED - DO NOT EDIT" > disassemble.c
uv run python disasm.py --xml ISA.xml >> disassemble.c

gcc sample_mbs2_shader.c disassemble.c -o sample_mbs2_shader.out
./sample_mbs2_shader.out
