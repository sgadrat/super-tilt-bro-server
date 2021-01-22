#!/usr/bin/env python3

import argparse
import logindb
import udpservice

# Parameters' default
LISTEN_PORT_UDP = 0x1234
LOGIN_DB_FILE = '/var/lib/stb/login_server_db.json'

# Parse command line
parser = argparse.ArgumentParser(description='Authentication server for Super Tilt Bro.')
parser.add_argument('--udp-port', type=int, default=LISTEN_PORT_UDP, help='port listening for UDP requests (default: {})'.format(LISTEN_PORT_UDP))
parser.add_argument('--db-file', type=str, default=LOGIN_DB_FILE, help='file storing persistant login info, empty for no file (default: {})'.format(LOGIN_DB_FILE))
args = parser.parse_args()

# Initialize login database
logindb.load(args.db_file if args.db_file != '' else None)

# Start serving UDP requests
udpservice.serve(args.udp_port)
