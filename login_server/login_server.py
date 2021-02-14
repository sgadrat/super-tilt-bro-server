#!/usr/bin/env python3

import argparse
import logindb
import restservice
import threading
import signal
import udpservice

# Parameters' default
LISTEN_PORT_UDP = 0x1234
LISTEN_PORT_REST = 8124
LOGIN_DB_FILE = '/var/lib/stb/login_server_db.json'

# Parse command line
parser = argparse.ArgumentParser(description='Authentication server for Super Tilt Bro.')
parser.add_argument('--udp-port', type=int, default=LISTEN_PORT_UDP, help='port listening for UDP requests (default: {})'.format(LISTEN_PORT_UDP))
parser.add_argument('--rest-port', type=int, default=LISTEN_PORT_REST, help='port listening for REST requests (default: {})'.format(LISTEN_PORT_REST))
parser.add_argument('--db-file', type=str, default=LOGIN_DB_FILE, help='file storing persistant login info, empty for no file (default: {})'.format(LOGIN_DB_FILE))
args = parser.parse_args()

# Initialize login database
logindb.load(args.db_file if args.db_file != '' else None)

# Start serving UDP requests
thread_udp = threading.Thread(target=udpservice.serve, name='udp_service', daemon=True, args=(args.udp_port,))
thread_rest = threading.Thread(target=restservice.serve, name='rest_service', daemon=True, args=(args.rest_port,))
thread_udp.start()
thread_rest.start()

# Wait for known signal
try:
	# Dumb implementation, wait any signal, KeyboardInterrupt will break the loop on SIGINT
	while True:
		signal.pause()
except KeyboardInterrupt:
	pass
