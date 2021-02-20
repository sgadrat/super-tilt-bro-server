#!/bin/bash

dbg_log_flags=""
optim_flags="-O3 -DNDEBUG -flto"
bin_suffix=""
beta_flags=""
if [ "x$1" == "xdbg" ]; then
	dbg_log_flags="-DLOG_FLOOD"
	optim_flags="-O0 -g"
fi
if [ ! -z "$BETA_SERVER" ]; then
	bin_suffix="_beta"
	beta_flags="-DBETA_SERVER"
fi

g++ \
	$optim_flags -o stb_server$bin_suffix $beta_flags $dbg_log_flags \
	-I .. -I ../.. \
	stb_server.cpp \
	../network.cpp \
	../GameState.cpp \
	DatagramDispatcher.cpp \
	ClientsDatagramRouting.cpp \
	InitializationHandler.cpp \
	GameInstance.cpp \
	StatisticsSink.cpp \
	-lpthread \
	-luuid \
	-lboost_system
