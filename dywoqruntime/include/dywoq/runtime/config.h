#ifndef _DYWOQCCXX_RUNTIME_CONFIG_H
#define _DYWOQCCXX_RUNTIME_CONFIG_H

#if __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#   define _DYWOQCCXX_RUNTIME_EXPORT __declspec(dllexport)
#elif defined(__clang__) || defined(__GNUC__)
#   define _DYWOQCCXX_RUNTIME_EXPORT __attribute__((visibility("default")))
#endif


#if __cplusplus
}
#endif

#endif