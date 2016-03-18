#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <jni.h>
#include "com_github_jinahya_jni_c_jfloat.h"

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1RADIX(JNIEnv *env, jclass cls) {
  return FLT_RADIX;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DECIMAL_1DIG(JNIEnv *env, jclass cls) {
#ifndef DECIMAL_DIG
  return -1;
#else
  return DECIMAL_DIG;
#endif
}

JNIEXPORT jfloat JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MIN(JNIEnv *env, jclass cls) {
  return FLT_MIN;
}

JNIEXPORT jdouble JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MIN(JNIEnv *env, jclass cls) {
  return DBL_MIN;
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MIN_1STRING(JNIEnv *env, jclass cls) {
  //printf("LDBL_MIN: %Lf\n", LDBL_MIN);
  jstring result = NULL;
  char * trimmed = NULL;
  char * printed = NULL;
  printed = (char *) malloc(8192);
  if (printed != NULL) {
    int n = sprintf(printed, "%Lf", (long double) LDBL_MIN);
    if (n >= 0) {
      trimmed = (char *) malloc((size_t) (n + 1));
      if (trimmed != NULL) {
        strncpy(trimmed, printed, (size_t) n);
        trimmed[n] = '\0';
        result = (*env)->NewStringUTF(env, trimmed);
      }
    }
  }
  if (printed != NULL) free(printed);
  if (trimmed != NULL) free(trimmed);
  return result;
}

JNIEXPORT jfloat JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MAX(JNIEnv *env, jclass cls) {
  return FLT_MAX;
}

JNIEXPORT jdouble JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MAX(JNIEnv *env, jclass cls) {
  return DBL_MAX;
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MAX_1STRING(JNIEnv *env, jclass cls) {
  //printf("LDBL_MAX: %Lf\n", LDBL_MAX);
  jstring result = NULL;
  char * trimmed = NULL;
  char * printed = NULL;
  printed = (char *) malloc(8192);
  if (printed != NULL) {
    int n = sprintf(printed, "%Lf", (long double) LDBL_MAX);
    if (n >= 0) {
      trimmed = (char *) malloc((size_t) (n + 1));
      if (trimmed != NULL) {
        strncpy(trimmed, printed, (size_t) n);
        trimmed[n] = '\0';
        result = (*env)->NewStringUTF(env, trimmed);
      }
    }
  }
  if (printed != NULL) free(printed);
  if (trimmed != NULL) free(trimmed);
  return result;
}

JNIEXPORT jfloat JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1EPSILON(JNIEnv *env, jclass cls) {
  return FLT_EPSILON;
}

JNIEXPORT jdouble JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1EPSILON(JNIEnv *env, jclass cls) {
  return DBL_EPSILON;
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1EPSILON_1STRING(JNIEnv *env, jclass cls) {
  //printf("LDBL_EPSILON: %Lf\n", LDBL_EPSILON);
  jstring result = NULL;
  char * trimmed = NULL;
  char * printed = NULL;
  printed = (char *) malloc(8192);
  if (printed != NULL) {
    int n = sprintf(printed, "%Lf", (long double) LDBL_EPSILON);
    if (n >= 0) {
      trimmed = (char *) malloc((size_t) (n + 1));
      if (trimmed != NULL) {
        strncpy(trimmed, printed, (size_t) n);
        trimmed[n] = '\0';
        result = (*env)->NewStringUTF(env, trimmed);
      }
    }
  }
  if (printed != NULL) free(printed);
  if (trimmed != NULL) free(trimmed);
  return result;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1DIG(JNIEnv *env, jclass cls) {
  return FLT_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1DIG(JNIEnv *env, jclass cls) {
  return DBL_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1DIG(JNIEnv *env, jclass cls) {
  return LDBL_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MANT_1DIG(JNIEnv *env, jclass cls) {
  return FLT_MANT_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MANT_1DIG(JNIEnv *env, jclass cls) {
  return DBL_MANT_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MANT_1DIG(JNIEnv *env, jclass cls) {
  return LDBL_MANT_DIG;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MIN_1EXP(JNIEnv *env, jclass cls) {
  return FLT_MIN_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MIN_1EXP(JNIEnv *env, jclass cls) {
  return DBL_MIN_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MIN_1EXP(JNIEnv *env, jclass cls) {
  return LDBL_MIN_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MIN_110_1EXP(JNIEnv *env, jclass cls) {
  return FLT_MIN_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MIN_110_1EXP(JNIEnv *env, jclass cls) {
  return DBL_MIN_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MIN_110_1EXP(JNIEnv *env, jclass cls) {
  return LDBL_MIN_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MAX_1EXP(JNIEnv *env, jclass cls) {
  return FLT_MAX_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MAX_1EXP(JNIEnv *env, jclass cls) {
  return DBL_MAX_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MAX_1EXP(JNIEnv *env, jclass cls) {
  return LDBL_MAX_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1MAX_110_1EXP(JNIEnv *env, jclass cls) {
  return FLT_MAX_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1MAX_110_1EXP(JNIEnv *env, jclass cls) {
  return DBL_MAX_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1MAX_110_1EXP(JNIEnv *env, jclass cls) {
  return LDBL_MAX_10_EXP;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1ROUNDS(JNIEnv *env, jclass cls) {
  return FLT_ROUNDS;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1EVAL_1METHOD(JNIEnv *env, jclass cls) {
#if defined FLT_EVAL_METHOD //C99
  return FLT_EVAL_METHOD;
#else
  return -1;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_FLT_1HAS_1SUBNORM(JNIEnv *env, jclass cls) {
#if defined FLT_HAS_SUBMORM // C11
  return FLT_HAS_SUBNORM;
#else
  return -1;
#endif

}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_DBL_1HAS_1SUBNORM(JNIEnv *env, jclass cls) {
#if defined DBL_HAS_SUBNORM // C11
  return DBL_HAS_SUBNORM;
#else
  return -1;
#endif
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jfloat_LDBL_1HAS_1SUBNORM(JNIEnv *env, jclass cls) {
#if defined LDBL_HAS_SUBNORM // C11
  return LDBL_HAS_SUBNORM;
#else
  return -1;
#endif
}
