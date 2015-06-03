#include <jni.h>
#include "JniStdio.h"
#include <stdio.h>

JNIEXPORT jint JNICALL Java_JniStdio__1IOFBF(JNIEnv *env, jclass cls) {
  return _IOFBF;
}

JNIEXPORT jint JNICALL Java_JniStdio__1IOLBF(JNIEnv *env, jclass cls) {
  return _IOLBF;
}

JNIEXPORT jint JNICALL Java_JniStdio__1IONBF(JNIEnv *env, jclass cls) {
  return _IONBF;
}

//JNIEXPORT jobject JNICALL Java_JniStdio_stdout_1(JNIEnv *env, jclass cls) {
//  if (stdout == NULL) return NULL;
//  int stdoutno = fileno(stdout);
//  if (stdoutno == -1) return NULL;
//
//  jclass class_ioex = (*env)->FindClass(env, "java/io/IOException");
//  if (class_ioex == NULL) return NULL;
//
//  jclass class_fd = (*env)->FindClass(env, "java/io/FileDescriptor");
//  if (class_fd == NULL) return NULL;
//  jmethodID constructor_fd = (*env)->GetMethodID(env, class_fd, "<init>", "()V");
//  if (constructor_fd == NULL) return NULL;
//  jobject instance_fd = (*env)->NewObject(env, class_fd, constructor_fd);
//
//  jfieldID field_fd = (*env)->GetFieldID(env, class_fd, "fd", "I");
//  if (field_fd == NULL) return NULL;
//  (*env)->SetIntField(env, instance_fd, field_fd, stdoutno);
//
//  return instance_fd;
//}

JNIEXPORT jint JNICALL Java_JniStdio_BUFSIZ(JNIEnv *env, jclass cls) {
  return BUFSIZ;
}

JNIEXPORT jint JNICALL Java_JniStdio_EOF(JNIEnv *env, jclass cls) {
  return EOF;
}

JNIEXPORT jint JNICALL Java_JniStdio_FOPEN_1MAX(JNIEnv *env, jclass cls) {
  return FOPEN_MAX;
}

JNIEXPORT jint JNICALL Java_JniStdio_FILENAME_1MAX(JNIEnv *env, jclass cls) {
  return FILENAME_MAX;
}

JNIEXPORT jint JNICALL Java_JniStdio_SEEK_1SET(JNIEnv *env, jclass cls) {
  return SEEK_SET;
}

JNIEXPORT jint JNICALL Java_JniStdio_SEEK_1CUR(JNIEnv *env, jclass cls) {
  return SEEK_CUR;
}

JNIEXPORT jint JNICALL Java_JniStdio_SEEK_1END(JNIEnv *env, jclass cls) {
  return SEEK_END;
}

JNIEXPORT jint JNICALL Java_JniStdio_getc(JNIEnv *env, jclass cls) {
  return getchar();
}

JNIEXPORT jint JNICALL Java_JniStdio_putchar(JNIEnv *env, jclass cls, jint ch) {
  return putchar(ch);
}

JNIEXPORT jint JNICALL Java_JniStdio_puts(JNIEnv *env, jclass cls, jbyteArray src) {
  if (src == NULL) return -1;
  jbyte *s = (*env)->GetByteArrayElements(env, src, NULL);
  if (s == NULL) return -1;
  int r = puts((char *) s);
  (*env)->ReleaseByteArrayElements(env, src, s, JNI_ABORT);
  return r;
}
