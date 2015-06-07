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

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1INEXACT(JNIEnv *env, jclass cls) {
#ifndef FE_INEXACT
  return NULL;
#else
  //return FE_INEXACT;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_INEXACT);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1INVALID(JNIEnv *env, jclass cls) {
#ifndef FE_INVALID
  return NULL;
#else
  //return FE_INVALID;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_INVALID);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1OVERFLOW(JNIEnv *env, jclass cls) {
#ifndef FE_OVERFLOW
  return NULL;
#else
  //return FE_OVERFLOW;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_OVERFLOW);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1UNDERFLOW(JNIEnv *env, jclass cls) {
#ifndef FE_UNDERFLOW
  return NULL;
#else
  //return FE_UNDERFLOW;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_UNDERFLOW);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1DOWNWARD(JNIEnv *env, jclass cls) {
#ifndef FE_DOWNWARD
  return NULL;
#else
  //return FE_DOWNWARD;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_DOWNWARD);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1TONEAREST(JNIEnv *env, jclass cls) {
#ifndef FE_TONEAREST
  return NULL;
#else
  //return FE_TONEAREST;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_TONEAREST);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1TOWARDZERO(JNIEnv *env, jclass cls) {
#ifndef FE_TOWARDZERO
  return NULL;
#else
  //return FE_TOWARDZERO;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_TOWARDZERO);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_FE_1UPWARD(JNIEnv *env, jclass cls) {
#ifndef FE_UPWARD
  return NULL;
#else
  //return FE_UPWARD;
  return JNI_NewJavaLangInteger_I(env, (jint) FE_UPWARD);
#endif
}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jnic_JniFenv_sizeof_1fenv_1t(JNIEnv *env, jclass cls) {
#ifndef fenv_t
  return NULL;
#else
  return JNI_NewJavaLangInteger_I(env, (jint) fenv_t);
#endif
}
