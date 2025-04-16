#ifndef _DYWOQCCXX_RUNTIME_ERROR_H
#define _DYWOQCCXX_RUNTIME_ERROR_H

#include "config.h"

#if __cplusplus
extern "C" {
#endif

_DYWOQCCXX_RUNTIME_EXPORT void dywoqccxx_runtime_error(const char* __msg, unsigned int __code);

#if __cplusplus
}
#endif

#endif