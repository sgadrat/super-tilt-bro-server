#pragma once

#ifndef LOG_FLOOD
#	define srv_dbg(...)
#else
#	define srv_dbg(...) syslog(__VA_ARGS__)
#	include<chrono>
	inline uint64_t wall_clock_milli() {
		return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	};
#endif
