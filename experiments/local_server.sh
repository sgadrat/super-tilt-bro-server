#!/bin/bash

STB_GAME_SUMMARIES=/tmp/stb_games.log ../src/server/stb_server &
server_pid=$!
../login_server/login_server.py --db-file /tmp/stb_login.json &
login_pid=$!
../ranking_server/ranking_server.py --db-file /tmp/stb_ranking.json &
ranking_pid=$!

watch curl -s http://127.0.0.1:8123/api/rankings

kill $server_pid $login_pid $ranking_pid
