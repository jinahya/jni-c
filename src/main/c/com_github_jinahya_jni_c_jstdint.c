#include <jni.h>
#include "com_github_jinahya_array.h"
#include "com_github_jinahya_jni_util_JniArrays.h"
#include "com_github_jinahya_jni_util_JniObjects.h"
#include "com_github_jinahya_jni_c_jstdint.h"
#include <stdint.h>
#include <stdio.h>

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jstdint_PTRDIFF_1MIN(JNIEnv *env, jclass cls) {
#ifndef PTRDIFF_MIN
  return NULL;
#endif
  return JNI_NewJavaLangLong_V(env, (jlong) PTRDIFF_MIN);
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jstdint_PTRDIFF_1MAX(JNIEnv * env, jclass cls) {
#ifndef PTRDIFF_MAX
  return NULL;
#endif
  return JNI_NewJavaLangLong_V(env, (jlong) PTRDIFF_MAX);
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jni_c_jstdint_SIZE_1MAX_1BYTES(JNIEnv * env, jclass cls) {
#ifndef SIZE_MAX
  return NULL;
#endif
  if (1) {
    const unsigned long long value = SIZE_MAX;
    const size_t size = sizeof (unsigned long long);
    return JNI_NewByteArray_VS_BE(env, &value, size);
  }
  const size_t size = sizeof (unsigned long long int);
  jbyteArray result = (*env)->NewByteArray(env, (jsize) size);
  if (result != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, result, NULL);
    if (cbytes != NULL) {
      unsigned long long int value = SIZE_MAX;
      int i;
      for (i = (int) (size - 1); i >= 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, result, cbytes, 0);
    }
  }
  return result;
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jstdint_SIG_1ATOMIC_1MIN(JNIEnv *env, jclass cls) {
#ifndef SIG_ATOMIC_MIN
  return NULL;
#endif
  //return SIG_ATOMIC_MIN;
  const int32_t value = SIG_ATOMIC_MIN;
  return JNI_NewJavaLangInteger_V(env, (jint) value);
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jstdint_SIG_1ATOMIC_1MAX(JNIEnv *env, jclass cls) {
#ifndef SIG_ATOMIC_MAX
  return NULL;
#endif
  //return SIG_ATOMIC_MAX;
  const int32_t value = SIG_ATOMIC_MAX;
  return JNI_NewJavaLangInteger_V(env, (jint) value);
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdint_WCHAR_1MIN(JNIEnv *env, jclass cls) {
  return WCHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdint_WCHAR_1MAX(JNIEnv *env, jclass cls) {
  return WCHAR_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_jstdint_WINT_1MIN(JNIEnv *env, jclass cls) {
  return WINT_MIN;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_jstdint_WINT_1MAX(JNIEnv *env, jclass cls) {
  return WINT_MAX;
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jstdint_UINT8_1MAX(JNIEnv *env, jclass cls) {
#ifndef UINT8_MAX
  return NULL;
#endif
  return JNI_NewJavaLangShort_V(env, (jshort) UINT8_MAX);
}


