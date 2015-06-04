#include <jni.h>
#include "com_github_jinahya_jnic_JniFloat.h"
#include <float.h>

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFloat_FLT_1RADIX(JNIEnv *env, jclass cls) {
  return FLT_RADIX;
}
