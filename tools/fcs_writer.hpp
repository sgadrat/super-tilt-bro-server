#pragma once

#include <cassert>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include <zlib.h>

namespace fcs {

typedef std::map<std::string, std::vector<uint8_t>> Section;
typedef std::map<std::string, Section> Body;

struct FcsxHeader {
	uint32_t total_size;
	uint32_t version;
	int32_t compr_len;
};

struct Fcsx {
	FcsxHeader header;
	Body body;
};

inline uint8_t section_name_to_id(std::string section_name) {
	std::map<std::string, uint8_t> const name_to_id{
		{"CPU", 1},
		{"CPUC", 2},
		{"PPU", 3},
		{"CTLR", 4},
		{"SND", 5},
		{"MOV_STATE", 6},
		{"MOV", 7},
		{"BACK_BUFFER", 8},
		{"EXTRA", 16},
		{"NEWPPU", 31},
	};
	return name_to_id.at(section_name);
}

inline uint32_t fourcc(std::string s) {
	uint32_t result = 0;
	for (size_t i = 0; i < 4; ++i) {
		uint8_t c = 0;
		if (i < s.size()) {
			c = static_cast<uint8_t>(s[i]);
		}
		result += (static_cast<uint32_t>(c) << ((3-i) * 8));
	}
	return result;
}

inline void push(std::vector<uint8_t>& v, uint32_t i) {
	v.push_back(i & 0x000000ff);
	v.push_back((i & 0x0000ff00) >> 8);
	v.push_back((i & 0x00ff0000) >> 16);
	v.push_back((i & 0xff000000) >> 24);
}

inline void push(std::vector<uint8_t>& v, size_t pos, uint32_t i) {
	v[pos] = (i & 0x000000ff);
	v[pos+1] = ((i & 0x0000ff00) >> 8);
	v[pos+2] = ((i & 0x00ff0000) >> 16);
	v[pos+3] = ((i & 0xff000000) >> 24);
}

inline std::vector<uint8_t> serialize_fcsx(Fcsx const& save) {
	// Serialize body
	std::vector<uint8_t> body_data;
	for (Body::value_type const& section : save.body) {
		std::vector<uint8_t> section_data;
		section_data.push_back(section_name_to_id(section.first));
		push(section_data, uint32_t(0));

		for (Section::value_type const& subsection : section.second) {
			push(section_data, __bswap_32(fourcc(subsection.first)));
			push(section_data, static_cast<uint32_t>(subsection.second.size()));
			section_data.insert(section_data.end(), subsection.second.begin(), subsection.second.end());
		}

		push(section_data, 1, static_cast<uint32_t>(section_data.size() - 5));
		body_data.insert(body_data.end(), section_data.begin(), section_data.end());
	}

	// Compress body
	std::vector<uint8_t> body_data_compressed;
	body_data_compressed.resize(body_data.size() + 0.2 * body_data.size() + 12); // I read somewhere that worst cast is "size + 0.1 * size + 12"
	uLongf compressed_size = body_data_compressed.size();
	int zlib_result = ::compress2(
		body_data_compressed.data(), &compressed_size,
		body_data.data(), body_data.size(),
		Z_DEFAULT_COMPRESSION
	);
	assert(compressed_size <= body_data_compressed.size());
	body_data_compressed.resize(compressed_size);

	// Write header
	std::vector<uint8_t> fcsx_data;
	push(fcsx_data, __bswap_32(fourcc("FCSX")));
	push(fcsx_data, static_cast<uint32_t>(body_data.size()));
	push(fcsx_data, save.header.version);
	push(fcsx_data, static_cast<uint32_t>(body_data_compressed.size()));

	// Write compressed body
	fcsx_data.insert(fcsx_data.end(), body_data_compressed.begin(), body_data_compressed.end());

	//std::vector<uint8_t> a = {1, 2, 3, 4, 5};
	//push(a, 10);
	//return a;
	return fcsx_data;
}

}
