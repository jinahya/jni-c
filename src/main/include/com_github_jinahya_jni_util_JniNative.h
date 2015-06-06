#include <jni.h>
#include <stdint.h>

#ifndef COM_GITHUB_JINAHYA_JNI_UTIL_JNINATIVE_H
#define COM_GITHUB_JINAHYA_JNI_UTIL_JNINATIVE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef IS_BIG_ENDIAN
#define IS_BIG_ENDIAN (*(uint16_t *)"\0\xFF" < 0x100)
#endif//IS_BIG_ENDIAN

#ifdef __cplusplus
}
#endif

#endif//COM_GITHUB_JINAHYA_JNI_UTIL_JNINATIVE_H