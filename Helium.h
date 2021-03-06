/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Helium */

#ifndef _Included_Helium
#define _Included_Helium
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Helium
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_Helium_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Helium
 * Method:    insert
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_Helium_insert
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     Helium
 * Method:    exists
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_Helium_exists
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Helium
 * Method:    lookup
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Helium_lookup
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Helium
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Helium_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
