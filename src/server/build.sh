#!/bin/bash

dbg_log_flags=""
if [ "x$1" == "xdbg" ]; then
	dbg_log_flags="-DLOG_FLOOD"
fi

#-O3 -DNDEBUG -flto -o stb_server $dbg_log_flags
g++ \
	-O0 -g -DLOG_FLOOD -o stb_server $dbg_log_flags \
	-I .. -I ../.. \
	stb_server.cpp \
	../../mos6502/mos6502.cpp \
	../network.cpp \
	../GameState.cpp \
	DatagramDispatcher.cpp \
	ClientsDatagramRouting.cpp \
	InitializationHandler.cpp \
	GameInstance.cpp \
	-lpthread \
	-lboost_system
