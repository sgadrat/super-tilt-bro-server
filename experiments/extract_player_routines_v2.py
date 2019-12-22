#!/usr/bin/env python

# usage:
#   ./extract_player_routines_v2.py tilt/game-mod/mod.json

import os
import re
import stblib.animations
import stblib.asmformat.animations
import stblib.dictformat
import stblib.jsonformat
import sys

# Get game-mod
mod_file = sys.argv[1]
with open(mod_file, 'r') as f:
	mod_dict = stblib.jsonformat.json_to_dict(f, os.path.dirname(mod_file))
mod = stblib.dictformat.import_from_dict(mod_dict)
mod.check()

# Extract routines info from game-mod
routines_info = {}
for character in mod.characters:
	routines_info[character.name] = {
		'update': [],
		'offground': [],
		'onground': [],
		'input': [],
		'onhurt': [],
	}
	for state in character.states:
		routines_info[character.name]['update'].append(state.update_routine)
		routines_info[character.name]['offground'].append(state.offground_routine)
		routines_info[character.name]['onground'].append(state.onground_routine)
		routines_info[character.name]['input'].append(state.input_routine)
		routines_info[character.name]['onhurt'].append(state.onhurt_routine)

# Serialize state routines to cpp
routine_name_conversion = {
	'': '&GameState::dummy_routine',
}
character_name = 'sinbad'
for table in [
	{'name': 'update', 'cpp_name': 'mPlayerTickRoutines'},
	{'name': 'offground', 'cpp_name': 'mPlayerOffgroundRoutines'},
	{'name': 'onground', 'cpp_name': 'mPlayerOngroundRoutines'},
	{'name': 'input', 'cpp_name': 'mPlayerInputRoutines'},
	{'name': 'onhurt', 'cpp_name': 'mPlayerOnhurtRoutines'},
]:
	print('\t{} = {{'.format(table['cpp_name']))
	print('\t\t', end='')
	cnt = 0
	for routine_name in routines_info[character_name][table['name']]:
		# Name normalization
		if routine_name is None:
			routine_name = ''
		if routine_name[:12] == 'sinbad_tick_':
			routine_name = '{}_player'.format(routine_name[12:])
		if routine_name[:13] == 'sinbad_input_':
			routine_name = '{}_player_input'.format(routine_name[13:])
		if routine_name[:12] == 'sinbad_hurt_':
			routine_name = '{}_player_hurt'.format(routine_name[12:])
		if routine_name[:7] == 'sinbad_':
			routine_name = '{}_player'.format(routine_name[7:])

		# Name serialization
		if routine_name in routine_name_conversion:
			print(routine_name_conversion[routine_name], end=',')
		else:
			print('&GameState::{}'.format(routine_name), end=',')

		# Pretty printing
		cnt += 1
		if cnt == len(routines_info[character_name][table['name']]):
			print('')
		elif cnt % 5 == 0:
			print('\n\t\t', end='')
		else:
			print(' ', end='')
	print('\t};')
