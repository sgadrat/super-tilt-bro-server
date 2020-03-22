#include "fm2_parser.hpp"

#include <iostream>

// g++ -std=c++17 fm2_dumper.cpp -o fm2_dumper

int main() {
	// Parse the movie
	fm2::Movie movie = fm2::parse_file("/tmp/movie.fm2");

	// Dump movie header
	//TODO

	// Dump movie input log
	std::cout << "\t\tRLDUTSBA\tRLDUTSBA\n";
	auto b = [](bool v) {return v ? '1' : '_';};
	for (size_t frame_cnt = 0; frame_cnt < movie.input_log.size(); ++frame_cnt) {
		std::cout << "frame #" << frame_cnt << "\t" <<
			b(movie.input_log[frame_cnt].port0.right) <<
			b(movie.input_log[frame_cnt].port0.left) <<
			b(movie.input_log[frame_cnt].port0.down) <<
			b(movie.input_log[frame_cnt].port0.up) <<
			b(movie.input_log[frame_cnt].port0.start) <<
			b(movie.input_log[frame_cnt].port0.select) <<
			b(movie.input_log[frame_cnt].port0.b) <<
			b(movie.input_log[frame_cnt].port0.a) <<
			"\t" <<
			b(movie.input_log[frame_cnt].port1.right) <<
			b(movie.input_log[frame_cnt].port1.left) <<
			b(movie.input_log[frame_cnt].port1.down) <<
			b(movie.input_log[frame_cnt].port1.up) <<
			b(movie.input_log[frame_cnt].port1.start) <<
			b(movie.input_log[frame_cnt].port1.select) <<
			b(movie.input_log[frame_cnt].port1.b) <<
			b(movie.input_log[frame_cnt].port1.a) <<
		"\n";
	}

	return 0;
}
