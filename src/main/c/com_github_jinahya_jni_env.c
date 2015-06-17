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

























// -------------------------------------------------------------- Get<Type>Field

jobject JNE_GetObjectField_Fn_Fs(JNIEnv * env, const jobject obj, const char * fname, const char * fsig) {
  jobject result = NULL;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, fsig);
  if (fieldID != NULL) {
    result = (*env)->GetObjectField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jobject JNE_GetObjectField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  return JNE_GetObjectField_Fn_Fs(env, obj, fname, "Ljava/lang/Object;");
}

jboolean JNE_GetBooleanField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jboolean result = 0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "Z");
  if (fieldID != NULL) {
    result = (*env)->GetBooleanField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jbyte JNE_GetByteField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jbyte result = 0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "B");
  if (fieldID != NULL) {
    result = (*env)->GetByteField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jchar JNE_GetCharField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jchar result = 0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "C");
  if (fieldID != NULL) {
    result = (*env)->GetCharField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jshort JNE_GetShortField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jshort result = 0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "S");
  if (fieldID != NULL) {
    result = (*env)->GetShortField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jint JNE_GetIntField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jint result = 0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "I");
  if (fieldID != NULL) {
    result = (*env)->GetIntField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jlong JNE_GetLongField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jlong result = 0L;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "J");
  if (fieldID != NULL) {
    result = (*env)->GetLongField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jfloat JNE_GetFloatField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jfloat result = .0f;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "F");
  if (fieldID != NULL) {
    result = (*env)->GetFloatField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}

jdouble JNE_GetDoubleField_Fn(JNIEnv * env, const jobject obj, const char * fname) {
  jdouble result = .0;
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "D");
  if (fieldID != NULL) {
    result = (*env)->GetDoubleField(env, obj, fieldID);
  }
  (*env)->DeleteLocalRef(env, clazz);
  return result;
}







// -------------------------------------------------------------- Set<Type>Field

void JNE_SetObjectField_Fn_Fs(JNIEnv * env, const jobject obj, const char * fname, const char * fsig, jobject value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, fsig);
  if (fieldID != NULL) {
    (*env)->SetObjectField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetObjectField_Fn(JNIEnv * env, const jobject obj, const char * fname, jobject value) {
  JNE_SetObjectField_Fn_Fs(env, obj, fname, "Ljava/lang/Object;", value);
}

void JNE_SetBooleanField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jboolean value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "Z");
  if (fieldID != NULL) {
    (*env)->SetBooleanField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetByteField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jbyte value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "B");
  if (fieldID != NULL) {
    (*env)->SetByteField(env, clazz, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetCharField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jchar value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "C");
  if (fieldID != NULL) {
    (*env)->SetCharField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetShortField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jshort value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "S");
  if (fieldID != NULL) {
    (*env)->SetShortField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetIntField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jint value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "I");
  if (fieldID != NULL) {
    (*env)->SetIntField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetLongField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jlong value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "J");
  if (fieldID != NULL) {
    (*env)->SetLongField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetFloatField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jfloat value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "F");
  if (fieldID != NULL) {
    (*env)->SetFloatField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}

void JNE_SetDoubleField_Fn(JNIEnv * env, const jobject obj, const char * fname, const jdouble value) {
  const jclass clazz = (*env)->GetObjectClass(env, obj);
  const jfieldID fieldID = (*env)->GetFieldID(env, clazz, fname, "D");
  if (fieldID != NULL) {
    (*env)->SetDoubleField(env, obj, fieldID, value);
  }
  (*env)->DeleteLocalRef(env, clazz);
}











// -------------------------------------------------------- SetStatic<Type>Field

void JNE_SetStaticObjectField_Cn_Fn_Fs(JNIEnv * env, const char * cname, const char * fname, const char * fsig, jobject value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, fsig);
    if (fieldID != NULL) {
      (*env)->SetStaticObjectField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticObjectField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, jobject value) {
  JNE_SetStaticObjectField_Cn_Fn_Fs(env, cname, fname, "Ljava/lang/Object;", value);
}

void JNE_SetStaticBooleanField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jboolean value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "Z");
    if (fieldID != NULL) {
      (*env)->SetStaticBooleanField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticByteField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jbyte value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "B");
    if (fieldID != NULL) {
      (*env)->SetStaticByteField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticCharField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jchar value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "C");
    if (fieldID != NULL) {
      (*env)->SetStaticCharField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticShortField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jshort value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "S");
    if (fieldID != NULL) {
      (*env)->SetStaticShortField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticIntField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jint value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "I");
    if (fieldID != NULL) {
      (*env)->SetStaticIntField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticLongField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jlong value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "J");
    if (fieldID != NULL) {
      (*env)->SetStaticLongField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticFloatField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jfloat value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "F");
    if (fieldID != NULL) {
      (*env)->SetStaticFloatField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}

void JNE_SetStaticDoubleField_Cn_Fn(JNIEnv * env, const char * cname, const char * fname, const jdouble value) {
  const jclass clazz = (*env)->FindClass(env, cname);
  if (clazz != NULL) {
    const jfieldID fieldID = (*env)->GetStaticFieldID(env, clazz, fname, "D");
    if (fieldID != NULL) {
      (*env)->SetStaticDoubleField(env, clazz, fieldID, value);
    }
    (*env)->DeleteLocalRef(env, clazz);
  }
}
