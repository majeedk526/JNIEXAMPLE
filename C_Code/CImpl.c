#include <stdio.h>
#include "jnipackage_javaImpl.h"
#include <stdlib.h>

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
  	jint snum = rnum * rnum;	
  	return snum;
  	
 }
 
JNIEXPORT jintArray JNICALL Java_jnipackage_JavaImpl_getSquares
  (JNIEnv *env, jobject o, jintArray rnums){
  	
  	// gets pointer to first element
  	jint *num = (*env)->GetIntArrayElements(env, rnums,0); 
  	
  	// get length
	jsize length = (*env)->GetArrayLength(env, rnums);
  	
  	jint c_snums[length];
	// calculate squares and store result
	int i=0;
  	for(i=0; i<length; i++){
  		c_snums[i] = num[i] * num[i];
	  }
	
	// get pointer to start of array
	jintArray snums = (*env)->NewIntArray(env,length);
	(*env)->SetIntArrayRegion(env, snums, 0, length, c_snums);
  	
	//create new array to store the squares
	//jintArray snums = (*env)->NewIntArray(env, length);
  	
  	
  	// return calculated squares
  	return snums;
  	
  }

