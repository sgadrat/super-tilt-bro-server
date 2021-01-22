#
# Working structures
#

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
	#TODO
	pass

#
# Public API
#

def load(db_file):
	#TODO
	pass

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
