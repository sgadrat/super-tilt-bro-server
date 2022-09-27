#!/bin/bash

# Read command line
tilt_dir="$1"
stage_name="$2"

# Determine name of the interesting labels
palette_lbl="stage_${stage_name}_palette"
nametable_lbl="stage_${stage_name}_nametable"
if [ "$stage_name" == "plateau" ]; then
	palette_lbl="stage_flatland_palette"
	nametable_lbl="nametable_flatland"
elif [ "$stage_name" == "shelf" ]; then
	palette_lbl="stage_skyride_palette"
	nametable_lbl="nametable_stage_skyride"
elif [ "$stage_name" == "pit" ]; then
	palette_lbl="stage_pit_palette"
	nametable_lbl="nametable_stage_pit"
elif [ "$stage_name" == "gem" ]; then
	palette_lbl="stage_thehunt_palette"
	nametable_lbl="nametable_stage_thehunt"
fi

# Create a file with exactly the info we need
truncated_file="/tmp/bmov_to_fm2_"$stage_name"_$$.asm"

cat "$tilt_dir"/game/data/stages/"$stage_name"/screen.asm | grep -zPo "(?s)$palette_lbl:.*?\\.byt [0-9a-f, $]+" | head -c -1 >> "$truncated_file"
echo >> "$truncated_file"
cat "$tilt_dir"/game/data/stages/"$stage_name"/screen.asm | grep -zEo "$nametable_lbl:.*ZIPNT_END" | head -c -1 >> "$truncated_file"
echo >> "$truncated_file"

# Assemble the file to get a binary resource
xa -DTILE_CHAR_PCT=219 -DTFP=219 "$tilt_dir"/nine/macros.asm "$truncated_file" -o nt_"$stage_name".dat

# Clean
rm "$truncated_file"
