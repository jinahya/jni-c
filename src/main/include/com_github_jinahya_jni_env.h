#include <jni.h>

#ifndef COM_GITHUB_JINAHUA_JNI_ENV_H
#define COM_GITHUB_JINAHUA_JNI_ENV_H

#ifdef __cplusplus
extern "C" {
#endif

  // --------------------------------------------------------------- AllocObject
  jobject JNE_AllocObject_Cn(JNIEnv *, const char *);

  // ------------------------------------------------------- AttachCurrentThread

  // ---------------------------------------------------------- Call<Type>Method
  //void CallVoidMethodMnMs(JNIEnv *, jobject, char *, char *, ...);


  // -------------------------------------------------------- Call<Type>MethodA
  void JNE_CallVoidMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jobject JNE_CallObjectMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jboolean JNE_CallBooleanMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jbyte JNE_CallByteMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jchar JNE_CallCharMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jshort JNE_CallShortMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jint JNE_CallIntMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jlong JNE_CallLongMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jfloat JNE_CallFloatMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);
  jdouble JNE_CallDoubleMethodA_Mn_Ms(JNIEnv *, jobject, char *, char *, jvalue *);

  // -------------------------------------------------------- Call<Type>MethodV
  // ----------------------------------------------- CallNonvirtual<Type>Method
  // ---------------------------------------------- CallNonvirtual<Type>MethodA
  // ---------------------------------------------- CallNonvirtual<Type>MethodV
  // --------------------------------------------------- CallStatic<Type>Method

  // --------------------------------------------------- CallStatic<Type>MethodA
  void JNE_CallStaticVoidMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jobject JNE_CallStaticObjectMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jboolean JNE_CallStaticBooleanMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jbyte JNE_CallStaticByteMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jchar JNE_CallStaticCharMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jshort JNE_CallStaticShortMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jint JNE_CallStaticIntMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jlong JNE_CallStaticLongMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jfloat JNE_CallStaticFloatMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);
  jdouble JNE_CallStaticDoubleMethodA_Cn_Mn_Ms(JNIEnv *, const char *, const char *, const char *, jvalue *);

  void JNE_CallStaticVoidMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jobject JNE_CallStaticObjectMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jboolean JNE_CallStaticBooleanMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jbyte JNE_CallStaticByteMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jchar JNE_CallStaticCharMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jshort JNE_CallStaticShortMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jint JNE_CallStaticIntMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jlong JNE_CallStaticLongMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jfloat JNE_CallStaticFloatMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);
  jdouble JNE_CallStaticDoubleMethodA_Mn_Ms(JNIEnv *, jclass, const char *, const char *, jvalue *);

  // --------------------------------------------------- CallStatic<Type>MethodV


  // ------------------------------------------------------------ Get<Type>Field

  jobject JNE_GetObjectField_Fn_Fs(JNIEnv *, const jobject, const char *, const char *);
  jobject JNE_GetObjectField_Fn(JNIEnv *, const jobject, const char *);
  jboolean JNE_GetBooleanField_Fn(JNIEnv *, const jobject, const char *);
  jbyte JNE_GetByteField_Fn(JNIEnv *, const jobject, const char *);
  jchar JNE_GetCharField_Fn(JNIEnv *, const jobject, const char *);
  jshort JNE_GetShortField_Fn(JNIEnv *, const jobject, const char *);
  jint JNE_GetIntField_Fn(JNIEnv *, const jobject, const char *);
  jlong JNE_GetLongField_Fn(JNIEnv *, const jobject, const char *);
  jfloat JNE_GetFloatField_Fn(JNIEnv *, const jobject, const char *);
  jdouble JNE_GetDoubleField_Fn(JNIEnv *, const jobject, const char *);


  // ------------------------------------------------------ GetStatic<Type>Field

  jobject JNE_GetStaticObjectField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  //jboolean JNE_GetStaticBooleanField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jboolean JNE_GetStaticBooleanField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jbyte JNE_GetStaticByteField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jchar JNE_GetStaticCharField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jshort JNE_GetStaticShortField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jint JNE_GetStaticIntField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jlong JNE_GetStaticLongField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jfloat JNE_GetStaticFloatField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jdouble JNE_GetStaticDoubleField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);


  // ------------------------------------------------------------ Set<Type>Field

  void JNE_SetObjectField_Fn_Fs(JNIEnv *, const jobject, const char *, const char *, const jobject);
  void JNE_SetObjectField_Fn(JNIEnv *, const jobject, const char *, const jobject);
  void JNE_SetBooleanField_Fn(JNIEnv *, const jobject, const char *, const jboolean);
  void JNE_SetByteField_Fn(JNIEnv *, const jobject, const char *, const jbyte);
  void JNE_SetCharField_Fn(JNIEnv *, const jobject, const char *, const jchar);
  void JNE_SetShortField_Fn(JNIEnv *, const jobject, const char *, const jshort);
  void JNE_SetIntField_Fn(JNIEnv *, const jobject, const char *, const jint);
  void JNE_SetLongField_Fn(JNIEnv *, const jobject, const char *, const jlong);
  void JNE_SetFloatField_Fn(JNIEnv *, const jobject, const char *, const jfloat);
  void JNE_SetDoubleField_Fn(JNIEnv *, const jobject, const char *, const jdouble);


  // ------------------------------------------------------ SetStatic<Type>Field

  void JNE_SetStaticObjectField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *, const jobject);
  void JNE_SetStaticObjectField_Cn_Fn(JNIEnv *, const char *, const char *, const jobject);
  void JNE_SetStaticBooleanField_Cn_Fn(JNIEnv *, const char *, const char *, const jboolean);
  void JNE_SetStaticByteField_Cn_Fn(JNIEnv *, const char *, const char *, const jbyte);
  void JNE_SetStaticCharField_Cn_Fn(JNIEnv *, const char *, const char *, const jchar);
  void JNE_SetStaticShortField_Cn_Fn(JNIEnv *, const char *, const char *, const jshort);
  void JNE_SetStaticIntField_Cn_Fn(JNIEnv *, const char *, const char *, const jint);
  void JNE_SetStaticLongField_Cn_Fn(JNIEnv *, const char *, const char *, const jlong);
  void JNE_SetStaticFloatField_Cn_Fn(JNIEnv *, const char *, const char *, const jfloat);
  void JNE_SetStaticDoubleField_Cn_Fn(JNIEnv *, const char *, const char *, const jdouble);


  // ------------------------------------------------------------------ ThrowNew
  jint JNE_ThrowNew_Cn(JNIEnv *env, const char * cname, const char * message);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_ENV_H */