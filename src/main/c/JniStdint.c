#include <jni.h>
#include "JniStdint.h"
#include <stdint.h>
#include <stdio.h>

JNIEXPORT jlong JNICALL Java_JniStdint_PTRDIFF_1MIN(JNIEnv *env, jclass cls) {
  //printf("PTRDIFF_MIN: %ld\n", PTRDIFF_MIN);
  return PTRDIFF_MIN;
}

JNIEXPORT jlong JNICALL Java_JniStdint_PTRDIFF_1MAX(JNIEnv *env, jclass cls) {
  return PTRDIFF_MAX;
}

JNIEXPORT jboolean JNICALL Java_JniStdint_SIZE_1MAX(JNIEnv *env, jclass cls, jbyteArray dst) {
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  if (d == NULL) {
    return JNI_FALSE;
  }
  unsigned long long int size_max = SIZE_MAX;
  int i;
  for (i = (*env)->GetArrayLength(env, dst) - 1; i >= 0; i--) {
    d[i] = (char) (size_max & 0xFF);
    size_max >>= 8;
  }
  (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  return JNI_TRUE;
}

JNIEXPORT jint JNICALL Java_JniStdint_SIG_1ATOMIC_1MIN(JNIEnv *env, jclass cls) {
  return SIG_ATOMIC_MIN;
}

JNIEXPORT jint JNICALL Java_JniStdint_SIG_1ATOMIC_1MAX(JNIEnv *env, jclass cls) {
  return SIG_ATOMIC_MAX;
}

JNIEXPORT jint JNICALL Java_JniStdint_WCHAR_1MIN(JNIEnv *env, jclass cls) {
  return WCHAR_MIN;
}

JNIEXPORT jint JNICALL Java_JniStdint_WCHAR_1MAX(JNIEnv *env, jclass cls) {
  return WCHAR_MAX;
}

JNIEXPORT jlong JNICALL Java_JniStdint_WINT_1MIN(JNIEnv *env, jclass cls) {
  return WINT_MIN;
}

JNIEXPORT jlong JNICALL Java_JniStdint_WINT_1MAX(JNIEnv *env, jclass cls) {
  return WINT_MAX;
}