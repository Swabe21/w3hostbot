#include "Config.h"
#include "PreConfig.h"
#include "RWLock.h"

#if defined(_WIN32)
#include "RWLock_WIN32.cpp"
#else
#include "RWLock_POSIX.cpp"
#endif


namespace Common {


RWLock::RWLock()
{
}

	
RWLock::~RWLock()
{
}


} // namespace Common
