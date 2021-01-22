import socket
import logindb

#
# Parameters
# TODO should be passed via command-line/config-file
#

LISTEN_PORT_UDP = 0x1234

#
# STNP, login extension
#

STNP_LOGIN_MSG_TYPE = 255

STNP_LOGIN_FROM_SERVER_LOGGED_IN = 0

STNP_LOGIN_ANONYMOUS = 0
STNP_LOGIN_PASSWORD = 1

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

def parse_login_request(message):
	#TODO
	return {'user': 'max', 'password': 'pain'}

def serve(listen_port):
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	sock.bind(('', listen_port))
	while True:
		message, client_addr = sock.recvfrom(1024) #TODO better max size than 1024 (which is copy/pasted for an example)
		print('got message from {}: {}'.format(client_addr, message))
		if message[0] == STNP_LOGIN_MSG_TYPE:
			print('login message')
			if message[1] == STNP_LOGIN_ANONYMOUS:
				# Log the user with a fresh anonymous ID
				client_id = logindb.get_anonymous_id()
				sock.sendto(logged_in_msg(client_id, STNP_LOGIN_ANONYMOUS), client_addr)
			elif message[1] == STNP_LOGIN_PASSWORD:
				# Parse message
				client_credential = parse_login_request(message)

				# Get client info from DB (register the user if needed)
				client_info = logindb.get_user_info(client_credential['user'])
				if client_info is None:
					print('new user: "{}"'.format(client_credential['user']))
					logindb.register_user(client_credential['user'], client_credential['password'])
					client_info = logindb.get_user_info(client_credential['user'])

				# Send response
				if client_info is not None and client_info['password'] == client_credential['password']:
					# Password match, send the ID
					sock.sendto(logged_in_msg(client_info['client_id'], STNP_LOGIN_PASSWORD), client_addr)
				else:
					# Password mismatch, send access denied
					#TODO
					pass
