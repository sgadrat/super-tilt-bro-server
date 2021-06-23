#!/bin/bash

game=$1
user=$2
server=$3

scp $user@$server:/usr/share/stb/games/$game/replay.bmov /tmp
../tools/bmov_to_fm2 > /tmp/movie.fm2
echo 'setup the game in fceux: four stocks, characters + stage as played'
echo 'replay with script "fceux_stb_replay_dumping_state.lua"'
