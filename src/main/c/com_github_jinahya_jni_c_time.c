#include "com_github_jinahya_jni_c_time.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "com_github_jinahya_jni_env.h"

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_time_sizeof_1time_1t(JNIEnv *env, jclass cls) {
  return (jint) (sizeof (time_t));
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_time_sizeof_1clock_1t(JNIEnv *env, jclass cls) {
  return (jint) (sizeof (clock_t));
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_time_sizeof_1tm(JNIEnv *env, jclass cls) {
  return (jint) (sizeof (struct tm));
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_time_time(JNIEnv *env, jclass cls) {
  return (jlong) time(NULL);
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_time_clock(JNIEnv *env, jclass cls) {
  return (jlong) clock();
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_time_ctime(JNIEnv *env, jclass cls, jlong time) {
  const char * result = ctime((time_t *) (& time));
  return (*env)->NewStringUTF(env, result);
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_time_asctime(JNIEnv *env, jclass cls, jobject jtm) {
  //  const struct tm time;
  //  time.tm_sec = (int) JNE_GetIntField_Fn(env, jtm, "tm_sec");
  //  time.tm_min = (int) JNE_GetIntField_Fn(env, jtm, "tm_min");
  //  time.tm_hour = (int) JNE_GetIntField_Fn(env, jtm, "tm_hour");
  //  time.tm_mday = (int) JNE_GetIntField_Fn(env, jtm, "tm_mday");
  //  time.tm_mon = (int) JNE_GetIntField_Fn(env, jtm, "tm_mon");
  //  time.tm_year = (int) JNE_GetIntField_Fn(env, jtm, "tm_year");
  //  time.tm_wday = (int) JNE_GetIntField_Fn(env, jtm, "tm_wday");
  //  time.tm_yday = (int) JNE_GetIntField_Fn(env, jtm, "tm_yday");
  //  time.tm_isdst = (int) JNE_GetIntField_Fn(env, jtm, "tm_isdst");
  const struct tm time = {
    .tm_sec = (int) JNE_GetIntField_Fn(env, jtm, "tm_sec"),
    .tm_min = (int) JNE_GetIntField_Fn(env, jtm, "tm_min"),
    .tm_hour = (int) JNE_GetIntField_Fn(env, jtm, "tm_hour"),
    .tm_mday = (int) JNE_GetIntField_Fn(env, jtm, "tm_mday"),
    .tm_mon = (int) JNE_GetIntField_Fn(env, jtm, "tm_mon"),
    .tm_year = (int) JNE_GetIntField_Fn(env, jtm, "tm_year"),
    .tm_wday = (int) JNE_GetIntField_Fn(env, jtm, "tm_wday"),
    .tm_yday = (int) JNE_GetIntField_Fn(env, jtm, "tm_yday"),
    .tm_isdst = (int) JNE_GetIntField_Fn(env, jtm, "tm_isdst")
  };
  const char * result = asctime((struct tm *) (& time));
  return (*env)->NewStringUTF(env, result);
}
