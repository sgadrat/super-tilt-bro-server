import socket
import logindb
from logging import debug, info, warning

#
# STNP, login extension
#

STNP_LOGIN_MSG_TYPE = 255

STNP_LOGIN_FROM_SERVER_LOGGED_IN = 0
STNP_LOGIN_FROM_SERVER_LOGIN_FAILED = 1

STNP_LOGIN_ANONYMOUS = 0
STNP_LOGIN_PASSWORD = 1

STNP_LOGIN_CHARSET = [
	None,
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	' ',
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
]

#
# Implementation
#

def logged_in_msg(client_id, login_type):
	res = bytearray(7)
	res[0] = STNP_LOGIN_MSG_TYPE
	res[1] = STNP_LOGIN_FROM_SERVER_LOGGED_IN
	res[2] = login_type
	res[3] = client_id & 0x000000ff
	res[4] = (client_id & 0x0000ff00) >> 8
	res[5] = (client_id & 0x00ff0000) >> 16
	res[6] = (client_id & 0xff000000) >> 24
	return bytes(res)

def login_failed_msg(message):
	MESSAGE_LEN = 72
	assert len(message) == MESSAGE_LEN

	res = bytearray(MESSAGE_LEN+2)
	res[0] = STNP_LOGIN_MSG_TYPE
	res[1] = STNP_LOGIN_FROM_SERVER_LOGIN_FAILED

	for i in range(MESSAGE_LEN):
		res[i+2] = STNP_LOGIN_CHARSET.index(message[i])

	return res

def parse_login_request(message):
	def parse_stnp_str(offset):
		value = ''
		for i in range(offset, offset+16):
			c = message[i]
			if c >= len(STNP_LOGIN_CHARSET):
				warning('ill formated login request: invalid character at byte {}'.format(i))
				return None
			if c == 0:
				break
			value += STNP_LOGIN_CHARSET[c]
		return value

	if len(message) != 34 or message[0] != STNP_LOGIN_MSG_TYPE or message[1] != STNP_LOGIN_PASSWORD:
		warning('ill formated login request')
		return None

	user = parse_stnp_str(2)
	password = parse_stnp_str(18)
	if user is None or password is None:
		return None

	return {'user': user, 'password': password}

def serve(listen_port):
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	sock.bind(('', listen_port))
	while True:
		message, client_addr = sock.recvfrom(1024) #TODO better max size than 1024 (which is copy/pasted for an example)
		debug('got message from {}: {}'.format(client_addr, message))
		if message[0] == STNP_LOGIN_MSG_TYPE:
			debug('login message')
			if message[1] == STNP_LOGIN_ANONYMOUS:
				# Log the user with a fresh anonymous ID
				client_id = logindb.get_anonymous_id()
				sock.sendto(logged_in_msg(client_id, STNP_LOGIN_ANONYMOUS), client_addr)
			elif message[1] == STNP_LOGIN_PASSWORD:
				# Parse message
				client_credential = parse_login_request(message)

				if client_credential is None:
					sock.sendto(
						login_failed_msg(
							"missformed user   "+
							"name or password  "+
							"                  "+
							"                  "
						),
						client_addr
					)
				elif len(client_credential['user']) < 3:
					sock.sendto(
						login_failed_msg(
							"user name shall   "+
							"have at least     "+
							"three characters  "+
							"                  "
						),
						client_addr
					)
				elif len(client_credential['password']) < 1:
					sock.sendto(
						login_failed_msg(
							"password shall    "+
							"not be empty      "+
							"                  "+
							"                  "
						),
						client_addr
					)
				else:
					# Get client info from DB (register the user if needed)
					client_info = logindb.get_user_info(client_credential['user'])
					if client_info is None:
						info('new user: "{}"'.format(client_credential['user']))
						logindb.register_user(client_credential['user'], client_credential['password'])
						client_info = logindb.get_user_info(client_credential['user'])

					# Send response
					if client_info is not None and client_info['password'] == client_credential['password']:
						# Password match, send the ID
						sock.sendto(logged_in_msg(client_info['user_id'], STNP_LOGIN_PASSWORD), client_addr)
					else:
						# Password mismatch, send access denied
						sock.sendto(
							login_failed_msg(
								"invalid user name "+
								"or password       "+
								"                  "+
								"                  "
							),
							client_addr
						)
			else:
				sock.sendto(
					login_failed_msg(
						"invalid login     "+
						"message           "+
						"                  "+
						"                  "
					),
					client_addr
				)
