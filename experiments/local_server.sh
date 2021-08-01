#!/bin/bash

mkdir -p /tmp/stb_games
STB_GAME_SUMMARIES=/tmp/stb_games ../src/server/stb_server &
server_pid=$!
../login_server/login_server.py --db-file /tmp/stb_login.json --log-file /tmp/stb_login.log &
login_pid=$!
../ranking_server/ranking_server.py --db-file /tmp/stb_ranking.json --log-file /tmp/stb_ranking.log &
ranking_pid=$!
mkdir -p /tmp/stb_replay
../replay_server/replay_server.py --db-file /tmp/stb_replay.json --replay-dir /tmp/stb_replay --log-file /tmp/stb_replay.log --bmov-to-fm2 ../tools/bmov_to_fm2 &
replay_pid=$!

echo "PIDs"
echo "  server  $server_pid"
echo "  login   $login_pid"
echo "  ranking $ranking_pid"
echo "  replay  $replay_pid"

sleep 5
tail -n0 -F /tmp/stb_games/games.log | ./game_ranking_pusher.py --bmov-dir=/tmp/stb_games &
pusher_pid=$!

watch "echo 'ranking:' ; curl -s http://127.0.0.1:8123/api/rankings ; echo ; echo 'replays:' ; curl -s http://127.0.0.1:8125/api/replay/games/"

kill $server_pid $login_pid $ranking_pid $replay_pid $pusher_pid
