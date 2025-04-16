#include "../../../include/dywoq/runtime/exit.h"

#if _WIN32
#   include <windows.h>
#elif __unix__
#   include <unistd.h>
#endif

_DYWOQCCXX_RUNTIME_EXPORT void
dywoqccxx_runtime_exit(unsigned int __code) {
#if _WIN32
   ExitProcess(__code);
#elif __unix__
   _exit(__code);
#else
   while (true) {
   }
#endif
}