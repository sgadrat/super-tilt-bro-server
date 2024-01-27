#!/usr/bin/env python
import hashlib
import json
import sys

STNP_LOGIN_CHARSET = [
    None,
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    ' ',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
]

def hash_pass(login, password):
	def str_to_stnp(msg):
		bin_msg = []
		for i in range(16):
			if i < len(msg):
				assert msg[i] in STNP_LOGIN_CHARSET
				bin_msg.append(STNP_LOGIN_CHARSET.index(msg[i]))
			else:
				bin_msg.append(0)
		return bytes(bin_msg)

	bin_credentials = str_to_stnp(login) + str_to_stnp(password)
	return hashlib.sha256(bin_credentials).hexdigest()[0:32]

if len(sys.argv) == 3:
	print(hash_pass(sys.argv[1], sys.argv[2]))
else:
	with open(sys.argv[1], 'r') as db_file:
		db = json.load(db_file)

	for login in db['registered_logins']:
		user = db['registered_logins'][login]
		if len(user['password']) != 32:
			user['password'] = hash_pass(login, user['password'])

	print(json.dumps(db))
