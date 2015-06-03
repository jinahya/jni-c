#include <jni.h>
#include "JniString.h"
#include <string.h>
//#include <stdio.h>

JNIEXPORT jbyteArray JNICALL Java_JniString_strcat(JNIEnv *env, jclass cls, jbyteArray dst, jbyteArray src) {
  if (dst == NULL) return dst;
  if (src == NULL) return dst;
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  jbyte *s = (*env)->GetByteArrayElements(env, src, NULL);
  if (d != NULL && s != NULL) strcat((char *) d, (const char *) s);
  if (d != NULL) (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  if (s != NULL) (*env)->ReleaseByteArrayElements(env, src, s, JNI_ABORT);
  return dst;
}

JNIEXPORT jbyteArray JNICALL Java_JniString_strcpy(JNIEnv *env, jclass cls, jbyteArray dst, jbyteArray src) {
  if (dst == NULL) return dst;
  if (src == NULL) return dst;
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  jbyte *s = (*env)->GetByteArrayElements(env, src, NULL);
  if (d != NULL && s != NULL) strcpy((char *) d, (const char *) s);
  if (d != NULL) (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  if (s != NULL) (*env)->ReleaseByteArrayElements(env, src, s, JNI_ABORT);
  return dst;
}