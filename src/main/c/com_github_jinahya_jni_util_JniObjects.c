#include <jni.h>
#include "com_github_jinahya_jni_util_JniObjects.h"
#include <stdarg.h>
#include <stdio.h>

jobject JNI_NewObjectA_CNMS(JNIEnv *env, const char *name, const char *sig, jvalue *args) {
  jclass c = (*env)->FindClass(env, name);
  if (c == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  jmethodID m = (*env)->GetMethodID(env, c, "<init>", sig);
  if (m == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  jobject o = (*env)->NewObjectA(env, c, m, args);
  if (m == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  return o;
}

jobject JNI_NewObjectV_CNMS(JNIEnv *env, const char *name, const char *sig, va_list args) {
  jclass c = (*env)->FindClass(env, name);
  if (c == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  jmethodID m = (*env)->GetMethodID(env, c, "<init>", sig);
  if (m == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  jobject o = (*env)->NewObjectV(env, c, m, args);
  if (o == NULL) {
    (*env)->ExceptionDescribe(env);
    return NULL;
  }
  return o;
}

jobject JNI_NewJavaLangInteger_I(JNIEnv *env, jint value) {
  jvalue arg;
  arg.i = value;
  return JNI_NewObjectA_CNMS(env, "java/lang/Integer", "(I)V", &arg);
}

jobject JNI_NewJavaLangInteger_S(JNIEnv *env, jstring s) {
  jvalue arg;
  arg.l = s;
  return JNI_NewObjectA_CNMS(env, "java/lang/Integer", "(Ljava/lang/String;)V", &arg);
}


