#include <jni.h>
#include <stdarg.h>

#ifndef COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H
#define COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H

#ifdef __cplusplus
extern "C" {
#endif

  jobject JNI_NewObjectA_CNMS(JNIEnv *, const char *, const char *, jvalue *);
  jobject JNI_NewObjectV_CNMS(JNIEnv *, const char *, const char *, va_list);

  jobject JNI_NewJavaLangInteger_I(JNIEnv *, jint value);
  jobject JNI_NewJavaLangInteger_S(JNIEnv *, jstring s);

  jobject JNI_NewJavaLangLong_L(JNIEnv *, jlong value);
  jobject JNI_NewJavaLangLong_S(JNIEnv *, jstring s);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H */