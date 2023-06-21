#!/bin/bash

set -e

base=`dirname $0`
src_dir="$base/../../src"
tilt_dir=~/workspace/nes/tilt

# Input files (must exists)
BYTECODE_PATH="$tilt_dir/server_bytecode.nes"
MEM_LABELS_PATH="$tilt_dir/game/mem_labels.asm"
RAINBOW_LABELS_PATH="$tilt_dir/game/logic/rainbow_lib.asm"
XA_LISTING_PATH=/tmp/server_bytecode.lst
KNOWN_OPCODES_PATH="$base/compile_bytecode/known_opcodes.json"
FIXED_BANK_INDEX="1"

# Ouptput/intermediate files (will be overwriten)
ENTRY_POINTS_PATH=/tmp/entries.json
CPP_BYTECODE_PATH="$src_dir/GameState.bytecodedata.inc.cpp"
CPP_COMPILED_PATH="$src_dir/GameState.bytecodecompiled.inc.cpp"
CPP_MEM_LABELS_PATH="$src_dir/GameState.bytecodeinfo.hpp"

# Get bytecode in a C++ array
"$base/convert_bytecode.sh" "$BYTECODE_PATH" > "$CPP_BYTECODE_PATH"

# Get memory locations info
"$base/extract_mem_labels.py" "$MEM_LABELS_PATH" "$RAINBOW_LABELS_PATH" > "$CPP_MEM_LABELS_PATH"

# Get pre-filled JIT structure
"$base/compile_bytecode/extract_entry_points.py" "$XA_LISTING_PATH" > "$ENTRY_POINTS_PATH"
"$base/compile_bytecode/compile_bytecode.py" "$BYTECODE_PATH" "$ENTRY_POINTS_PATH" "$KNOWN_OPCODES_PATH" "$FIXED_BANK_INDEX" > "$CPP_COMPILED_PATH"
