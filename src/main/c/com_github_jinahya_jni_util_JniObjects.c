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

jobject JNI_NewJavaLangByte_V(JNIEnv *env, jbyte value) {
  jvalue arg;
  arg.b = value;
  return JNI_NewObjectA_CNMS(env, "java/lang/Byte", "(B)V", &arg);
}

jobject JNI_NewJavaLangByte_S(JNIEnv *env, jstring s) {
  jvalue arg;
  arg.l = s;
  return JNI_NewObjectA_CNMS(env, "java/lang/Byte", "(Ljava/lang/String;)V", &arg);
}

jobject JNI_NewJavaLangShort_V(JNIEnv * env, const jshort value) {
  jvalue arg;
  arg.s = value;
  return JNI_NewObjectA_CNMS(env, "java/lang/Short", "(S)V", &arg);
}

jobject JNI_NewJavaLangShort_S(JNIEnv * env, const jstring s) {
  jvalue arg;
  arg.l = s;
  return JNI_NewObjectA_CNMS(env, "java/lang/Short", "(Ljava/lang/String;)V", &arg);
}

jobject JNI_NewJavaLangInteger_V(JNIEnv *env, jint value) {
  jvalue arg;
  arg.i = value;
  return JNI_NewObjectA_CNMS(env, "java/lang/Integer", "(I)V", &arg);
}

jobject JNI_NewJavaLangInteger_S(JNIEnv *env, jstring s) {
  jvalue arg;
  arg.l = s;
  return JNI_NewObjectA_CNMS(env, "java/lang/Integer", "(Ljava/lang/String;)V", &arg);
}

jobject JNI_NewJavaLangLong_V(JNIEnv *env, jlong value) {
  //printf("JNI_NewJavaLangLong_V(%p, %ld\n", env, (long) value);
  jvalue arg;
  arg.j = value;
  return JNI_NewObjectA_CNMS(env, "java/lang/Long", "(J)V", &arg);
}

jobject JNI_NewJavaLangLong_S(JNIEnv *env, jstring s) {
  jvalue arg;
  arg.l = s;
  return JNI_NewObjectA_CNMS(env, "java/lang/Long", "(Ljava/lang/String;)V", &arg);
}


