#!/usr/bin/env python

# usage:
#   cat tilt/build.log 2>&1 | ./extract_anim_info.py tilt/game-mod/mod.json

import os
import re
import stblib.animations
import stblib.asmformat.animations
import stblib.dictformat
import stblib.jsonformat
import sys

animations = {}

# Get animations address from stdin (expecting build.log format)
RE_ANIM_LINE = re.compile('(?P<name>[a-z_]*anim_[a-z0-9_]+)=[a-z0-9_]+=(?P<addr>[0-9]+)')
for line in sys.stdin:
	line = line[:-1]

	m = RE_ANIM_LINE.match(line)
	if m is not None:
		animations[m.group('name')] = {
				'addr': int(m.group('addr')),
				'anim': None
		}

# Get animations data from game-mod
mod_file = sys.argv[1]
with open(mod_file, 'r') as f:
	mod_dict = stblib.jsonformat.json_to_dict(f, os.path.dirname(mod_file))
mod = stblib.dictformat.import_from_dict(mod_dict)
mod.check()

for character in mod.characters:
	for anim in character.animations:
		animations[anim.name]['anim'] = anim

# Serialize to cpp initialization-list
for name in animations:
	if animations[name]['anim'] is not None:
		addr = animations[name]['addr']
		serialized = '{"%s", %d, {\n' % (name, addr)
		for frame in animations[name]['anim'].frames:
			if frame.hitbox is None:
				serialized += '\t{\n'
				serialized += '\t\t%d, %d, false,\n' % (stblib.asmformat.animations.frame_bin_size(frame), frame.duration,)
				serialized += '\t\t{{%d, %d, %d, %d}},\n' % (frame.hurtbox.left, frame.hurtbox.right, frame.hurtbox.top, frame.hurtbox.bottom)
				serialized += '\t\t{0}\n'
				serialized += '\t},\n'
			else:
				serialized += '\t{\n'
				serialized += '\t\t%d, %d, true,\n' % (stblib.asmformat.animations.frame_bin_size(frame), frame.duration,)
				serialized += '\t\t{{%d, %d, %d, %d}},\n' % (frame.hurtbox.left, frame.hurtbox.right, frame.hurtbox.top, frame.hurtbox.bottom)
				serialized += '\t\t{%s, {%d, %d, %d, %d}, %d, %d, %d, %d, %d}\n' % (
					'true' if frame.hitbox.enabled else 'false',
					frame.hitbox.left, frame.hitbox.right, frame.hitbox.top, frame.hitbox.bottom,
					frame.hitbox.force_v, frame.hitbox.force_h,
					frame.hitbox.base_v, frame.hitbox.base_h,
					frame.hitbox.damages
				)
				serialized += '\t},\n'
		serialized += '}},'
		print(serialized)
