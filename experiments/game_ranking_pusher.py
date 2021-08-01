#!/usr/bin/env python
import argparse
import base64
import requests
import sys
import time

def log(m):
	sys.stderr.write('[{}] {}\n'.format(time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime()), m))

# Parse command line
RANKING_SERVER_ADDR = '127.0.0.1'
RANKING_SERVER_PORT = 8123
REPLAY_SERVER_ADDR = '127.0.0.1'
REPLAY_SERVER_PORT = 8125
BMOV_DIR = ''

parser = argparse.ArgumentParser(description='Pusher for Super Tilt Bro.\'s server games')
parser.add_argument('--ranking-server-addr', type=str, default=RANKING_SERVER_ADDR, help='ranking server address (default: "{}")'.format(RANKING_SERVER_ADDR))
parser.add_argument('--ranking-server-port', type=int, default=RANKING_SERVER_PORT, help='ranking server REST port (default: {})'.format(RANKING_SERVER_PORT))
parser.add_argument('--replay-server-addr', type=str, default=REPLAY_SERVER_ADDR, help='replay server address (default: "{}")'.format(REPLAY_SERVER_ADDR))
parser.add_argument('--replay-server-port', type=int, default=REPLAY_SERVER_PORT, help='replay server REST port (default: {})'.format(REPLAY_SERVER_PORT))
parser.add_argument('--bmov-dir', type=str, default=BMOV_DIR, help='path to stb_server\'s bmov replays, empty to disable (default: "{}")'.format(BMOV_DIR))
args = parser.parse_args()

ranking_server = {
	'addr': args.ranking_server_addr,
	'port': args.ranking_server_port
}
replay_server = {
	'addr': args.replay_server_addr,
	'port': args.replay_server_port
}
bmov_dir = args.bmov_dir

# Parse input
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
	'character_a_palette': {'type': 'int'},
	'character_b_palette': {'type': 'int'},
	'stage': {'type': 'int'},
	'winner': {'type': 'int'},
}

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
			log('ranginf_server rejected game "{}"'.format(line))

		# Send replay to the replay server
		if bmov_dir != '':
			bmov_data = None
			with open('{}/{}/replay.bmov'.format(bmov_dir, game_summary['game']), 'rb') as bmov_file:
				bmov_data = bmov_file.read()
			game_summary['bmov'] = base64.b64encode(bmov_data).decode('utf-8')

			resp = requests.post('http://{}:{}/api/replay/games/'.format(replay_server['addr'], replay_server['port']), json=[game_summary])
			if resp.status_code != 200:
				log('replay server rejected game "{}"'.format(line))
	except Exception as e:
		log('error with line "{}": {}'.format(line, e))
