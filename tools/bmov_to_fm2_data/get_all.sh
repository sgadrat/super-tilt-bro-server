#!/bin/bash

tilt_dir="$1"

# Stages "screen" file (palettes + zipped nametable)
for stage in plateau pit shelf gem; do
	./get_stage_nt.sh "$tilt_dir" "$stage"
done

# Common tilesets
xa -DCURRENT_BANK_NUMBER=0 -DCHARACTERS_END_TILES_OFFSET=2*96*16 "$tilt_dir"/game/banks/chr_data.asm -o chr_data.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/common.asm ts_common.dat

# Main background tilesets
./get_tileset.sh "$tilt_dir"/game/data/tilesets/ruins.asm ts_ruins.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/jungle.asm ts_jungle.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/magma.asm ts_magma.dat

# Stage-specific tilesets
xa -DCURRENT_BANK_NUMBER=0 -DCHARACTERS_END_TILES_OFFSET=2*96*16 "$tilt_dir"/game/data/stages/gem/tilesets.asm -o gem_ts_sprites.dat

# Characters sprites and illustrations
for char in sinbad kiki pepper; do
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_tiles.asm ${char}_tiles.dat
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_illustrations.asm ${char}_illustrations.dat
	./get_character_palettes.sh "$tilt_dir" "$char"
done
