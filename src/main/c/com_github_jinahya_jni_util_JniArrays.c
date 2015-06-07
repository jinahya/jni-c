#include <jni.h>
#include "com_github_jinahya_array.h"
#include "com_github_jinahya_jni_util_JniNative.h"
#include "com_github_jinahya_jni_util_JniArrays.h"
#include <stdlib.h>
#include <string.h>

void JNI_ReverseByteArray(JNIEnv * env, const jbyteArray array) {
  jbyte * bytes = (*env)->GetByteArrayElements(env, array, NULL);
  if (bytes != NULL) {
    array_reverse(bytes, 0, (size_t) (*env)->GetArrayLength(env, array), sizeof (char));
    (*env)->ReleaseByteArrayElements(env, array, bytes, 0);
  }
}

jbyteArray JNI_NewByteArray_VS(JNIEnv * env, const void * value, const size_t size) {
  jbyteArray array = NULL;
  char *bytes = array_value(value, size);
  if (bytes != NULL) {
    array = (*env)->NewByteArray(env, (jsize) size);
    if (array != NULL) {
      (*env)->SetByteArrayRegion(env, array, 0, (jsize) size, (jbyte *) bytes);
    }
    free(bytes);
  }
  return array;
}

jbyteArray JNI_NewByteArray_VS_BE(JNIEnv *env, const void * value, const size_t size) {
  jbyteArray array = NULL;
  char *bytes = array_value_be(value, size);
  if (bytes != NULL) {
    array = (*env)->NewByteArray(env, (jsize) size);
    if (array != NULL) {
      (*env)->SetByteArrayRegion(env, array, 0, (jsize) size, (jbyte *) bytes);
    }
    free(bytes);
  }
  return array;
}

jbyteArray JNI_NewByteArray_VS_LE(JNIEnv *env, const void *value, const size_t size) {
  jbyteArray array = NULL;
  char *bytes = array_value_le(value, size);
  if (bytes != NULL) {
    array = (*env)->NewByteArray(env, (jsize) size);
    if (array != NULL) {
      (*env)->SetByteArrayRegion(env, array, 0, (jsize) size, (jbyte *) bytes);
    }
    free(bytes);
  }
  return array;
}
