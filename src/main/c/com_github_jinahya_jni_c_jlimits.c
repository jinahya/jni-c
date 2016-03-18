#include <jni.h>
#include "com_github_jinahya_jni_c_jlimits.h"
#include <limits.h>

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_CHAR_1BIT(JNIEnv *env, jclass cls) {
  return CHAR_BIT;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_MB_1LEN_1MAX(JNIEnv *env, jclass cls) {
  return MB_LEN_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_CHAR_1MIN(JNIEnv *env, jclass cls) {
  return CHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_CHAR_1MAX(JNIEnv *env, jclass cls) {
  return CHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_SCHAR_1MIN(JNIEnv *env, jclass cls) {
  return SCHAR_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_SCHAR_1MAX(JNIEnv *env, jclass cls) {
  return SCHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_UCHAR_1MAX(JNIEnv *env, jclass cls) {
  return UCHAR_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_SHRT_1MIN(JNIEnv *env, jclass cls) {
  return SHRT_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_SHRT_1MAX(JNIEnv *env, jclass cls) {
  return SHRT_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_USHRT_1MAX(JNIEnv *env, jclass cls) {
  return USHRT_MAX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_INT_1MIN(JNIEnv *env, jclass cls) {
  return INT_MIN;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jlimits_INT_1MAX(JNIEnv *env, jclass cls) {
  return INT_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_jlimits_UINT_1MAX(JNIEnv *env, jclass cls) {
  return UINT_MAX;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_jlimits_LONG_1MIN(JNIEnv *env, jclass cls) {
  return LONG_MIN;
}

JNIEXPORT jlong JNICALL Java_com_github_jinahya_jni_c_jlimits_LONG_1MAX(JNIEnv *env, jclass cls) {
  return LONG_MAX;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jni_c_jlimits_ULONG_1MAX_1BYTES(JNIEnv *env, jclass cls) {
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

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jni_c_jlimits_LLONG_1MIN_1BYTES(JNIEnv *env, jclass cls) {
  const size_t size = sizeof (long long);
  jbyteArray result = (*env)->NewByteArray(env, (jsize) size);
  if (result != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, result, NULL);
    if (cbytes != NULL) {
      long long value = LLONG_MIN;
      int i;
      for (i = (int) (size - 1); i >= 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, result, cbytes, 0);
    }
  }
  return result;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jni_c_jlimits_LLONG_1MAX_1BYTES(JNIEnv *env, jclass cls) {
  const size_t size = sizeof (long long);
  jbyteArray result = (*env)->NewByteArray(env, (jsize) size);
  if (result != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, result, NULL);
    if (cbytes != NULL) {
      long long value = LLONG_MAX;
      int i;
      for (i = (int) (size - 1); i >= 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, result, cbytes, 0);
    }
  }
  return result;
}

JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jni_c_jlimits_ULLONG_1MAX_1BYTES(JNIEnv *env, jclass cls) {
  const size_t size = sizeof (unsigned long long);
  jbyteArray result = (*env)->NewByteArray(env, (jsize) size);
  if (result != NULL) {
    jbyte * cbytes = (*env)->GetByteArrayElements(env, result, NULL);
    if (cbytes != NULL) {
      unsigned long long value = ULLONG_MAX;
      int i;
      for (i = (int) (size - 1); i >= 0; i--) {
        cbytes[i] = (jbyte) (value & 0xFF);
        value >>= 8;
      }
      (*env)->ReleaseByteArrayElements(env, result, cbytes, 0);
    }
  }
  return result;
}