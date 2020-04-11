#!/bin/bash

g++ \
	-O3 -o stb_server \
	-I .. -I ../.. \
	stb_server.cpp \
	../network.cpp \
	../GameState.cpp \
	DatagramDispatcher.cpp \
	ClientsDatagramRouting.cpp \
	InitializationHandler.cpp \
	GameInstance.cpp \
	-lpthread \
	-lboost_system
