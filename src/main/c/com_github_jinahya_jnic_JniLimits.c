#include <jni.h>
#include "com_github_jinahya_jnic_JniLimits.h"
#include <limits.h>
#include "com_github_jinahya_jnic_JniUtilsNative.h"

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_CHAR_1BIT(JNIEnv *env, jclass cls) {
  return CHAR_BIT;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_MB_1LEN_1MAX(JNIEnv *env, jclass cls) {
  return MB_LEN_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_CHAR_1MIN(JNIEnv *env, jclass cls) {
  return CHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_CHAR_1MAX(JNIEnv *env, jclass cls) {
  return CHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_SCHAR_1MIN(JNIEnv *env, jclass cls) {
  return SCHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_SCHAR_1MAX(JNIEnv *env, jclass cls) {
  return SCHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_UCHAR_1MAX(JNIEnv *env, jclass cls) {
  return UCHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_SHRT_1MIN(JNIEnv *env, jclass cls) {
  return SHRT_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_SHRT_1MAX(JNIEnv *env, jclass cls) {
  return SHRT_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_USHRT_1MAX(JNIEnv *env, jclass cls) {
  return USHRT_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_INT_1MIN(JNIEnv *env, jclass cls) {
  return INT_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniLimits_INT_1MAX(JNIEnv *env, jclass cls) {
  return INT_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniLimits_UINT_1MAX(JNIEnv *env, jclass cls) {
  return UINT_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniLimits_LONG_1MIN(JNIEnv *env, jclass cls) {
  return LONG_MIN;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jnic_JniLimits_LONG_1MAX(JNIEnv *env, jclass cls) {
  return LONG_MAX;
}

JNIEXPORT jboolean JNICALL Java_com_github_jinahya_jnic_JniLimits_ULONG_1MAX(JNIEnv *env, jclass cls, jbyteArray dst) {
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  if (d == NULL) {
    return JNI_FALSE;
  }
  unsigned long ulong_max = ULONG_MAX;
  int i;
  for (i = (*env)->GetArrayLength(env, dst) - 1; i >= 0; i--) {
    d[i] = (char) (ulong_max & 0xFF);
    ulong_max >>= 8;
  }
  (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  return JNI_TRUE;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jnic_JniLimits_ULONG_1MAX_1BYTES(JNIEnv *env, jclass cls) {
  const size_t size = (int) sizeof (unsigned long);
  jbyteArray jbytes = (*env)->NewByteArray(env, (jsize) (size + 1));
  if (jbytes != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, jbytes, NULL);
    if (cbytes != NULL) {
      unsigned long value = ULONG_MAX;
      int i;
      for (i = (int) size; i > 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, jbytes, cbytes, 0);
    }
  }
  return jbytes;
}

JNIEXPORT jboolean JNICALL Java_com_github_jinahya_jnic_JniLimits_LLONG_1MIN(JNIEnv *env, jclass cls, jbyteArray dst) {
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  if (d == NULL) {
    return JNI_FALSE;
  }
  long long v = LLONG_MIN;
  int i;
  for (i = (*env)->GetArrayLength(env, dst) - 1; i >= 0; i--) {
    d[i] = (char) (v & 0xFF);
    v >>= 8;
  }
  (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL Java_com_github_jinahya_jnic_JniLimits_LLONG_1MAX(JNIEnv *env, jclass cls, jbyteArray dst) {
  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
  if (d == NULL) {
    return JNI_FALSE;
  }
  //  long long v = LLONG_MAX;
  //  int i;
  //  for (i = (*env)->GetArrayLength(env, dst) - 1; i >= 0; i--) {
  //    d[i] = (char) (v & 0xFF);
  //    v >>= 8;
  //  }
  ull2ca(LLONG_MAX, (char *) d, (*env)->GetArrayLength(env, dst));
  (*env)->ReleaseByteArrayElements(env, dst, d, 0);
  return JNI_TRUE;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jnic_JniLimits_ULLONG_1MAX_1BYTES(JNIEnv *env, jclass cls) {
  const size_t ullsize = (int) sizeof (unsigned long long);
  jbyteArray result = (*env)->NewByteArray(env, (jsize) (ullsize + 1));
  if (result != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, result, NULL);
    if (cbytes != NULL) {
      unsigned long long value = ULLONG_MAX;
      int i;
      for (i = (int) ullsize; i > 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, result, cbytes, 0);
    }
  }
  return result;
}