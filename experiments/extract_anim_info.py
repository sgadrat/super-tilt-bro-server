#!/usr/bin/env python

# usage:
#   cat prg_rom/data/state_animations/*.asm > /tmp/anims.asm
#   xa tilt.asm -C -o Super_Tilt_Bro_\(E\).nes 2>&1 | ./extract_anim_info.py 

import re
import stblib.animations
import sys

def asmint(s):
	#TODO handle hex and bin
	if s[0] == '$':
		raise Exception('todo hex')
	if s[0] == '%':
		raise Exception('todo hex')
	return int(s)

RE_ANIM_LINE = re.compile('(?P<name>[a-z0-9_]+)=[a-z0-9_]+=(?P<addr>[0-9]+)')

animations = {}

for line in sys.stdin:
	if line == '\n':
		break
	line = line[:-1]

	m = RE_ANIM_LINE.match(line)
	if m is not None:
		animations[m.group('name')] = {
				'addr': int(m.group('addr')),
				'anim': None
		}

RE_ANIM_LABEL = re.compile('(?P<name>anim_[a-z_]+):')
RE_ANIM_FRAME_BEGIN = re.compile('ANIM_FRAME_BEGIN\((?P<duration>[$%0-9a-fA-F]+)\)')
RE_ANIM_END = re.compile('ANIM_ANIMATION_END')

with open('/tmp/anims.asm', 'r') as anim_file:
	current_anim = None
	for line in anim_file:
		line = line[:-1]

		m = RE_ANIM_LABEL.match(line)
		if m is not None and current_anim is None:
			current_anim = stblib.animations.Animation(name=m.group('name'))

		m = RE_ANIM_FRAME_BEGIN.match(line)
		if m is not None and current_anim is not None:
			current_anim.frames.append(stblib.animations.Frame(duration=asmint(m.group('duration'))))

		m = RE_ANIM_END.match(line)
		if m is not None and current_anim is not None:
			animations[current_anim.name]['anim'] = current_anim
			current_anim = None

for name in animations:
	addr = animations[name]['addr']
	duration = 0
	for frame in animations[name]['anim'].frames:
		duration += frame.duration
	print('{{"{}", {}, {}}}'.format(name, addr, duration))
