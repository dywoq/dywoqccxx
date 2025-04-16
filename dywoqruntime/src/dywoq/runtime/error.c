#include "../../../include/dywoq/runtime/error.h"
#include "../../../include/dywoq/runtime/exit.h"
#include "../../../include/dywoq/runtime/write.h"

_DYWOQCCXX_RUNTIME_EXPORT void dywoqccxx_runtime_error(const char* __msg, unsigned int __code) {
   dywoqccxx_runtime_writeln(__msg);
   dywoqccxx_runtime_exit(__code);
}
