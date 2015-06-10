#include <jni.h>

#ifndef COM_GITHUB_JINAHUA_JNI_ENV_H
#define COM_GITHUB_JINAHUA_JNI_ENV_H

#ifdef __cplusplus
extern "C" {
#endif

  // --------------------------------------------------------------- AllocObject
  jobject JNE_AllocObject_Cn(JNIEnv *, const char *);

  // ------------------------------------------------------- AttachCurrentThread

  // --------------------------------------------------------- Call<Type>Method
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
  // -------------------------------------------------- CallStatic<Type>MethodA
  // -------------------------------------------------- CallStatic<Type>MethodV


  // ----------------------------------------------------- GetStatic<Type>Field

  jobject JNE_GetStaticObjectField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);

  jboolean JNE_GetStaticBooleanField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jboolean JNE_GetStaticBooleanField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jbyte JNE_GetStaticByteField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jchar JNE_GetStaticCharField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jshort JNE_GetStaticShortField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jint JNE_GetStaticIntField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jlong JNE_GetStaticLongField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jfloat JNE_GetStaticFloatField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);
  jdouble JNE_GetStaticDoubleField_Cn_Fn_Fs(JNIEnv *, const char *, const char *, const char *);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_ENV_H */