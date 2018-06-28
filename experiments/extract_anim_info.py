#!/usr/bin/env python

# usage:
#   cat prg_rom/data/state_animations/*.asm > /tmp/anims.asm
#   xa tilt.asm -C -o Super_Tilt_Bro_\(E\).nes 2>&1 | ./extract_anim_info.py 

import re
import stblib.animations
import sys

def asmint(s):
	if s[0] == '$':
		return int(s[1:], 16)
	if s[0] == '%':
		return int(s[1:], 2)
	return int(s)

RE_ANIM_LINE = re.compile('(?P<name>[a-z0-9_]+)=[a-z0-9_]+=(?P<addr>[0-9]+)')

animations_blacklist = [
	'anim_sinbad_victory', # Unused ingame and conatins no hurtbox
	'anim_sinbad_defeat', # Unused ingame and conatins no hurtbox
]
animations_whitelist = [
]
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
RE_ANIM_HURTBOX = re.compile('ANIM_HURTBOX\((?P<left>[$%0-9a-fA-F]+),( *)(?P<right>[$%0-9a-fA-F]+),( *)(?P<top>[$%0-9a-fA-F]+),( *)(?P<bottom>[$%0-9a-fA-F]+)\)')
RE_ANIM_HITBOX = re.compile('ANIM_HITBOX\((?P<enabled>[$%0-9a-fA-F]+),( *)(?P<damages>[$%0-9a-fA-F]+),( *)(?P<base_h>[$%0-9a-fA-F]+),( *)(?P<base_v>[$%0-9a-fA-F]+),( *)(?P<force_h>[$%0-9a-fA-F]+),( *)(?P<force_v>[$%0-9a-fA-F]+),( *)(?P<left>[$%0-9a-fA-F]+),( *)(?P<right>[$%0-9a-fA-F]+),( *)(?P<top>[$%0-9a-fA-F]+),( *)(?P<bottom>[$%0-9a-fA-F]+)\)')
RE_ANIM_END = re.compile('ANIM_ANIMATION_END')

#ANIM_HURTBOX($00, $08, $00, $10)
#ANIM_HITBOX($01, $01, $fe00, $fe00, $fffc, $fffc, $f4, $04, $02, $0a)

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

		m = RE_ANIM_HURTBOX.match(line)
		if m is not None and current_anim is not None and len(current_anim.frames) > 0:
			current_anim.frames[-1].hurtbox = stblib.animations.Hurtbox(
				asmint(m.group('left')), asmint(m.group('right')), asmint(m.group('top')), asmint(m.group('bottom'))
			)

		m = RE_ANIM_HITBOX.match(line)
		if m is not None and current_anim is not None and len(current_anim.frames) > 0:
			current_anim.frames[-1].hitbox = stblib.animations.Hitbox(
				enabled = asmint(m.group('enabled')) != 0,
				damages = asmint(m.group('damages')),
				base_h = asmint(m.group('base_h')),
				base_v = asmint(m.group('base_v')),
				force_h = asmint(m.group('force_h')),
				force_v = asmint(m.group('force_v')),
				left = asmint(m.group('left')),
				right = asmint(m.group('right')),
				top = asmint(m.group('top')),
				bottom = asmint(m.group('bottom'))
			)

		m = RE_ANIM_END.match(line)
		if m is not None and current_anim is not None:
			# Check consistency
			if current_anim.name not in animations_blacklist:
				for frame in current_anim.frames:
					if frame.hurtbox is None: raise Exception('missing hurtbox in {}'.format(current_anim.name))

			# Store the animation
			animations[current_anim.name]['anim'] = current_anim
			current_anim = None

for name in animations:
	if name not in animations_blacklist and (len(animations_whitelist) == 0 or name in animations_whitelist):
		addr = animations[name]['addr']
		serialized = '{"%s", %d, {\n' % (name, addr)
		for frame in animations[name]['anim'].frames:
			if frame.hitbox is None:
				serialized += '\t{\n'
				serialized += '\t\t%d, false,\n' % (frame.duration,)
				serialized += '\t\t{{%d, %d, %d, %d}},\n' % (frame.hurtbox.left, frame.hurtbox.right, frame.hurtbox.top, frame.hurtbox.bottom)
				serialized += '\t\t{0}\n'
				serialized += '\t},\n'
			else:
				serialized += '\t{\n'
				serialized += '\t\t%d, true,\n' % (frame.duration,)
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
