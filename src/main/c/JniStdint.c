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

JNIEXPORT void JNICALL Java_JniStdint_SIZE_1MAX(JNIEnv *env, jclass cls, jbyteArray dst) {

  jbyte *b = (*env)->GetByteArrayElements(env, dst, NULL);
  unsigned long long int x = SIZE_MAX;
  printf("x: %llu\n", x);
  char *a = (char *) &x;
  printf("%p %d\n", a, *a);
  int i;
  for (i = 0; i < 8; i++) {
    b[i] = *(a + i);
    printf("%d\n", *(a + i));
    printf("b[%d]: %d\n", i, b[i]);
  }
  (*env)->ReleaseByteArrayElements(env, dst, b, 0);
}