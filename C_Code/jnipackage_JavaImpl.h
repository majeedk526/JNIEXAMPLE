/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jnipackage_JavaImpl */

#ifndef _Included_jnipackage_JavaImpl
#define _Included_jnipackage_JavaImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jnipackage_JavaImpl
 * Method:    printMsg
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jnipackage_JavaImpl_printMsg
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jnipackage_JavaImpl
 * Method:    getSquare
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jnipackage_JavaImpl_getSquare
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnipackage_JavaImpl
 * Method:    getSquares
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_jnipackage_JavaImpl_getSquares
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
