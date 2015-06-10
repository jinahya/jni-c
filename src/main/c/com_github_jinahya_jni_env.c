#include <jni.h>
#include "com_github_jinahya_jni_env.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ----------------------------------------------------------------- AllocObject

jobject JNE_AllocObject_Cn(JNIEnv * env, const char * cname) {
  jobject result = 0;
  jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    result = (*env)->AllocObject(env, clazz);
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

// --------------------------------------------------------- AttachCurrentThread


// ----------------------------------------------------------- Call<Type>Method

// ---------------------------------------------------------- Call<Type>MethodA

void JNE_CallVoidMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    (*env)->CallVoidMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

jobject JNE_CallObjectdMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jobject result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallObjectMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jboolean JNE_CallBooleanMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jboolean result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallBooleanMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jbyte JNE_CallByteMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jbyte result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallByteMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jchar JNE_CallCharMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jchar result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallCharMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jshort JNE_CallShortMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jshort result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallShortMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jint JNE_CallIntMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jint result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallIntMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jlong JNE_CallLongMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jlong result = 0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallLongMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jfloat JNE_CallFloatMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jfloat result = .0f;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallFloatMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jdouble JNE_CallDoubleMethodA_Mn_Ms(JNIEnv * env, jobject obj, char * mname, char * msig, jvalue * args) {
  jdouble result = .0;
  jclass clazz = (*env)->GetObjectClass(env, obj);
  jmethodID methodID = (*env)->GetMethodID(env, clazz, mname, msig);
  if (methodID == NULL) {
    result = (*env)->CallDoubleMethod(env, obj, methodID, args);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

// ----------------------------------------------------- CallStatic<Type>MethodA

void JNE_CallStaticVoidMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      (*env)->CallStaticVoidMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

jobject JNE_CallStaticObjectMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jobject result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticObjectMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jboolean JNE_CallStaticBooleanMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jboolean result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticBooleanMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jbyte JNE_CallStaticByteMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jbyte result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticByteMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jchar JNE_CallStaticCharMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jchar result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticCharMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jshort JNE_CallStaticShortMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jshort result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticShortMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jint JNE_CallStaticIntMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jint result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticIntMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jlong JNE_CallStaticLongMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jlong result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticLongMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jfloat JNE_CallStaticFloatMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jfloat result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticFloatMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jdouble JNE_CallStaticDoubleMethodA_Cn_Mn_Ms(JNIEnv * env, const char * cname, const char * mname, const char * msig, jvalue * args) {
  jdouble result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
    if (methodID != NULL) {
      result = (*env)->CallStaticDoubleMethodA(env, clazz, methodID, args);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

void JNE_CallStaticVoidMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    (*env)->CallStaticVoidMethodA(env, clazz, methodID, args);
  }
}

jobject JNE_CallStaticObjectMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jobject result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticObjectMethodA(env, clazz, methodID, args);
  }
  return result;
}

jboolean JNE_CallStaticBooleanMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jboolean result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticBooleanMethodA(env, clazz, methodID, args);
  }
  return result;
}

jbyte JNE_CallStaticByteMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jbyte result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticByteMethodA(env, clazz, methodID, args);
  }
  return result;
}

jchar JNE_CallStaticCharMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jchar result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticCharMethodA(env, clazz, methodID, args);
  }
  return result;
}

jshort JNE_CallStaticShortMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jshort result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticShortMethodA(env, clazz, methodID, args);
  }
  return result;
}

jint JNE_CallStaticIntMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jint result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticIntMethodA(env, clazz, methodID, args);
  }
  return result;
}

jlong JNE_CallStaticLongMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jlong result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticLongMethodA(env, clazz, methodID, args);
  }
  return result;
}

jfloat JNE_CallStaticFloatMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jfloat result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticFloatMethodA(env, clazz, methodID, args);
  }
  return result;
}

jdouble JNE_CallStaticDoubleMethodA_Mn_Ms(JNIEnv * env, jclass clazz, const char * mname, const char * msig, jvalue * args) {
  jdouble result = 0;
  const jmethodID methodID = (*env)->GetStaticMethodID(env, clazz, mname, msig);
  if (methodID != NULL) {
    result = (*env)->CallStaticDoubleMethodA(env, clazz, methodID, args);
  }
  return result;
}






// -------------------------------------------------------- GetStatic<Type>Field

jobject JNE_GetStaticObjectField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jobject result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticObjectField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jboolean JNE_GetStaticBooleanField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jboolean result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticBooleanField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jbyte JNE_GetStaticByteField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jbyte result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticByteField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jchar JNE_GetStaticCharField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jchar result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticCharField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jshort JNE_GetStaticShortField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jshort result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticShortField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jint JNE_GetStaticIntField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jint result = 0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticIntField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jlong JNE_GetStaticLongField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jlong result = 0L;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticLongField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jfloat JNE_GetStaticFloatField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jfloat result = .0f;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticFloatField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}

jdouble JNE_GetStaticDoubleField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig) {
  jdouble result = .0;
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      result = (*env)->GetStaticDoubleField(env, NULL, fieldID);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
  return result;
}
