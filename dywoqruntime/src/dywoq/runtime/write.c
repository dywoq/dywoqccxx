#include "../../../include/dywoq/runtime/write.h"

#if _WIN32
#   include <windows.h>
#elif __unix__
#   include <unistd.h>
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(__aarch64__)
typedef unsigned long long __size_t;
#else
typedef unsigned int __size_t;
#endif

__size_t
__strlen(const char* __str) {
   __size_t __len = 0;
   while (__str[__len] != '\0') {
      ++__len;
   }
   return __len;
}

_DYWOQCCXX_RUNTIME_EXPORT void
dywoqccxx_runtime_write(const char* __msg) {
#if _WIN32
   DWORD __written = 0;
   HANDLE __h_out = GetStdHandle(STD_OUTPUT_HANDLE);
   WriteFile(__h_out, __msg, (DWORD)__strlen(__msg), &__written, NULL);
#elif __unix__
   write(1, __msg, __strlen(__msg));
#endif
}

_DYWOQCCXX_RUNTIME_EXPORT void
dywoqccxx_runtime_writeln(const char* __msg) {
   dywoqccxx_runtime_write(__msg);
#if _WIN32
   const char newline[] = "\r\n";
   dywoqccxx_runtime_write(newline);
#elif __unix__
   const char newline[] = "\n";
   dywoqccxx_runtime_write(newline);
#endif
}
