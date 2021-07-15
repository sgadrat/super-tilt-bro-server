#!/bin/bash

game=$1
user=$2
server=$3

scp $user@$server:/usr/share/stb/games/$game/replay.bmov /tmp
../tools/bmov_to_fm2 > /tmp/movie.fm2
echo 'replay generated at "/tmp/movie.fm2"'
