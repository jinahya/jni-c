#include <jni.h>
#include "com_github_jinahya_jni_util_JniNative.h"
#include "com_github_jinahya_jni_util_JniArrays.h"
#include <stdlib.h>
#include <string.h>

char * alloc_and_copy(const void *value, size_t size) {
  char *bytes = malloc(size);
  if (bytes != NULL) {
    bytes = memcpy(bytes, value, size);
  }
  return bytes;
}

char * reverse(char *bytes, size_t size) {
}

jbyteArray JNI_NewByteArray_VS(JNIEnv *env, const void *value, size_t size) {
  jbyteArray array = NULL;
  char *bytes = alloc_and_copy(value, size);
  if (bytes != NULL) {
    jbyteArray array = (*env)->NewByteArray(env, (jsize) size);
    if (array != NULL) {
      (*env)->SetByteArrayRegion(env, array, 0, (jsize) size, (jbyte *) bytes);
    }
    free(bytes);
  }
  return array;
}

jbyteArray JNI_NewByteArray_VS_BE(JNIEnv *env, const void *value, size_t size) {
  jbyteArray array = JNI_NewByteArray_VS(env, value, size);
  if (array != NULL && !IS_BIG_ENDIAN) {
    jbyte * bytes = (*env)->GetByteArrayElements(env, array, NULL);
    if (bytes == NULL) {
      array = NULL;
    } else {
      bytes = (char *) reverse((char*) bytes, size);
      (*env)->ReleaseByteArrayElements(env, array, bytes, 0);
    }
  }
  return array;
}

jbyteArray JNI_NewByteArray_VS_LE(JNIEnv *env, const void *value, size_t size) {
  jbyteArray array = JNI_NewByteArray_VS(env, value, size);
  if (array != NULL && !IS_BIG_ENDIAN) {
    jbyte * bytes = (*env)->GetByteArrayElements(env, array, NULL);
    if (bytes == NULL) {
      array = NULL;
    } else {
      bytes = (char *) reverse((char*) bytes, size);
      (*env)->ReleaseByteArrayElements(env, array, bytes, 0);
    }
  }
  return array;
}
