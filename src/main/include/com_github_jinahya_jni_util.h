#include <jni.h>

#ifndef COM_GITHUB_JINAHUA_JNI_UTIL_H
#define COM_GITHUB_JINAHUA_JNI_UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

  jobject JNI_GetStaticObjectField_CN_FN_FS(JNIEnv *, const char *, const char *, const char *);

  jboolean JNI_GetStaticBooleanField_CN_FN_FS(JNIEnv *, const char *, const char *, const char *);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_UTIL_H */