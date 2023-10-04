#!/bin/bash

set -e

tileset_asm="$1"
xa_bin="${XA_BIN:-xa}"

$xa_bin \
	-DCURRENT_BANK_NUMBER=0 \
	-DINGAME_COMMON_FIRST_SPRITE_TILE=241 \
	-DINGAME_CHARACTER_A_PORTRAIT_FIRST_SPRITE_TILE=248 \
	"$1" -o "$2"
