import json
import os.path
import threading

#
# Working structures
#

_db_file = None
_db_mutex = threading.Lock()

user_db = {
	'registered_logins': {},

	'next_anonymous_id': 0,
	'next_registered_id': 0x80000000,
}

#
# Internal utilities
#

def _new_registered_user_id():
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
	global _db_file, _db_mutex, user_db
	with _db_mutex:
		_db_file = db_file

		if db_file is not None and os.path.isfile(db_file):
			with open(db_file, 'r') as f:
				user_db = json.load(f)

def get_anonymous_id():
	global _db_mutex, user_db
	with _db_mutex:
		new_id = user_db['next_anonymous_id']
		user_db['next_anonymous_id'] = (user_db['next_anonymous_id'] + 1) % 0x80000000
		_sync_db()
		return new_id

def get_user_info(user_name):
	global _dbg_mutex, user_db
	with _db_mutex:
		return user_db['registered_logins'].get(user_name)

def get_user_name(user_id):
	global _db_mutex, user_db
	with _db_mutex:
		for user_name, user_info in user_db['registered_logins'].items():
			if user_info['user_id'] == user_id:
				return user_name
		return None

def register_user(user_name, password):
	global _db_mutex, user_db
	with _db_mutex:
		assert user_name not in user_db['registered_logins']
		user_db['registered_logins'][user_name] = {
			'password': password,
			'user_id': _new_registered_user_id()
		}
		_sync_db()

def is_valid_password(password):
	if not isinstance(password, str) or len(password) != 32:
		return False
	for char in password:
		if char not in "0123456789abcdef":
			return False
	return True

def change_password(user_name, new_password):
	global _db_mutex, user_db
	assert is_valid_password(new_password)
	with _db_mutex:
		assert user_name in user_db['registered_logins']
		user_db['registered_logins'][user_name]['password'] = new_password
		_sync_db()
