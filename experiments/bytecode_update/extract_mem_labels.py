#!/usr/bin/env python

import re
import sys

if len(sys.argv) != 2:
	print('usage: {} source_file'.format(sys.argv[0]))
	sys.exit(1)

# Build memory layout header
with open(sys.argv[1], 'r') as source_file:
	print('#pragma once')
	print('#include <stdint.h>\n')
	for line in source_file:
		processed = line.rstrip('\n')
		processed = re.sub(';', '//', processed)
		processed = re.sub(r'^([a-zA-Z0-9_]+) = \$([0-9a-f]+)', r'uint16_t const \1 = 0x\2;', processed)
		processed = re.sub(r'^([a-zA-Z0-9_]+) = ([^/]*)( //.*)?$', r'uint16_t const \1 = \2;\3', processed)
		print(processed)
