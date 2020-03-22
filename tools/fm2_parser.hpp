#pragma once

// Parsing of fm2 format
//  reference: www.fceux.com/web/help/fm2.html

#include <fstream>
#include <map>
#include <stdint.h>
#include <string>
#include <vector>

namespace fm2 {

struct GamepadState {
	bool right = 0, left = 0, down = 0, up = 0, start = 0, select = 0, b = 0, a = 0;
};

struct MovieRecord {
	GamepadState port0;
	GamepadState port1;
	uint8_t commands = 0;
};

struct Movie {
	std::map<std::string, std::string> header;
	std::vector<MovieRecord> input_log;
};

inline Movie parse_string(std::string const& raw) {
	Movie movie;
	movie.input_log.reserve(raw.size() / 23); // An input log entry is 22 bytes long plus a final \n, this is an overestimate not taking in consideration header section nor possible \r

	size_t pos = 0;
	while (pos < raw.size()) {
		// Get current line
		size_t pos_line_end = raw.find_first_of("\r\n", pos);
		if (pos_line_end == std::string::npos) {
			pos_line_end = raw.size();
		}
		std::string const line(raw, pos, pos_line_end - pos);

		// Parse line
		if (line.size() > 0) {
			if (line[0] == '|') {
				// Parse input log entry
				if (line.size() != 22 || line[1] != '0') {
					throw std::runtime_error("unhandled input log format (only text format, with two controllers and no special command is supported)\n");
				}else {
					movie.input_log.push_back(MovieRecord{
						.port0 = {
							.right = (line[3] != '.' && line[3] != ' '),
							.left = (line[4] != '.' && line[4] != ' '),
							.down = (line[5] != '.' && line[5] != ' '),
							.up = (line[6] != '.' && line[6] != ' '),
							.start = (line[7] != '.' && line[7] != ' '),
							.select = (line[8] != '.' && line[8] != ' '),
							.b = (line[9] != '.' && line[9] != ' '),
							.a = (line[10] != '.' && line[10] != ' '),
						},
						.port1 = {
							.right = (line[12] != '.' && line[12] != ' '),
							.left = (line[13] != '.' && line[13] != ' '),
							.down = (line[14] != '.' && line[14] != ' '),
							.up = (line[15] != '.' && line[15] != ' '),
							.start = (line[16] != '.' && line[16] != ' '),
							.select = (line[17] != '.' && line[17] != ' '),
							.b = (line[18] != '.' && line[18] != ' '),
							.a = (line[19] != '.' && line[19] != ' '),
						},
						.commands = 0
					});
				}
			}else {
				// Parse header entry
				//TODO
			}
		}

		// Point to the begining of the next line
		pos = pos_line_end;
		if (pos < raw.size() && raw[pos] == '\r') {
			++pos;
		}
		if (pos < raw.size() && raw[pos] == '\n') {
			++pos;
		}
	}

	return movie;
}

inline Movie parse_file(std::string const& filename) {
	// Read movie file
	std::ifstream ifs(filename);
	ifs.seekg(0, ifs.end);
	size_t file_size = ifs.tellg();
	ifs.seekg(0, ifs.beg);
	std::string raw_movie(file_size, '_');
	ifs.read(raw_movie.data(), file_size); // Note require C++17, data() returning non-const pointer
	ifs.close();

	// Parse the movie
	return parse_string(raw_movie);
}

}
