#include <map>
#include <vector>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>

/* Single header C++ command line parser.
 *
 * Usage
 * =====
 *
 * int main(int argc, char** argv) {
 *   args::Args params = args::parse(argc, argv, {"--option-a", "--option-b"});
 *
 *   if (params.flags.count("-h") || params.flags.count("--help")) {
 *      std::cout << "usage: " << argv[0] << " --option-a <int> [--option-b <string>] [FILE_PATH]\n";
 *      return 0;
 *   }
 *   if (! params.values.count("--option-a")) {
 *      std::cerr << "missing mandatory option --option-a\n";
 *      return 1;
 *   }
 *
 *   if (params.positional.size() > 0) {
 *      std::cout << "handling file '" << params.positional[0] << "'\n";
 *   }
 *   std::cout << "option A: " << args::lex_cast<int>(params.values.at("--option-a")) << '\n';
 *   if (params.values.count("--option-b")) {
 *     std::cout << "option B: '" << params.values.at("--option-b") << "'\n";
 *   }
 * }
 *
 * $ ./myprog --option-a 123 --option-b "hello world" /path/to/file
 * handling file '/path/to/file'
 * option A: 123
 * option B: 'hello world'
 *
 * Features
 * ========
 *
 * - Header only,
 * - No dependency outside STL,
 * - Parsing of positional, key-value, and flag parameters
 * - Handling of "--" to stop parsing key-value, and flag parameters
 *
 * Notably missing
 * ===============
 *
 * - key-value params in the form "--key=value" (will be interpreted as a flag parameter)
 *
 * Licensing
 * =========
 *
 * WTFPL
 *
 */

namespace args {

struct Args {
	std::vector<std::string> positional;
	std::map<std::string, std::string> values;
	std::set<std::string> flags;
};

inline Args parse(int argc, char** argv, std::set<std::string> const& value_args) {
	if (argc < 1) {
		throw std::invalid_argument("argc shall be at least 1");
	}

	Args res;
	std::string value_name;
	bool force_positional = false;
	for (int i = 1; i < argc; ++i) {
		std::string const current_arg = argv[i];

		if (force_positional) {
			res.positional.push_back(current_arg);
		}else if (! value_name.empty()) {
			res.values[value_name] = current_arg;
			value_name = "";
		}else if (current_arg == "--") {
			force_positional = true;
		}else {
			if (value_args.count(current_arg)) {
				value_name = current_arg;
			}else if ((!current_arg.empty()) && current_arg[0] == '-') {
				res.flags.insert(current_arg);
			}else {
				res.positional.push_back(current_arg);
			}
		}
	}

	if (! value_name.empty()) {
		throw std::runtime_error("no value for parameter '"+ value_name +"'");
	}
	return res;
}

template <typename R>
R lex_cast(std::string val) {
	std::istringstream iss(val);
	R res;
	iss >> res;
	return res;
}

}
