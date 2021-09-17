#!/usr/bin/env python

import re
import sys

if len(sys.argv) < 2:
	print('usage: {} source_file_1 ... source_file_N'.format(sys.argv[0]))
	sys.exit(1)

# Build memory layout header
print('#pragma once')
print('#include <stdint.h>')
for source_file_index in range(1, len(sys.argv)):
	print('\n//\n// {}\n//\n'.format(sys.argv[source_file_index]))
	with open(sys.argv[source_file_index], 'r') as source_file:
		buffer = ''
		for line in source_file:
			processed = line.rstrip('\n')
			processed = re.sub(';', '//', processed)
			processed = re.sub(r'^([a-zA-Z0-9_]+) += \$([0-9a-f]+)', r'uint16_t const \1 = 0x\2;', processed)
			processed = re.sub(r'^([a-zA-Z0-9_]+) += \%([01]+)', r'uint16_t const \1 = 0b\2;', processed)
			processed = re.sub(r'^([a-zA-Z0-9_]+) += ([^/]*)( //.*)?$', r'uint16_t const \1 = \2;\3', processed)
			if processed == '' or processed.startswith('//'):
				buffer += processed + '\n'
			elif processed.startswith('uint16_t const '):
				if buffer != '':
					print(buffer, end='')
					buffer = ''
				print(processed)
