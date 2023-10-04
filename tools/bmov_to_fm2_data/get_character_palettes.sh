#!/bin/bash

tilt_dir="$1"
char_name="$2"

xa_bin="${XA_BIN:-xa}"

$xa_bin "$tilt_dir"/game/data/characters/characters-data/"$char_name"/character_colors.asm -o "$char_name"_palettes.dat
