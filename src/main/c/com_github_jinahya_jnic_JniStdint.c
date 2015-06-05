#include <jni.h>
#include "com_github_jinahya_jnic_JniStdint.h"
#include <stdint.h>
#include "com_github_jinahya_jnic_JniUtilsNative.h"
#include <stdio.h>

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniStdint_PTRDIFF_1MIN(JNIEnv *env, jclass cls) {
  //printf("PTRDIFF_MIN: %ld\n", PTRDIFF_MIN);
  return PTRDIFF_MIN;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniStdint_PTRDIFF_1MAX(JNIEnv *env, jclass cls) {
  return PTRDIFF_MAX;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jnic_JniStdint_SIZE_1MAX_1BYTES(JNIEnv *env, jclass cls) {
#if !defined (SIZE_MAX)
  return null;
#endif
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

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniStdint_SIG_1ATOMIC_1MIN(JNIEnv *env, jclass cls) {
  return SIG_ATOMIC_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniStdint_SIG_1ATOMIC_1MAX(JNIEnv *env, jclass cls) {
  return SIG_ATOMIC_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniStdint_WCHAR_1MIN(JNIEnv *env, jclass cls) {
  return WCHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniStdint_WCHAR_1MAX(JNIEnv *env, jclass cls) {
  return WCHAR_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniStdint_WINT_1MIN(JNIEnv *env, jclass cls) {
  return WINT_MIN;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniStdint_WINT_1MAX(JNIEnv *env, jclass cls) {
  return WINT_MAX;
}