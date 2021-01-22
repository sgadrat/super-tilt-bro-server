#!/usr/bin/env python3

import logindb
import udpservice

#
# Parameters
# TODO should be passed via command-line/config-file
#

LISTEN_PORT_UDP = 0x1234
LOGIN_DB_FILE = '/var/lib/stb/login_server_db.json'

#
# Implementation
#

logindb.load(LOGIN_DB_FILE)
udpservice.serve(LISTEN_PORT_UDP)
