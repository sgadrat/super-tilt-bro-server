#pragma once

#ifdef LOG_FLOOD
#	define srv_dbg(...) syslog(__VA_ARGS__)
#else
#	define srv_dbg(...)
#endif
