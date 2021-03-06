#!/bin/env python
import re
import sys

FRAME_TIME = 20000 # 50 Hz
FRAME_TIME = 19997 # 50.007 Hz (As seen in FCEUX constant)
#FRAME_TIME = 19997.209 # 50.006978908189 Hz (http://tasvideos.org/PlatformFramerates.html)
FRAME_TIME = 19930 # this one works well, seems to match FCEUX imprecise framerate throttle
#FRAME_TIME = 16777216 / 838977920 # FCEUX PAL (0,019997208 seconds)
#FRAME_TIME = 16777216 / 1008307711 # FCEUX NTSC (0,016638984 seconds)

re_net_msg_entry = re.compile('^ *(?P<time>[0-9]+)\t[^\t]+\t(?P<msgtype>[0-9a-f]+ )(?P<client>[0-9a-f]+ [0-9a-f]+ [0-9a-f]+ [0-9a-f]+ )(?P<msgtime>[0-9a-f]+ [0-9a-f]+ [0-9a-f]+ [0-9a-f]+ )(?P<msgpad>[0-9a-f]+ )')

original_timestamp = None
for line in sys.stdin:
	line = line.rstrip('\n\r')

	# Ignore timeout lines (it is internal stuff, not involving clients)
	if '-- ti me ou t. --' in line:
		print(line)
		continue

	# Parse line
	m = re_net_msg_entry.match(line)
	assert m is not None

	timestamp = int(m.group('time'))
	msg_time_raw = m.group('msgtime')
	#msg_time_hex = msg_time_raw.replace(' ', '')
	msg_time_hex = msg_time_raw[9:11]+msg_time_raw[6:8]+msg_time_raw[3:5]+msg_time_raw[0:2]
	msg_time = int(msg_time_hex, 16)
	msg_time *= FRAME_TIME

	# Compute variation information
	if original_timestamp is None:
		original_timestamp = timestamp - msg_time

	adjusted_time = timestamp - original_timestamp
	variation = msg_time - adjusted_time

	# Show enhanced line
	variation_frame = variation / FRAME_TIME
	#print('ots={} ts={} ats={} mts={} v={} vf={}'.format(original_timestamp, timestamp, adjusted_time, msg_time, variation, variation_frame))
	print('{} - {} frames in the {}'.format(
		line,
		abs(variation_frame), 'future' if variation_frame > 0 else 'past'
	))
