#include <jni.h>
#include "JniString.h"
#include <string.h>

JNIEXPORT jbyteArray JNICALL Java_JniString_strcat(JNIEnv *env, jclass cls, jbyteArray dst, jbyteArray src) {
  if (dst == NULL) return NULL;
  if (src == NULL) return NULL;
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  jbyte *s = (*env)->GetByteArrayElements(env, src, NULL);
  char * r = (d != NULL && s != NULL) ? strcat((char *) d, (const char *) s) : NULL;
  if (d != NULL) (*env)->ReleaseByteArrayElements(env, dst, d, JNI_ABORT);
  if (s != NULL) (*env)->ReleaseByteArrayElements(env, src, s, JNI_ABORT);
  return (jbyteArray) r;
}

JNIEXPORT jbyteArray JNICALL Java_JniString_strcpy(JNIEnv *env, jclass cls, jbyteArray dst, jbyteArray src) {
  if (dst == NULL) return NULL;
  if (src == NULL) return NULL;
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  jbyte *s = (*env)->GetByteArrayElements(env, src, NULL);
  char * r = (d != NULL && s != NULL) ? strcpy((char *) d, (const char *) s) : NULL;
  if (d != NULL) (*env)->ReleaseByteArrayElements(env, dst, d, JNI_ABORT);
  if (s != NULL) (*env)->ReleaseByteArrayElements(env, src, s, JNI_ABORT);
  return (jbyteArray) r;
}