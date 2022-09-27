#!/bin/bash

tilt_dir="$1"

# Stages "screen" file (palettes + zipped nametable)
for stage in plateau pit shelf gem; do
	./get_stage_nt.sh "$tilt_dir" "$stage"
done

# Common tilesets
xa -DCURRENT_BANK_NUMBER=0 -DCHARACTERS_END_TILES_OFFSET=2*96*16 "$tilt_dir"/game/banks/chr_data.asm -o chr_data.dat

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
./get_tileset.sh /tmp/ts_common.asm ts_common.dat

# Main background tilesets
./get_tileset.sh "$tilt_dir"/game/data/tilesets/ruins.asm ts_ruins.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/jungle.asm ts_jungle.dat
./get_tileset.sh "$tilt_dir"/game/data/tilesets/magma.asm ts_magma.dat

# Stage-specific tilesets
xa -DCURRENT_BANK_NUMBER=0 -DCHARACTERS_END_TILES_OFFSET=2*96*16 "$tilt_dir"/game/data/stages/gem/tilesets.asm -o gem_ts_sprites.dat

# Characters sprites and illustrations
for char in sinbad kiki pepper vgsage; do
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_tiles.asm ${char}_tiles.dat
	./get_tileset.sh "$tilt_dir"/game/data/characters/characters-data/$char/chr_illustrations.asm ${char}_illustrations.dat
	./get_character_palettes.sh "$tilt_dir" "$char"
done
