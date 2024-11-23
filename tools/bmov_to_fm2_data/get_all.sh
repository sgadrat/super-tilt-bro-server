#!/bin/bash

set -e
set -x

tilt_dir="$1"
if [ ! -d "$tilt_dir" ]; then
	echo "USAGE: $0 TILT_DIR"
	exit 1
fi

xa_bin="${XA_BIN:-xa}"

# Stages "screen" file (palettes + zipped nametable)
for stage in plateau pit shelf gem theplank deeprock; do
	./get_stage_nt.sh "$tilt_dir" "$stage"
done

# Common tilesets
$xa_bin -DCURRENT_BANK_NUMBER=0 -DCHARACTERS_END_TILES_OFFSET=2*96*16 "$tilt_dir"/game/banks/chr_data.asm -o chr_data.dat

set +x
echo "; The tiles constructed by extra_init_game_state, in a convenient tileset file" > /tmp/ts_common.asm
echo ".byt 12" >> /tmp/ts_common.asm
echo "; empty_stock" >>/tmp/ts_common.asm
echo ".byt %11111111, %11111111, %11111111, %11111111, %11111111, %11111111, %11111111, %11111111" >> /tmp/ts_common.asm
echo ".byt %00000000, %00000000, %00000000, %00000000, %00000000, %00000000, %00000000, %00000000" >> /tmp/ts_common.asm
echo "; '%' fg=0, bg=3" >> /tmp/ts_common.asm
echo ".byt %11111111, %10111001, %01010011, %01000111, %10001011, %11000101, %10010101, %00111011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10111001, %01010011, %01000111, %10001011, %11000101, %10010101, %00111011" >> /tmp/ts_common.asm
echo ";numerics fg=0, bg=3" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %10011001, %10011101, %10011101, %10011001, %10011001, %11000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %10011001, %10011101, %10011101, %10011001, %10011001, %11000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11111011, %11110011, %11100011, %10010011, %11110011, %11110011, %11110111" >> /tmp/ts_common.asm
echo ".byt %11111111, %11111011, %11110011, %11100011, %10010011, %11110011, %11110011, %11110111" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %00101001, %10010011, %11100111, %11001001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %00101001, %10010011, %11100111, %11001001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %10011001, %11110011, %11111001, %10011101, %11000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %10011001, %11110011, %11111001, %10011101, %11000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11110011, %11100111, %11001111, %10010011, %11000001, %11110011, %11111011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11110011, %11100111, %11001111, %10010011, %11000001, %11110011, %11111011" >> /tmp/ts_common.asm
echo ".byt %11111111, %00000001, %00111001, %00111111, %00000011, %11111001, %00111001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %00000001, %00111001, %00111111, %00000011, %11111001, %00111001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %00011001, %00111111, %00000011, %00111001, %00111001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %00011001, %00111111, %00000011, %00111001, %00111001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %11110011, %10000011, %11100111, %11100111, %11001111" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %11110011, %10000011, %11100111, %11100111, %11001111" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %10011001, %10010011, %11000011, %11001001, %10011001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %11000011, %10011001, %10010011, %11000011, %11001001, %10011001, %10000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %10011001, %11000001, %11111001, %10011001, %11000011" >> /tmp/ts_common.asm
echo ".byt %11111111, %10000011, %00111001, %10011001, %11000001, %11111001, %10011001, %11000011" >> /tmp/ts_common.asm
set -x
./get_tileset.sh /tmp/ts_common.asm ts_common.dat

# Common sprites
./get_tileset.sh "$tilt_dir"/game/data/tilesets/common_ingame_sprites.asm ts_common_ingame_sprites.dat

# Main background tilesets
./get_tileset.sh "$tilt_dir"/game/data/tilesets/ruins.asm ts_ruins.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/jungle.asm ts_jungle.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/magma.asm ts_magma.dat

# Stage-specific tilesets
$xa_bin -DCURRENT_BANK_NUMBER=0 -DSTAGE_FIRST_SPRITE_TILE_OFFSET=2*96*16 -DSTAGE_NUM_SPRITE_TILES=241-2*96 "$tilt_dir"/game/data/stages/gem/tilesets.asm -o gem_ts_sprites.dat
$xa_bin -DCURRENT_BANK_NUMBER=0 -DSTAGE_FIRST_SPRITE_TILE_OFFSET=2*96*16 -DSTAGE_NUM_SPRITE_TILES=241-2*96 "$tilt_dir"/game/data/stages/pit/tilesets.asm -o pit_ts_sprites.dat

# Characters sprites and illustrations
for char in sinbad kiki pepper vgsage sunny; do
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_tiles.asm ${char}_tiles.dat
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_illustrations.asm ${char}_illustrations.dat
	./get_character_palettes.sh "$tilt_dir" "$char"
done

# FCEUX checksum of the ROM
tail -c +17 "$tilt_dir"/tilt_no_network_unrom_\(E\).nes | md5sum | cut -d' ' -f1 | xxd -r -p > checksum.dat

# Entry point in the ROM
echo $((16#$(grep '  forever ' /tmp/tilt_no_network_unrom_\(E\).lst | grep -Eo 'A:[0-9a-f]+' | grep -Eo '[0-9a-f]+'))) > entry_point.dat
