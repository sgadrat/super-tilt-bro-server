#!/usr/bin/env python

import sys
import json

# Parse command line
bytecode_file_path = sys.argv[1]
entry_points_file_path = sys.argv[2]
known_opcodes_file_path = sys.argv[3]

# Load files
with open(entry_points_file_path, 'r') as entry_points_file:
	entry_points = json.load(entry_points_file)

with open(bytecode_file_path, 'rb') as bytecode_file:
	bytecode = bytecode_file.read()

with open(known_opcodes_file_path, 'r') as known_opcodes_file:
	known_opcodes = json.load(known_opcodes_file)

# Generate code sections map
#  For each entry point, note the list of opcodes until a branching instruction is found, or an unknonw opcode
#  branching instruction: integrate it to the list as a last entry (we don't know what will be the next instruction to execute)
#  unknown opcode: don't integrate it, it is certainly data

def opid(opcode):
	"""
	opcode to its index in known_opcodes
	"""
	return '{:02x}'.format(opcode)

code_sections = {}
for entry_point in entry_points:
	opcodes = []

	pc = entry_point['pc']
	assert pc >= 0xc000 and pc <= 0xffff
	bytecode_addr = 0x1f * 0x4000 + (pc - 0xc000)

	stop = False
	while not stop:
		opcode = bytecode[bytecode_addr]
		if opid(opcode) not in known_opcodes:
			stop = True
		else:
			opcodes.append(opcode)
			bytecode_addr += known_opcodes[opid(opcode)]['length']
			if known_opcodes[opid(opcode)]['may_jump']:
				stop = True

	if len(opcodes) > 0:
		section = {
			'name': entry_point.get('name', '{:04x}'.format(entry_point['pc'])),
			'opcodes': opcodes
		}
		code_sections[pc] = section

# Print code sections map
output_format = 'cpp'

if output_format == 'human':
	for code_section_addr in code_sections:
		code_section = code_sections[code_section_addr]
		print('\n==== {:04x} - {} ==='.format(code_section_addr, code_section['name']))
		for opcode in code_section['opcodes']:
			print('\t({:02x}) {}'.format(opcode, known_opcodes[opid(opcode)]['mnemonic']))

if output_format == 'cpp':
	print('namespace emulator_compiled_segments_funcs {');
	for code_section_addr in code_sections:
		code_section = code_sections[code_section_addr]
		print('void seg_%04x_%s(mos6502<GameState::EmulatorRunContext>& emu) {' % (code_section_addr, code_section['name']))
		for opcode in code_section['opcodes']:
			print('\t++emu.pc; emu.Op_%s();' % known_opcodes[opid(opcode)]['mnemonic'])
			if known_opcodes[opid(opcode)]['mnemonic'] == 'STA_ABS':
				print('\tif (emu.stopped) { return; }')
		print('}')
	print('}')
	print('')
	print('std::array<void(*)(mos6502<GameState::EmulatorRunContext>&), 0x4000> GameState::emulator_compiled_segments = {')
	last_table_pos = 0
	for code_section_addr, code_section in sorted(code_sections.items(), key=lambda x: x[0]):
		table_pos = code_section_addr - 0xc000
		#print('{} -> {}'.format(last_table_pos, table_pos))
		assert table_pos >= last_table_pos, "we are iterating on sorted list"
		for i in range(last_table_pos, table_pos-1):
			print('\tnullptr,')
		print('\t&emulator_compiled_segments_funcs::seg_%04x_%s,' % (code_section_addr, code_section['name']))
		last_table_pos = table_pos
	#print('{} -> {}'.format(last_table_pos, 0xffff))
	for i in range(last_table_pos, 0x3fff):
		print('\tnullptr,')
	print('};')
