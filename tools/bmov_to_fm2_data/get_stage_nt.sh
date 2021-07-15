#!/bin/bash

tilt_dir="$1"
stage_name="$2"

xa -DTILE_CHAR_PCT=229 "$tilt_dir"/nine/macros.asm "$tilt_dir"/game/data/stages/"$stage_name"/screen.asm -o nt_"$stage_name".dat
