#include <jni.h>
#include <stdarg.h>
#include <stdint.h>

#ifndef COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H
#define COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H

#ifdef __cplusplus
extern "C" {
#endif

  //#ifndef IS_BIG_ENDIAN
  //#define IS_BIG_ENDIAN (*(uint16_t *)"\0\xFF" < 0x100)
  //  //#define IS_BIG_ENDIAN ((*(char*)&0x01) == 0)
  //#endif /* IS_BIG_ENDIAN */


  //void ull2ca(unsigned long long, char * const, const int);
  //void ull2cabe(unsigned long long, char * const, const int);
  //value_to_chars(char * chars, void * value, size_t size);
  //value_to_chars_be(char * chars, void * value, size_t size);
  //value_to_chars_le(char * chars, void * value, size_t size);

  jobject JNI_NewObjectA_CNMS(JNIEnv *, const char *, const char *, jvalue *);
  jobject JNI_NewObjectV_CNMS(JNIEnv *, const char *, const char *, va_list);

  jobject JNI_NewJavaLangInteger_I(JNIEnv *, jint value);
  jobject JNI_NewJavaLangInteger_S(JNIEnv *, jstring s);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_UTIL_JNIOBJECTS_H */