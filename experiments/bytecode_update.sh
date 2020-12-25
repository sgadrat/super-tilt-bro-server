#!/bin/bash

set -e

# Input files (must exists)
BYTECODE_PATH=~/workspace/nes/tilt/server_bytecode.nes
XA_LISTING_PATH=/tmp/server_bytecode.lst
KNOWN_OPCODES_PATH=compile_bytecode/known_opcodes.json

# Ouptput/intermediate files (will be overwriten)
ENTRY_POINTS_PATH=/tmp/entries.json
CPP_BYTECODE_PATH=../src/GameState.bytecodedata.inc.cpp
CPP_COMPILED_PATH=../src/GameState.bytecodecompiled.inc.cpp

# Get bytecode in a C++ array
./convert_bytecode.sh "$BYTECODE_PATH" > "$CPP_BYTECODE_PATH"

# Get pre-filled JIT structure
compile_bytecode/extract_entry_points.py "$XA_LISTING_PATH" > "$ENTRY_POINTS_PATH"
compile_bytecode/compile_bytecode.py "$BYTECODE_PATH" "$ENTRY_POINTS_PATH" "$KNOWN_OPCODES_PATH" > "$CPP_COMPILED_PATH"
