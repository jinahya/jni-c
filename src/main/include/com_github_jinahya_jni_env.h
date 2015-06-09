#include <jni.h>

#ifndef COM_GITHUB_JINAHUA_JNI_ENV_H
#define COM_GITHUB_JINAHUA_JNI_ENV_H

#ifdef __cplusplus
extern "C" {
#endif

  // --------------------------------------------------------------- AllocObject
  jobject AllocObjectCn(JNIEnv *, const char *);

  // ------------------------------------------------------- AttachCurrentThread

  // ---------------------------------------------------------- Call<Type>Method
  //void CallVoidMethodMnMs(JNIEnv *, jobject, char *, char *, ...);


  // --------------------------------------------------------- Call<Type>MethodA
  void CallVoidMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jobject CallObjectMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jboolean CallBooleanMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jbyte CallByteMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jchar CallCharMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jshort CallShortMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jint CallIntMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jlong CallLongMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jfloat CallFloatMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);
  jdouble CallDoubleMethodANmMs(JNIEnv *, jobject, char *, char *, jvalue *);

  // ------------------------------------------------------ GetStatic<Type>Field

  jobject GetStaticObjectFieldCnFnFs(JNIEnv *, const char *, const char *, const char *);

  jboolean GetStaticBooleanFieldCnFnFs(JNIEnv *, const char *, const char *, const char *);

#ifdef __cplusplus
}
#endif

#endif /* COM_GITHUB_JINAHUA_JNI_ENV_H */