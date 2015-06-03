#include <jni.h>
#include "JniLimits.h"
#include <limits.h>

JNIEXPORT jint JNICALL Java_JniLimits_CHAR_1BIT(JNIEnv *env, jclass cls) {
  return CHAR_BIT;
}

JNIEXPORT jint JNICALL Java_JniLimits_MB_1LEN_1MAX(JNIEnv *env, jclass cls) {
  return MB_LEN_MAX;
}