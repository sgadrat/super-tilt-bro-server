/*
 * Convert Super Tilt Bro. server replay to FCEUX movie
 *
 * Useful read: http://fceux.com/web/FM2.html
 */
#include "argparse.hpp"
#include "fcs_writer.hpp"

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <GameState.hpp>
#include <map>
#include <string>
#include <uuid/uuid.h>
#include <vector>

// g++ -std=c++17 -O3 -DNDEBUG -flto bmov_to_fm2.cpp ../src/GameState.cpp -I ../src -I .. -luuid -lz -o bmov_to_fm2
// # May need -lstdc++fs on older distribs

std::string generate_guid() {
	uuid_t uuid;
	char cstr_uuid[37];
	::uuid_generate(uuid);
	::uuid_unparse_lower(uuid, cstr_uuid);
	return std::string(cstr_uuid);
}

/* This function is licensed CC-BY-SA, derived from http://www.zedwood.com/article/cpp-convert-to-base64-function */
std::string base64_encode(std::vector<uint8_t> const& s)
{
	static const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	size_t i=0, ix=0, leng=s.size();
	std::string result;

	for(i=0,ix=leng - leng%3; i<ix; i+=3)
	{
		result += base64_chars[ (s[i] & 0xfc) >> 2 ];
		result += base64_chars[ ((s[i] & 0x03) << 4) + ((s[i+1] & 0xf0) >> 4)  ];
		result += base64_chars[ ((s[i+1] & 0x0f) << 2) + ((s[i+2] & 0xc0) >> 6)  ];
		result += base64_chars[ s[i+2] & 0x3f ];
	}
	if (ix<leng)
	{
		result += base64_chars[ (s[ix] & 0xfc) >> 2 ];
		result += base64_chars[ ((s[ix] & 0x03) << 4) + (ix+1<leng ? (s[ix+1] & 0xf0) >> 4 : 0)];
		result += (ix+1<leng ? base64_chars[ ((s[ix+1] & 0x0f) << 2) ] : '=');
		result += '=';
	}
	return result;
}

void read_raw_file(std::vector<uint8_t>::iterator out, std::string filename, size_t size = 0, size_t offset = 0) {
	std::ifstream ifs(filename);

	if (size == 0) {
		ifs.seekg(0, ifs.end);
		size = ifs.tellg();
		ifs.seekg(0, ifs.beg);
	}

	ifs.seekg(offset, ifs.beg);

	char buf[size];
	ifs.read(buf, size);

	std::copy(buf, buf + size, out);
}

void read_tileset(std::vector<uint8_t>::iterator out, std::string filename) {
	std::ifstream ifs(filename);
	uint8_t tileset_count = 0;
	ifs.read(reinterpret_cast<char*>(&tileset_count), 1);
	assert(tileset_count != 0); // should be handled, it means 256 bytes tileset. Actually it is usefull as a poor-man read failed error.

	size_t tileset_size = tileset_count * 16;
	char buff[tileset_size];
	ifs.read(buff, tileset_size);

	for (size_t i = 0; i < tileset_size; ++i) {
		*out = static_cast<uint8_t>(buff[i]);
		++out;
	}
}

void read_nametable_file(std::vector<uint8_t>& palettes, std::vector<uint8_t>& nametable, std::string filename) {
	std::ifstream ifs(filename);

	// Palettes
	ifs.read(reinterpret_cast<char*>(palettes.data()), 4*4);

	// top nametable
	bool run = true;
	size_t index = 0;
	while (run) {
		uint8_t opcode;
		ifs.read(reinterpret_cast<char*>(&opcode), 1);
		if (opcode != 0) {
			nametable[index] = opcode;
			++index;
		}else {
			uint8_t param;
			ifs.read(reinterpret_cast<char*>(&param), 1);
			if (param == 0) {
				run = false;
			}else {
				for (size_t i = 0; i < param; ++i) {
					nametable[index + i] = 0;
				}
				index += param;
			}
		}
	}

	// bottom nametable
	::memset(nametable.data() + 0x400, 0, 0x400);
}

std::vector<uint8_t> generate_savestate(
	uint8_t stage,
	uint8_t character_1, uint8_t character_1_palette,
	uint8_t character_2, uint8_t character_2_palette,
	GameState::VideoSystem video_system,
	std::string data_dir
)
{
	uint8_t const N_FLAG = 0x80;
	uint8_t const V_FLAG = 0x40;
	uint8_t const U_FLAG = 0x20;
	uint8_t const B_FLAG = 0x10;
	uint8_t const D_FLAG = 0x08;
	uint8_t const I_FLAG = 0x04;
	uint8_t const Z_FLAG = 0x02;
	uint8_t const C_FLAG = 0x01;

	//uint8_t const STAGE_PLATEAU = 0;
	//uint8_t const STAGE_PIT = 1;
	//uint8_t const STAGE_SHELF = 2;
	uint8_t const STAGE_GEM = 3;
	std::array<std::string, 4> char_names = {"sinbad", "kiki", "pepper", "vgsage"};
	std::array<std::string, 4> stage_names = {"plateau", "pit", "shelf", "gem"};
	std::array<std::string, 4> stage_tilesets = {"ruins", "jungle", "ruins", "magma"};
	std::array<std::string, 4> stage_sprite_tilesets = {"", "pit_ts_sprites", "", "gem_ts_sprites"};

	// Misc
	uint32_t const version = 22020; ///< Version of the savestate format

	// CPU
	uint16_t entry_point = 0; ///< PC value, where execution will resume (should be the start of the game loop)
	{
		std::ifstream ifs(data_dir+"/entry_point.dat");
		ifs >> entry_point;
	}
	uint8_t const cpu_flags = I_FLAG;

	// PPU
	uint8_t const ppu_ctrl = 0x90;
	uint8_t const ppu_mask = 0x1e;
	uint8_t const ppu_status = 0x00;

	// APU
	uint8_t const apu_status = 0x0f;

	// Initialize emulator and get its memory
	GameState gamestate(stage, {character_1, character_2}, video_system);
	std::array<uint8_t, 2048> ram_array = gamestate.get_ram_dump();
	std::vector<uint8_t> ram;
	ram.insert(ram.end(), ram_array.begin(), ram_array.end());

	// Adapt memory to our needs
	ram[audio_music_enabled] = 0;
	ram[audio_fx_noise_current_opcode_bank] = 0xff;
	ram[config_player_a_character_palette] = character_1_palette;
	ram[config_player_a_weapon_palette] = character_1_palette;
	ram[config_player_b_character_palette] = character_2_palette;
	ram[config_player_b_weapon_palette] = character_2_palette;
	ram[config_player_a_present] = 1;
	ram[config_player_b_present] = 1;
	ram[network_rollback_mode] = 0;
	ram[ppuctrl_val] = ppu_ctrl;
	for (size_t i = 0; i < 0x100; i += 4) {
		ram[0x200 + i] = 0xfe;
	}

	std::vector<uint8_t>::iterator players_palettes_cursor = ram.begin() + players_palettes;
	std::vector<uint8_t> character_1_palette_data(63, 0);
	std::vector<uint8_t> character_2_palette_data(63, 0);
	read_raw_file(character_1_palette_data.begin(), data_dir+"/"+ char_names[character_1] +"_palettes.dat");
	read_raw_file(character_2_palette_data.begin(), data_dir+"/"+ char_names[character_2] +"_palettes.dat");
	auto place_player_header = [&](size_t char_num) {
		std::array<std::array<uint8_t, 4>, 2> const nt_headers = {{
			{0x01, 0x3f, 0x11, 0x03},
			{0x01, 0x3f, 0x19, 0x03}
		}};
		std::copy(nt_headers[char_num].begin(), nt_headers[char_num].end(), players_palettes_cursor);
		players_palettes_cursor += 4;
	};
	auto place_character_normal_palette = [&](uint8_t char_num) {
		std::vector<uint8_t>& palette_data = (char_num == 0 ? character_1_palette_data : character_2_palette_data);
		size_t const palette_num = (char_num == 0 ? character_1_palette : character_2_palette);
		size_t const palette_data_index = 3 * palette_num;
		bool const lightened =
			// Both characters have the same colors, lighten player B
			(character_1 == character_2 && character_1_palette == character_2_palette && char_num == 1) ||
			// Both sharacters are distinct, but we are on stage gem, lighten both players
			((character_1 != character_2 || character_1_palette != character_2_palette) && stage == STAGE_GEM)
		;
		if (lightened) {
			for (size_t i = 0; i < 3; ++i) {
				uint8_t color = *(palette_data.begin() + palette_data_index + i);
				if (color == 0x0f) {
					color = 0x00; // black -> dark grey
				}else if (color < 0x30) {
					color += 0x10;
				}
				*(players_palettes_cursor + i) = color;
			}
		}else {
			std::copy(palette_data.begin() + palette_data_index, palette_data.begin() + palette_data_index + 3, players_palettes_cursor);
		}
		players_palettes_cursor += 3;
		*players_palettes_cursor = 0;
		++players_palettes_cursor;
	};
	auto place_character_alternate_palette = [&](uint8_t char_num) {
		std::vector<uint8_t>& palette_data = (char_num == 0 ? character_1_palette_data : character_2_palette_data);
		size_t const palette_num = (char_num == 0 ? character_1_palette : character_2_palette);
		size_t const palette_data_index = 21 + 3 * palette_num;
		std::copy(palette_data.begin() + palette_data_index, palette_data.begin() + palette_data_index + 3, players_palettes_cursor);
		players_palettes_cursor += 3;
		*players_palettes_cursor = 0;
		++players_palettes_cursor;
	};
	for (size_t char_num = 0; char_num < 2; ++char_num) {
		place_player_header(char_num);
		place_character_normal_palette(char_num);
		place_player_header(char_num);
		place_character_alternate_palette(char_num);
	}
	assert(players_palettes_cursor == ram.begin() + players_palettes + 4 * 8);

	// Place characters' portraits sprites
	std::array<uint8_t, 4*2*4> portraits_oam{
		0xbf, 248+0, 0x00, 0x48,
		0xbf, 248+1, 0x00, 0x50,
		0xc7, 248+2, 0x00, 0x48,
		0xc7, 248+3, 0x00, 0x50,

		0xbf, 248+4, 0x02, 0xa8,
		0xbf, 248+5, 0x02, 0xb0,
		0xc7, 248+6, 0x02, 0xa8,
		0xc7, 248+7, 0x02, 0xb0,
	};
	std::copy(portraits_oam.begin(), portraits_oam.end(), ram.begin() + oam_mirror + 42*4);

	// Construct CHR-RAM
	std::vector<uint8_t> chrr(8192, 0xff);
	read_raw_file(chrr.begin() + 0, data_dir+"/chr_data.dat", 0x1000);
	read_tileset(chrr.begin() + 0 + 241*16, data_dir+"/ts_common_ingame_sprites.dat");
	if (stage_sprite_tilesets[stage] != "") {
		read_tileset(chrr.begin() + 2*96*16, data_dir+"/"+ stage_sprite_tilesets[stage] +".dat");
	}
	read_tileset(chrr.begin() + 0x1000 + 218*16, data_dir+"/ts_common.dat");
	read_tileset(chrr.begin() + 0x1000, data_dir+"/ts_"+ stage_tilesets[stage] +".dat");

	read_raw_file(chrr.begin() + 0, data_dir+"/"+ char_names[character_1] +"_tiles.dat");
	read_raw_file(chrr.begin() + 0x1d00, data_dir+"/"+ char_names[character_1] +"_illustrations.dat", 5*16);
	read_raw_file(chrr.begin() + 0 + 248*16, data_dir+"/"+ char_names[character_1] +"_illustrations.dat", 4*16, 1*16);
	for (size_t tile_num = 0; tile_num < 4; ++tile_num) {
		for (size_t line_num = 0; line_num < 8; ++line_num) {
			// We want to swap colors 0 and 1
			// so, when a bit in the second byte of a line is 0, the equivalent bit in first line must be swapped
			auto pixels_line_lsb = chrr.begin() + (248+tile_num)*16+line_num;
			auto pixels_line_msb = pixels_line_lsb + 8;
			uint8_t const bitmask = ~(*pixels_line_msb);
			*pixels_line_lsb = (*pixels_line_lsb) ^ bitmask;
		}
	}

	read_raw_file(chrr.begin() + 96*16, data_dir+"/"+ char_names[character_2] +"_tiles.dat");
	read_raw_file(chrr.begin() + 0x1d50, data_dir+"/"+ char_names[character_2] +"_illustrations.dat", 5*16);
	read_raw_file(chrr.begin() + 0 + 252*16, data_dir+"/"+ char_names[character_2] +"_illustrations.dat", 4*16, 1*16);
	for (size_t tile_num = 0; tile_num < 4; ++tile_num) {
		for (size_t line_num = 0; line_num < 8; ++line_num) {
			// We want to swap colors 0 and 1
			// so, when a bit in the second byte of a line is 0, the equivalent bit in first line must be swapped
			auto pixels_line_lsb = chrr.begin() + (252+tile_num)*16+line_num;
			auto pixels_line_msb = pixels_line_lsb + 8;
			uint8_t const bitmask = ~(*pixels_line_msb);
			*pixels_line_lsb = (*pixels_line_lsb) ^ bitmask;
		}
	}

	// Construct palettes and nametable
	std::vector<uint8_t> ntar(2048, 0);
	std::vector<uint8_t> pram(32, 0);
	read_nametable_file(pram, ntar, data_dir+"/nt_"+ stage_names[stage] +".dat");

	for (size_t char_num = 0; char_num < 2; ++char_num) {
		std::vector<uint8_t>::iterator ram_palette = pram.begin() + 16 + 4 + char_num * 8 + 1;

		std::vector<uint8_t>& palette_data = (char_num == 0 ? character_1_palette_data : character_2_palette_data);
		size_t const palette_num = (char_num == 0 ? character_1_palette : character_2_palette);
		std::vector<uint8_t>::const_iterator data_palette = palette_data.begin() + 42 + palette_num * 3;

		std::copy(data_palette, data_palette + 3, ram_palette);
	}

	// I guess it is OAM, don't really care, it will be reconstructed on first tick
	std::vector<uint8_t> spra(256, 0xfe);

	// Construct savestate
	fcs::Fcsx save;
	save.header.total_size = 0;
	save.header.version = version;
	save.header.compr_len = 0;

	save.body.insert({
		"CPU", {
			{"PC", {uint8_t(entry_point & 0xff), uint8_t(entry_point >> 8)}},
			{"A", {0x00}},
			{"X", {0x00}},
			{"Y", {0x00}},
			{"S", {0xff}},
			{"P", {cpu_flags}},
			{"DBR", {0x00}},
			{"RAM", ram}
		}
	});

	save.body.insert({
		"CPUC", {
			{"JAMM", {0x00}},
			{"IQLB", {0x00, 0x00, 0x00, 0x00}},
			{"ICoa", {0x00, 0x00, 0x00, 0x00}},
			{"ICou", {0x00, 0x00, 0x00, 0x00}},
			{"TSBS", {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
			{"MooP", {0x00}},
		}
	});

	save.body.insert({
		"PPU", {
			{"NTAR", ntar},
			{"PRAM", pram},
			{"SPRA", spra},
			{"PPUR", {ppu_ctrl, ppu_mask, ppu_status, 0x00}},
			{"KOOK", {0x00}},
			{"DEAD", {0x00}},
			{"PSPL", {0x00}},
			{"XOFF", {0x00}},
			{"VTGL", {0x00}},
			{"RADD", {0x00, 0x00}},
			{"TADD", {0x00, 0x00}},
			{"VBUF", {0x00}},
			{"PGEN", {0x00}},
		}
	});

	save.body.insert({
		"NEWPPU", {
			{"IDLS", {0x00}},
			{"SR_0", {0x00, 0x00, 0x00, 0x00}},
			{"SR_1", {0x00, 0x00, 0x00, 0x00}},
			{"SR_2", {0x00, 0x00, 0x00, 0x00}},
			{"SR_3", {0x00, 0x00, 0x00, 0x00}},
			{"SRx0", {0x00, 0x00, 0x00, 0x00}},
			{"SRx1", {0x00, 0x00, 0x00, 0x00}},
			{"SRx2", {0x00, 0x00, 0x00, 0x00}},
			{"SRx3", {0x00, 0x00, 0x00, 0x00}},
			{"SRx4", {0x00, 0x00, 0x00, 0x00}},
			{"SRx5", {0x00, 0x00, 0x00, 0x00}},
			{"SRx6", {0x00, 0x00, 0x00, 0x00}},
			{"SRx7", {0x00, 0x00, 0x00, 0x00}},
			{"SR_4", {0x00, 0x00, 0x00, 0x00}},
			{"SR_5", {0x00, 0x00, 0x00, 0x00}},
			{"SR_6", {0x00, 0x00, 0x00, 0x00}},
			{"PFVx", {0x00, 0x00, 0x00, 0x00}},
			{"PVxx", {0x00, 0x00, 0x00, 0x00}},
			{"PHxx", {0x00, 0x00, 0x00, 0x00}},
			{"PVTx", {0x00, 0x00, 0x00, 0x00}},
			{"PHTx", {0x00, 0x00, 0x00, 0x00}},
			{"P_FV", {0x00, 0x00, 0x00, 0x00}},
			{"P_Vx", {0x00, 0x00, 0x00, 0x00}},
			{"P_Hx", {0x00, 0x00, 0x00, 0x00}},
			{"P_VT", {0x00, 0x00, 0x00, 0x00}},
			{"P_HT", {0x00, 0x00, 0x00, 0x00}},
			{"PFHx", {0x00, 0x00, 0x00, 0x00}},
			{"PSxx", {0x00, 0x00, 0x00, 0x00}},
			{"PST0", {0x00, 0x00, 0x00, 0x00}},
			{"PST1", {0x00, 0x00, 0x00, 0x00}},
			{"PST2", {0x00, 0x00, 0x00, 0x00}},
		}
	});

	save.body.insert({
		"CTLR", {
			{"JYRB", {0x00, 0x00}},
			{"JOYS", {0x00, 0x00, 0x00, 0x00}},
			{"LSTS", {0x00}},
			{"ZBG0", {0x00}},
			{"ZBG1", {0x00}},
			{"LAGF", {0x00}},
			{"LAGC", {0x00, 0x00, 0x00, 0x00}},
			{"FRAM", {0x00, 0x00, 0x00, 0x00}},
		}
	});

	save.body.insert({
		"SND", {
			//{"FHCN", {0x00, 0x00, 0x00, 0x00}},
			{"FHCN", {0xd0, 0x1f, 0x04, 0x00,}},
			//{"FCNT", {0x00}},
			{"FCNT", {0x03}},
			//{"PSG", {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
			{"PSG", {0x7f, 0x08, 0x00, 0x00, 0xb1, 0x08, 0x00, 0x00, 0x80, 0x00, 0xd7, 0xf9, 0x30, 0x00, 0x02, 0x08}},
			{"ENCH", {apu_status}},
			{"IQFM", {0x01}},
			{"NREG", {0xe8, 0x05}},
			{"TRIM", {0x01}},
			{"TRIC", {0x00}},
			{"E0SP", {0x0f}},
			{"E1SP", {0x01}},
			{"E2SP", {0x00}},
			{"E0MO", {0x03}},
			{"E1MO", {0x03}},
			{"E2MO", {0x03}},
			{"E0D1", {0x08}},
			{"E1D1", {0x02}},
			{"E2D1", {0x01}},
			{"E0DV", {0x0b}},
			{"E1DV", {0x0b}},
			{"E2DV", {0x0c}},
			{"LEN0", {0x00, 0x00, 0x00, 0x00}},
			{"LEN1", {0x00, 0x00, 0x00, 0x00}},
			{"LEN2", {0x00, 0x00, 0x00, 0x00}},
			{"LEN3", {0x00, 0x00, 0x00, 0x00}},
			{"SWEE", {0x00, 0x00}},
			{"CRF1", {0x00, 0x00, 0x00, 0x00}},
			{"CRF2", {0x00, 0x00, 0x00, 0x00}},
			{"SWCT", {0x00, 0x00}},
			{"SIRQ", {0x00}},
			{"5ACC", {0x00, 0x00, 0x00, 0x00}},
			{"5BIT", {0x00}},
			{"5ADD", {0x00, 0x00, 0x00, 0x00}},
			{"5SIZ", {0x00, 0x00, 0x00, 0x00}},
			{"5SHF", {0x00}},
			{"5HVD", {0x00}},
			{"5HVS", {0x00}},
			{"5SZL", {0x00}},
			{"5ADL", {0x00}},
			{"5FMT", {0x00}},
			{"RWDA", {0x00}},
		}
	});

	//TODO backbuffer - not sure it is easy to do, not having it may causes one first garbage frame at startup

	save.body.insert({
		"EXTRA", {
			{"CHRR", chrr},
			{"LATC", {0x05}},
			{"BUSC", {0x01}},
		}
	});

	return fcs::serialize_fcsx(save);
}

std::string usage() {
	return
		"usage: bmov_to_fm2 [options] [BMOV_PATH]\n"
		"\n"
		"\tBMOV_PATH\tPath to the bmov file to convert (default: /tmp/replay.bmov)\n"
		"\n"
		"\t--palette-a\tSkin number for player A (default: 0)\n"
		"\t--palette-b\tSkin number for player B (default: 1)\n"
	;
}

int main(int argc, char** argv) {
	// Parse command line
	std::filesystem::path savestate_data_dir;
	std::string bmov_path = "/tmp/replay.bmov";
	uint8_t character_1_palette = 0; // NOTE: char palettes from bmov take precedence over command-line (unnatural, and to be changed if there is a need)
	uint8_t character_2_palette = 1;
	{
		args::Args params = args::parse(argc, argv, {"--palette-a", "--palette-b"});
		if (params.flags.count("-h") || params.flags.count("--help")) {
			std::cout << usage();
			return 0;
		}
		if (params.positional.size() > 1) {
			std::cerr << usage();
			return 1;
		}

		savestate_data_dir = std::filesystem::path(argv[0]);
		savestate_data_dir = savestate_data_dir.remove_filename() / "bmov_to_fm2_data";

		if (params.positional.size() > 0) {
			bmov_path = params.positional[0];
		}

		if (params.values.count("--palette-a")) {
			character_1_palette = args::lex_cast<unsigned int>(params.values.at("--palette-a"));
		}
		if (params.values.count("--palette-b")) {
			character_2_palette = args::lex_cast<unsigned int>(params.values.at("--palette-b"));
		}
	}

	// Parse bmov file
	std::map<uint32_t, GameState::ControllerState> controller_a_history;
	std::map<uint32_t, GameState::ControllerState> controller_b_history;
	uint32_t num_ticks_in_game = 0;
	uint8_t stage = 255;
	uint8_t character_1 = 255;
	uint8_t character_2 = 255;
	GameState::VideoSystem video_system = GameState::VideoSystem::PAL;
	{
		std::ifstream bmov_file(bmov_path);

		auto u8 = [&]() {
			uint8_t res;
			bmov_file.read((char*)&res, 1);
			return res;
		};
		auto u32 = [&]() {
			uint32_t res = 0;
			res += (uint32_t(u8()) << 24);
			res += (uint32_t(u8()) << 16);
			res += (uint32_t(u8()) <<  8);
			res += (uint32_t(u8()) <<  0);
			return res;
		};
		auto controller = [&]() {
			std::map<uint32_t, GameState::ControllerState> controller;
			uint32_t size = u32();
			for (uint32_t i = 0; i < size; ++i) {
				uint32_t time = u32();
				GameState::ControllerState state(u8());
				controller.insert(std::pair<uint32_t, GameState::ControllerState>(time, state));
			}
			return controller;
		};

		// Header
		uint8_t bmov_version = u8();
		if (bmov_version > 1) {
			std::cerr << "unsuported bmov version " << uint16_t(bmov_version) << '\n';
			return 1;
		}

		num_ticks_in_game = u32();
		stage = u8();
		character_1 = u8();
		character_2 = u8();
		if (bmov_version == 0) {
			u32(); /* ID player A */
			u32(); /* ID player B */
		}
		if (bmov_version >= 1) {
			character_1_palette = u8();
			character_2_palette = u8();
			uint8_t raw_video_system = u8();
			if (raw_video_system > 1) {
				std::cerr << "unsuported video system " << uint16_t(raw_video_system) << '\n';
				return 1;
			}
			video_system = static_cast<GameState::VideoSystem>(raw_video_system);
		}

		// Controller A
		controller_a_history = controller();

		// Controller B
		controller_b_history = controller();
	}

	// Debug - write standalone savestate
#ifdef DEBUG_SAVESTATE
	{
		std::vector<uint8_t> save = generate_savestate(
			stage,
			character_1, character_1_palette,
			character_2, character_2_palette,
			video_system,
			savestate_data_dir.native()
		);
		std::ofstream ofs("/tmp/test.fcs");
		ofs.write(reinterpret_cast<char*>(save.data()), save.size());
	}
#endif

	// Write fm2 header
	{
#if 0
		// Documentation states it is legal, but makes fceux crash :(
		std::cout <<
			"comment stb.gameinfo stage=" << uint16_t(stage) << ' ' <<
			"char_1=" << uint16_t(character_1) << ' ' <<
			"char_2=" << uint16_t(character_2) << ' ' <<
		'\n';
#endif
		std::cout << "version 3\n";
		std::cout << "emuVersion 22020\n";
		std::cout << "palFlag 1\n";
		std::cout << "NewPPU 1\n";
		std::cout << "fourscore 0\n";
		std::cout << "port0 1\n";
		std::cout << "port1 1\n";
		std::cout << "port2 0\n";
		std::cout << "romFilename tilt_no_network_unrom_(E)\n";
		std::cout << "guid " << generate_guid() << "\n";

		std::vector<uint8_t> checksum(16, 0);
		read_raw_file(checksum.begin(), (savestate_data_dir / "checksum.dat").native());
		std::cout << "romChecksum base64:" << base64_encode(checksum) << "\n";

		std::cout << "savestate base64:"+ base64_encode(generate_savestate(
			stage,
			character_1, character_1_palette,
			character_2, character_2_palette,
			video_system,
			savestate_data_dir.native()
		)) +"\n";
	}

	// Write fm2 input log
	{
		for (uint32_t frame_num = 0; frame_num < num_ticks_in_game; ++frame_num) {
			GameState::ControllerState const controller_a = [&]() {
				auto it = controller_a_history.upper_bound(frame_num);
				--it;
				return it->second;
			}();
			GameState::ControllerState const controller_b = [&]() {
				auto it = controller_b_history.upper_bound(frame_num);
				--it;
				return it->second;
			}();
			//GameState::ControllerState const controller_b = (controller_b_history.upper_bound(frame_num) - 1)->second;

			auto controller = [&](GameState::ControllerState const& c) {
				std::ostringstream res;
				res <<
					(c.right_pressed ? 'R' : '.') <<
					(c.left_pressed ? 'L' : '.') <<
					(c.down_pressed ? 'D' : '.') <<
					(c.up_pressed ? 'U' : '.') <<
					(c.start_pressed ? 'T' : '.') <<
					(c.select_pressed ? 'S' : '.') <<
					(c.b_pressed ? 'B' : '.') <<
					(c.a_pressed ? 'A' : '.')
				;
				return res.str();
			};

			std::cout << "|0|" << controller(controller_a) << '|' << controller(controller_b) << "||\n";
		}
	}

	return 0;
}
