#include <jni.h>

#ifndef COM_GITHUB_JINAHUA_JNI_UTIL_JAVA_H
#define COM_GITHUB_JINAHUA_JNI_UTIL_JAVA_H

#ifdef __cplusplus
extern "C" {
#endif

  jobject java_nio_ByteOrder_BIG_ENDIAN(JNIEnv *);
  jobject java_nio_ByteOrder_LITTLE_ENDIAN(JNIEnv *);

  jobject java_nio_ByteOrder_nativeOrder(JNIEnv *);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_UTIL_JAVA_H */