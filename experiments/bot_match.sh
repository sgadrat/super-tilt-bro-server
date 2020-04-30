#!/bin/bash

./dumb_bot &
bot1=$!
./dumb_bot &
bot2=$!

wait $bot1
wait $bot2
