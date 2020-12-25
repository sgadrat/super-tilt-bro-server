#!/bin/bash

set -e

base=`dirname $0`

# Input files (must exists)
BYTECODE_PATH=~/workspace/nes/tilt/server_bytecode.nes
XA_LISTING_PATH=/tmp/server_bytecode.lst
KNOWN_OPCODES_PATH="$base/compile_bytecode/known_opcodes.json"

# Ouptput/intermediate files (will be overwriten)
ENTRY_POINTS_PATH=/tmp/entries.json
CPP_BYTECODE_PATH="$base/../src/GameState.bytecodedata.inc.cpp"
CPP_COMPILED_PATH="$base/../src/GameState.bytecodecompiled.inc.cpp"

# Get bytecode in a C++ array
"$base/convert_bytecode.sh" "$BYTECODE_PATH" > "$CPP_BYTECODE_PATH"

# Get pre-filled JIT structure
"$base/compile_bytecode/extract_entry_points.py" "$XA_LISTING_PATH" > "$ENTRY_POINTS_PATH"
"$base/compile_bytecode/compile_bytecode.py" "$BYTECODE_PATH" "$ENTRY_POINTS_PATH" "$KNOWN_OPCODES_PATH" > "$CPP_COMPILED_PATH"
