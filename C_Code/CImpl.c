#include <stdio.h>
#include "jnipackage_javaImpl.h"

JNIEXPORT void JNICALL Java_jnipackage_JavaImpl_printMsg
  (JNIEnv *env, jobject o, jstring rmsg){
  	
	  	const char *msg;
	  	// get pointer to fisrt string
	  	msg = (*env)->GetStringUTFChars(env, rmsg, NULL);
  		printf("%s\n", msg);
  	
  }
  
JNIEXPORT jint JNICALL Java_jnipackage_JavaImpl_getSquare
 (JNIEnv *env, jobject o, jint rnum){
  	// calculate and return squares
  	return rnum*rnum;
  	
 }
 
JNIEXPORT jintArray JNICALL Java_jnipackage_JavaImpl_getSquares
  (JNIEnv *env, jobject o, jintArray rnums){
  	
  	// gets pointer to first element
  	jint *num = (*env)->GetIntArrayElements(env, rnums,0); 
  	
  	// get length
	jsize length = (*env)->GetArrayLength(env, rnums);
  	
  	// create new array to store the squares
	jintArray snums;
	
	// assign memeory region
	(*env)->setIntArrayRegion(env, snums, 0, length, NULL);
  	
	// get pointer to start of array
	jint *snum = (*env)->GetIntarrayElements(env, snums,0);
  	
  	// calculate squares and store result
	int i=0;
  	for(i=0; i<length; i++){
  		*snum = (*num) * (*num);
	  }
  	// return calculated squares
  	return snums;
  	
  }

