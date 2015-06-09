#include <jni.h>
#include "com_github_jinahya_jni_env.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ----------------------------------------------------------------- AllocObject

jobject AllocObjectCn(JNIEnv * env, const char * cname) {
  jclass c = (*env)->FindClass(env, cname);
  if (c == NULL) {
    return NULL;
  }
  return (*env)->AllocObject(env, c);
}

// --------------------------------------------------------- AttachCurrentThread


// ------------------------------------------------------------ Call<Type>Method

// ----------------------------------------------------------- Call<Type>MethodA

void CallVoidMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    (*env)->CallVoidMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

jobject CallObjectdMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jobject result = NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallObjectMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jboolean CallBooleanMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jboolean result = (jboolean) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallBooleanMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jbyte CallByteMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jbyte result = (jboolean) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallByteMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jchar CallCharMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jchar result = (jchar) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallCharMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jshort CallShortMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jshort result = (jshort) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallShortMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jint CallIntMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jint result = (jint) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallIntMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jlong CallLongMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jlong result = (jlong) NULL;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallLongMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jfloat CallFloatMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jfloat result = (jfloat) 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallFloatMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jdouble CallDoubleMethodAMmMs(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jdouble result = (jdouble) 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallDoubleMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}



// -------------------------------------------------------- GetStatic<Type>Field

jobject GetStaticObjectFieldCnFnFs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
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

jboolean GetStaticBooleanFieldCnFnFs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jclass c = (*env)->FindClass(env, cname);
  if (c == NULL) {
    return (jboolean) NULL;
  }
  jfieldID f = (*env)->GetFieldID(env, c, fname, fsig);
  if (f == NULL) {
    return (jboolean) NULL;
  }
  return (*env)->GetStaticBooleanField(env, NULL, f);
}