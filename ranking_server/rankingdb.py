import json
import os.path

#
# Working structures
#

_db_file = None

ranking_db = {
	'users': {},
}

#
# Internal utilities
#

def _sync_db():
	global _db_file, ranking_db
	if _db_file is not None:
		tmp_db_path = '{}.tmp'.format(_db_file)
		with open(tmp_db_path, 'w') as tmp_db:
			json.dump(ranking_db, tmp_db)
		os.replace(tmp_db_path, _db_file)

def _get_user_id(timepoint, connection_id):
	#TODO should ask the login server for the association timepoint+connection_id to user_id
	#     For now user_id == connection_id, let's assume it
	#     just convert it to hex string type (to be a valid json property name)
	return '{:08x}'.format(int(connection_id))


#
# Public API
#

def load(db_file):
	global _db_file, ranking_db
	_db_file = db_file

	if db_file is not None and os.path.isfile(db_file):
		with open(db_file, 'r') as f:
			ranking_db = json.load(f)

def push_games(games_info):
	global ranking_db

	# Update rankings
	for game_info in games_info:
		# Check game consistency
		mandatory_fields = ['begin', 'end', 'client_a', 'client_b', 'player_a_ranked', 'player_b_ranked', 'winner']
		for field in mandatory_fields:
			if field not in game_info:
				raise Exception('invalid game info format, missing "{}" field'.format(field))

		# Retrieve users IDs
		user_a = _get_user_id(game_info['begin'], game_info['client_a'])
		user_b = _get_user_id(game_info['begin'], game_info['client_b'])

		# Create missing users
		for user_id in [user_a, user_b]:
			if user_id not in ranking_db['users']:
				ranking_db['users'][user_id] = {
					'ranked_mmr': 1000,
					'unranked_mmr': 1000,
				}

		# Apply MMR change
		#TODO actual Elo
		if game_info['winner'] == 0:
			winner = user_a
			loser = user_b
			winner_mmr_key = 'ranked_mmr' if game_info['player_a_ranked'] == 1 else 'unranked_mmr'
			loser_mmr_key = 'ranked_mmr' if game_info['player_b_ranked'] == 1 else 'unranked_mmr'
		else:
			winner = user_b
			loser = user_a
			winner_mmr_key = 'ranked_mmr' if game_info['player_b_ranked'] == 1 else 'unranked_mmr'
			loser_mmr_key = 'ranked_mmr' if game_info['player_a_ranked'] == 1 else 'unranked_mmr'

		ranking_db['users'][winner][winner_mmr_key] += 10
		ranking_db['users'][loser][loser_mmr_key] = max(0, ranking_db['users'][loser][loser_mmr_key] - 10)

	# Update DB file
	_sync_db()

def get_ladder():
	global ranking_db
	return sorted(
		[{'mmr': ranking_db['users'][u]['ranked_mmr'], 'user_id': int(u, 16)} for u in ranking_db['users']],
		key=lambda x: (x['mmr'], x['user_id']),
		reverse=True
	)
