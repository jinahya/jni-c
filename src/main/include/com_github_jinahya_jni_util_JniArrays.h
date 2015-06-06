#include <jni.h>
#include <stdint.h>

#ifndef COM_GITHUB_JINAHUA_JNI_UTIL_JNIARRAYS_H
#define COM_GITHUB_JINAHUA_JNI_UTIL_JNIARRAYS_H

#ifdef __cplusplus
extern "C" {
#endif

  jbyteArray JNI_NewByteArray_VS(JNIEnv *, const void *, size_t);
  jbyteArray JNI_NewByteArray_VS_BE(JNIEnv *, const void *, size_t);
  jbyteArray JNI_NewByteArray_VS_LE(JNIEnv *, const void *, size_t);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_UTIL_JNIARRAYS_H */