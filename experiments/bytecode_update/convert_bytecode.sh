#!/bin/bash

#
# Generate src/GameState.bytecodedata.inc.cpp from a bytecode binary file (typicaly server_bytecode.nes)
#

echo 'std::array<uint8_t, 0x100000> /*const*/ GameState::emulator_rom = {'
xxd "$1" | grep -Eo '([0-9a-f]{4} ){8}' | sed 's/\([0-9a-f][0-9a-f]\)\([0-9a-f][0-9a-f]\) /0x\1, 0x\2, /g' | sed 's/ $//'
echo '};'
