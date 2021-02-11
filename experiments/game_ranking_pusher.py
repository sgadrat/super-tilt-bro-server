#!/usr/bin/env python
import requests
import sys
import time

ranking_server = {
	'addr': '127.0.0.1',
	'port': 8123
}

field_desc = {
	'game': {'type': 'uuid'},
	'begin': {'type': 'date'},
	'end': {'type': 'date'},
	'client_a': {'type': 'hex'},
	'client_b': {'type': 'hex'},
	'player_a_ranked': {'type': 'bool'},
	'player_b_ranked': {'type': 'bool'},
	'character_a': {'type': 'int'},
	'character_b': {'type': 'int'},
	'stage': {'type': 'int'},
	'winner': {'type': 'int'},
}

def log(m):
	sys.stderr.write('[{}] {}\n'.format(time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime()), m))

for line in sys.stdin:
	try:
		line = line.rstrip('\r\n')

		# Parse game summary
		fields = line.split('\t')
		game_summary = {}
		for field in fields:
			if field == '':
				continue

			key, sep, value = field.partition('=')
			if sep != '=':
				log('ignored invalid field "{}" in line "{}"'.format(field, line))
				continue

			if key not in field_desc:
				log('unknown field "{}"'.format(key))
				continue

			if field_desc[key]['type'] in ['int', 'bool']:
				value = int(value)
			if field_desc[key]['type'] == 'hex':
				value = int(value, 16)

			game_summary[key] = value

		# Send game summary to the ranking server
		resp = requests.post('http://{}:{}/api/rankings'.format(ranking_server['addr'], ranking_server['port']), json=[game_summary])
		if resp.status_code != 200:
			log('server rejected game "{}"'.format(line))
	except Exception as e:
		log('error with line "{}": {}'.format(line, e))
