#ifndef _DYWOQCCXX_RUNTIME_WRITE_H
#define _DYWOQCCXX_RUNTIME_WRITE_H

#include "config.h"

#if __cplusplus
extern "C" {
#endif

_DYWOQCCXX_RUNTIME_EXPORT void
dywoqccxx_runtime_write(const char* __msg);

_DYWOQCCXX_RUNTIME_EXPORT void
dywoqccxx_runtime_writeln(const char* __msg);

#if __cplusplus
}
#endif

#endif