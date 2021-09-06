#!/usr/bin/env python

import listing
import sys
import json

entry_points = []

# opcodes hex in string as they are represented in xa listing
JSR = '20'
BPL = '10'
BMI = '30'
BVC = '50'
BVS = '70'
BCC = '90'
BCS = 'b0'
BEQ = 'f0'
BNE = 'd0'

def on_line(_, line):
	global entry_points
	if line['address'] >= 0xc000:
		if line['code'][0] != ' ':
			# label
			entry_points.append({'pc': line['address'], 'name': '{}'.format(line['code'].rstrip())})
		elif line['data_repr'][:2] in [JSR]:
			# JSR, good chance callee will return to next line
			entry_points.append({'pc': line['address'] + 3})
		elif line['data_repr'][:2] in [BPL, BMI, BVC, BVS, BCC, BCS, BEQ, BNE]:
			# branching, "no" branch is the next instruction
			entry_points.append({'pc': line['address'] + 2})

listing.parse_file(sys.argv[1], on_listing = on_line);
print(json.dumps(entry_points))
