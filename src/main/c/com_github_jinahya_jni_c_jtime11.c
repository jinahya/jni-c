//#include "com_github_jinahya_jni_c_jtime11.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "com_github_jinahya_jni_env.h"

//JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jtime11_sizeof_1struct_1timespec(JNIEnv *env, jclass cls) {
//  return (jint) (sizeof (struct timespec));
//}

JNIEXPORT jobject JNICALL Java_com_github_jinahya_jni_c_jtime11_TIME_1UTC(JNIEnv *env, jclass cls) {
#ifndef TIME_UTC
  return NULL;
#else
  return (jint) TIME_UTC;
#endif
}

//JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jtime11_timespec_1get(JNIEnv *env, jclass cls, jobject ts, jint base) {
//  struct timespec ts;
//  const int result = timespec_get(&ts, (int) base);
//  JNE_SetLongField_Fn(env, ts, "tv_sec", ts->tv_sec);
//  JNE_SetLongField_Fn(env, ts, "tv_nsec", ts->tv_nsec);
//  return result;
//}

