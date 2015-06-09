#include <jni.h>
#include "com_github_jinahya_jni_util.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

jobject JNI_GetStaticObjectField_CN_FN_FS(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jclass c = (*env)->FindClass(env, cname);
  if (c == NULL) {
    return NULL;
  }
  jfieldID f = (*env)->GetFieldID(env, c, fname, fsig);
  if (f == NULL) {
    return NULL;
  }
  return (*env)->GetStaticObjectField(env, NULL, f);
}

jboolean JNI_GetStaticBooleanField_CN_FN_FS(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jclass c = (*env)->FindClass(env, cname);
  if (c == NULL) {
    return NULL;
  }
  jfieldID f = (*env)->GetFieldID(env, c, fname, fsig);
  if (f == NULL) {
    return NULL;
  }
  return (*env)->GetStaticBooleanField(env, NULL, f);
}