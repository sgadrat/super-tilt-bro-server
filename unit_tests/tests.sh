#!/bin/bash

set -ex

# Build
g++ libstnp_message.cpp -g -O0 -I .. -o test_libstnp_message
g++ src_utils.cpp -g -O0 -I ../src -o test_src_utils

# Run
./test_libstnp_message
./test_src_utils
