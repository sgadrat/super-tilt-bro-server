#!/bin/bash

dbg_log_flags=""
optim_flags="-O3 -DNDEBUG -flto"
bin_suffix=""
beta_flags=""
extra_link_flags=""
if [ "x$1" == "xdbg" ]; then
	dbg_log_flags="-DLOG_FLOOD"
	optim_flags="-O0 -g"
fi
if [ ! -z "$BETA_SERVER" ]; then
	bin_suffix="_beta"
	beta_flags="-DBETA_SERVER"
fi

# Hack checking distrib name to know if it can link with boost_system
#  Better check if the link with boost_system is still necessary in other distribs
if grep archlinux /proc/version > /dev/null 2>&1 ; then
	extra_link_flags=""
else
	extra_link_flags="-lboost_system"
fi

g++ \
	$optim_flags -o stb_server$bin_suffix $beta_flags $dbg_log_flags -Wall -Wextra \
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
	$extra_link_flags
