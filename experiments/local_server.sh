#!/bin/bash

mkdir -p /tmp/stb_games
STB_GAME_SUMMARIES=/tmp/stb_games ../src/server/stb_server &
server_pid=$!
../login_server/login_server.py --db-file /tmp/stb_login.json --log-file /tmp/stb_login.log &
login_pid=$!
../ranking_server/ranking_server.py --db-file /tmp/stb_ranking.json --log-file /tmp/stb_ranking.log &
ranking_pid=$!
sleep 5
tail -n0 -F /tmp/stb_games.log | ./game_ranking_pusher.py &
pusher_pid=$!

watch curl -s http://127.0.0.1:8123/api/rankings

kill $server_pid $login_pid $ranking_pid $pusher_pid
