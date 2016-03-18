#include "com_github_jinahya_jni_c_jstdlib.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdlib_EXIT_1FAILURE(JNIEnv *env, jclass cls) {
  return (jint) EXIT_FAILURE;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdlib_EXIT_1SUCCESS(JNIEnv *env, jclass cls) {
  return (jint) EXIT_SUCCESS;
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdlib_RAND_1MAX(JNIEnv *env, jclass cls) {
  return (jint) RAND_MAX;
}

JNIEXPORT void JNICALL Java_com_github_jinahya_jni_c_jstdlib_abort(JNIEnv *env, jclass cls) {
  abort();
}

JNIEXPORT void JNICALL Java_com_github_jinahya_jni_c_jstdlib_exit(JNIEnv *env, jclass cls, jint exit_code) {
  exit((int) exit_code);
}

JNIEXPORT jstring JNICALL Java_com_github_jinahya_jni_c_jstdlib_getenv(JNIEnv *env, jclass cls, jbyteArray jname) {
  if (jname == NULL) {
    const jclass clazz = (*env)->FindClass(env, "java/lang/NullPointerException");
    if (clazz != NULL) {
      (*env)->ThrowNew(env, clazz, "null name");
    }
    return NULL;
  }
  jbyte * cname = (*env)->GetByteArrayElements(env, jname, NULL);
  if (cname != NULL) {
    const char * cvalue = getenv((const char *) cname);
    (*env)->ReleaseByteArrayElements(env, jname, cname, JNI_ABORT);
    if (cvalue != NULL) {
      const jsize jlength = (jsize) strlen(cvalue);
      jbyteArray jvalue = (*env)->NewByteArray(env, jlength);
      if (jvalue != NULL) {
        (*env)->SetByteArrayRegion(env, jvalue, 0, jlength, (jbyte *) cvalue);
      }
      return jvalue;
    }
  }
  return NULL;
}

JNIEXPORT int JNICALL Java_com_github_jinahya_jni_c_jstdlib_rand(JNIEnv *env, jclass cls) {
  return rand();
}

JNIEXPORT void JNICALL Java_com_github_jinahya_jni_c_jstdlib_srand(JNIEnv *env, jclass cls, jlong seed) {
  srand((unsigned) seed);
}

JNIEXPORT jint JNICALL Java_com_github_jinahya_jni_c_jstdlib_system(JNIEnv *env, jclass cls, jbyteArray jcommand) {
  jbyte * ccommand = NULL;
  if (jcommand != NULL) {
    ccommand = (*env)->GetByteArrayElements(env, jcommand, NULL);
  }
  const int cresult = system((const char *) ccommand);
  if (jcommand != NULL && ccommand != NULL) {
    (*env)->ReleaseByteArrayElements(env, jcommand, ccommand, JNI_ABORT);
  }
  return (jint) cresult;
}