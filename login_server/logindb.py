import json
import os.path

#
# Working structures
#

_db_file = None

user_db = {
	'registered_logins': {},

	'next_anonymous_id': 0,
	'next_registered_id': 0x80000000,
}

#
# Internal utilities
#

def _new_registered_client_id():
	global user_db
	new_id = user_db['next_registered_id']
	assert new_id < 0x100000000
	user_db['next_registered_id'] += 1
	return new_id

def _sync_db():
	global _db_file, user_db
	if _db_file is not None:
		tmp_db_path = '{}.tmp'.format(_db_file)
		with open(tmp_db_path, 'w') as tmp_db:
			json.dump(user_db, tmp_db)
		os.replace(tmp_db_path, _db_file)

#
# Public API
#

def load(db_file):
	global _db_file, user_db
	_db_file = db_file

	if db_file is not None and os.path.isfile(db_file):
		with open(db_file, 'r') as f:
			user_db = json.load(f)

def get_anonymous_id():
	global user_db
	new_id = user_db['next_anonymous_id']
	user_db['next_anonymous_id'] = (user_db['next_anonymous_id'] + 1) % 0x80000000
	_sync_db()
	return new_id

def get_user_info(user_name):
	global user_db
	_sync_db()
	return user_db['registered_logins'].get(user_name)

def register_user(user_name, password):
	global user_db
	assert get_user_info(user_name) is None
	user_db['registered_logins'][user_name] = {
		'password': password,
		'client_id': _new_registered_client_id()
	}
	_sync_db()
