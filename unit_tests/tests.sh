#!/bin/bash

set -ex

# Build
g++ -Wall -Wextra libstnp_message.cpp -g -O0 -I .. -o test_libstnp_message
g++ -Wall -Wextra src_utils.cpp -g -O0 -I ../src -o test_src_utils
g++ -Wall -Wextra initialization_handler.cpp -g -O0 -DLOG_FLOOD -I ../src -I .. -o test_initialization_handler ../src/network.cpp ../src/GameState.cpp ../src/server/DatagramDispatcher.cpp ../src/server/ClientsDatagramRouting.cpp ../src/server/InitializationHandler.cpp ../src/server/GameInstance.cpp ../src/server/StatisticsSink.cpp -lpthread -luuid -lboost_system

# Run
coredump_flags="--catch_system_error=no" # generate core dumps
coredump_flags=""                        # generate readable reports (but no core dump)

./test_libstnp_message $coredump_flags
./test_src_utils $coredump_flags
./test_initialization_handler $coredump_flags
