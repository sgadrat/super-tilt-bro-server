#pragma once

#ifdef LOOG_FLOOD
#	define srv_dbg(...) syslog(...)
#else
#	define srv_dbg(...)
#endif
