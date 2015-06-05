#include <jni.h>
#include "com_github_jinahya_jnic_JniFloat.h"
#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFloat_FLT_1RADIX(JNIEnv *env, jclass cls) {
  return FLT_RADIX;
}

//JNIEXPORT jint JNICALL Java_com_github_jinahya_jnic_JniFloat_DECIMAL_1DIG(JNIEnv *env, jclass cls) {
//  return DECIMAL_DIG;
//}

JNIEXPORT jfloat JNICALL Java_com_github_jinahya_jnic_JniFloat_FLT_1MIN(JNIEnv *env, jclass cls) {
  return FLT_MIN;
}

JNIEXPORT jdouble JNICALL Java_com_github_jinahya_jnic_JniFloat_DBL_1MIN(JNIEnv *env, jclass cls) {
  return DBL_MIN;
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jnic_JniFloat_LDBL_1MIN_1STRING(JNIEnv *env, jclass cls) {
  jstring result = NULL;
  char * trimmed = NULL;
  char * printed = NULL;
  printed = (char *) malloc(16); // 8(darwin)
  printf("ldbl_min_string printd: %p\n", printed);
  if (printed != NULL) {
    long double x = LDBL_MIN;
    int n = sprintf(printed, "%Lf", x);
    //int n = sprintf(printed, "%Lf", (long double) LDBL_MIN);
    printf("ldbl_min_string n: %d\n", n);
    printf("ldbl_min_string printed: %s\n", printed);
    if (n >= 0) {
      printf("libl_min_string (size_t) (n + 1): %zu\n", (size_t) (n + 1));
      trimmed = (char *) malloc((size_t) (n + 1));
      printf("ldbl_min_string trimmed: %p\n", trimmed);
      if (trimmed != NULL) {
        strncpy(trimmed, printed, (size_t) n);
        trimmed[n] = '\0';
        printf("ldbl_min_string strncpy-ed\n");
        printf("ldbl_min_string trimmed: %s\n", trimmed);
        printf("ldbl_min_string trimmed[%d]: %d\n", n, trimmed[n]);
        result = (*env)->NewStringUTF(env, trimmed);
        printf("ldbl_min_string newStringUTF-ed\n");
      }
    }
  }
  if (printed != NULL) free(printed);
  if (trimmed != NULL) free(trimmed);
  return result;
}

//JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jnic_JniFloat_LDBL_1MIN_1BYTES(JNIEnv *env, jclass cls) {
//  //  size_t s = sizeof (long double);
//  //  printf("sizeof (long double): %zu\n", s);
//  //  jbyteArray b = (*env)->NewByteArray(env, (int) s);
//  //  printf("LDBL_MIN byte array created\n");
//  //  jbyte *c = (*env)->GetByteArrayElements(env, b, NULL);
//  //  printf("LDBL_MIN byte array elements\n");
//  //  if (c != NULL) {
//  //    long double v = LDBL_MIN;
//  //    memcpy((char *) c, &v, s);
//  //    printf("LDBL_MIN memcpied\n");
//  //  }
//  //  if (c != NULL) {
//  //    (*env)->ReleaseByteArrayElements(env, b, c, 0);
//  //    printf("LDBL_MIN released\n");
//  //  }
//  //  return b;
//  return NULL;
//}

JNIEXPORT jfloat JNICALL Java_com_github_jinahya_jnic_JniFloat_FLT_1MAX(JNIEnv *env, jclass cls) {
  return FLT_MAX;
}

JNIEXPORT jdouble JNICALL Java_com_github_jinahya_jnic_JniFloat_DBL_1MAX(JNIEnv *env, jclass cls) {
  return DBL_MAX;
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jnic_JniFloat_LDBL_1MAX_1STRING(JNIEnv *env, jclass cls) {
  printf("ldbl_max_string\n");
  jstring result = NULL;
  char * trimmed = NULL;
  char * printed = NULL;
  printed = (char *) malloc(8192); // 4942(darwin)
  printf("ldbl_max_string printed: %p\n", printed);
  if (printed != NULL) {
    int n = sprintf(printed, "%Lf", (long double) LDBL_MAX);
    printf("ldbl_max_string n: %d\n", n);
    if (n >= 0) {
      trimmed = (char *) malloc((size_t) (n + 1));
      trimmed[n] = '\0';
      printf("ldbl_max_trimmed: %p\n", trimmed);
      if (trimmed != NULL) {
        strncpy(trimmed, printed, (size_t) n);
        printf("ldbl_max_trimmed strncpy-ed");
        result = (*env)->NewStringUTF(env, trimmed);
      }
    }
  }
  if (printed != NULL) free(printed);
  if (trimmed != NULL) free(trimmed);
  return result;
}

//JNIEXPORT jbyteArray JNICALL Java_com_github_jinahya_jnic_JniFloat_LDBL_1MAX_1BYTES(JNIEnv *env, jclass cls) {
//  //  printf("sizeof(long double): %lu\n", sizeof (long double));
//  //  printf("LDBL_MAX: %Lf\n", LDBL_MAX);
//  //
//  //  jbyte *d = (*env)->GetByteArrayElements(env, dst, NULL);
//  //  if (d == NULL) return JNI_FALSE;
//  //  long double s = LDBL_MAX;
//  //  //size_t t = CHAR_BIT;
//  //  memcpy((char *) d, &s, CHAR_BIT);
//  //  (*env)->ReleaseByteArrayElements(env, dst, d, 0);
//  //  return JNI_TRUE;
//  return NULL;
//}
