#include <jni.h>
#include "com_github_jinahya_jnic_JniFloat.h"
#include <fenv.h>
#include "com_github_jinahya_jni_util_JniObjects.h"

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1ALL_1EXCEPT(JNIEnv *env, jclass cls) {
#ifndef FE_ALL_EXCEPT
  return NULL;
#else
  //return NULL;
  //return FE_ALL_EXCEPT;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_ALL_EXCEPT);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1DIVBYZERO(JNIEnv *env, jclass cls) {
#ifndef FE_DIVBYZERO
  //return -1;
  return NULL;
#else
  //return FE_DIVBYZERO;
  //jint value = FE_DIVBYZERO;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_DIVBYZERO);
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1INEXACT(JNIEnv *env, jclass cls) {
#ifndef FE_INEXACT
  return -1;
#else
  return FE_INEXACT;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1INVALID(JNIEnv *env, jclass cls) {
#ifndef FE_INVALID
  return -1;
#else
  return FE_INVALID;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1OVERFLOW(JNIEnv *env, jclass cls) {
#ifndef FE_OVERFLOW
  return -1;
#else
  return FE_OVERFLOW;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1UNDERFLOW(JNIEnv *env, jclass cls) {
#ifndef FE_UNDERFLOW
  return -1;
#else
  return FE_UNDERFLOW;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1DOWNWARD(JNIEnv *env, jclass cls) {
#ifndef FE_DOWNWARD
  return -1;
#else
  return FE_DOWNWARD;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1TONEAREST(JNIEnv *env, jclass cls) {
#ifndef FE_TONEAREST
  return -1;
#else
  return FE_TONEAREST;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1TOWARDZERO(JNIEnv *env, jclass cls) {
#ifndef FE_TOWARDZERO
  return -1;
#else
  return FE_TOWARDZERO;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1UPWARD(JNIEnv *env, jclass cls) {
#ifndef FE_UPWARD
  return -1;
#else
  return FE_UPWARD;
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_sizeof_1fenv_1t(JNIEnv *env, jclass cls) {
#ifndef fenv_t
  return NULL;
#else
  return JNI_NewJavaLangInteger_I(env, (jint) fenv_t);
#endif
}
