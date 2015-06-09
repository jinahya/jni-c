#include <jni.h>
#include "com_github_jinahya_jni_util_java.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

jobject java_nio_ByteOrder_BIG_ENDIAN(JNIEnv * env) {
  jclass c = (*env)->FindClass(env, "java/nio/ByteOrder");
  if (c == NULL) {
    return NULL;
  }
  jfieldID f = (*env)->GetFieldID(env, c, "BIG_ENDIAN", "Ljava/nio/ByteOrder;");
  if (f == NULL) {
    return NULL;
  }
  return (*env)->GetStaticObjectField(env, NULL, f);
}

jobject java_nio_ByteOrder_LITTLE_ENDIAN(JNIEnv * env) {
  jclass c = (*env)->FindClass(env, "java/nio/ByteOrder");
  if (c == NULL) {
    return NULL;
  }
  jfieldID f = (*env)->GetFieldID(env, c, "LITTLE_ENDIAN", "Ljava/nio/ByteOrder;");
  if (f == NULL) {
    return NULL;
  }
  return (*env)->GetStaticObjectField(env, NULL, f);
}

jobject java_nio_ByteOrder_nativeOrder(JNIEnv * env) {
  jclass c = (*env)->FindClass(env, "java/nio/ByteOrder");
  if (c == NULL) {
    return NULL;
  }
  jmethodID m = (*env)->GetMethodID(env, c, "nativeOrder", "()V");
  if (m == NULL) {
    return NULL;
  }
  return (*env)->CallObjectMethod(env, NULL, m);
}
