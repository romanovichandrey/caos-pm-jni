//
// Created by romanovich_ag@BYTECHS.BY on 21.07.20.
//

#include <iostream>
#include "JNIHelloWorld.h"

JNIEXPORT void JNICALL Java_by_bytechs_jni_JNIHelloWorld_printHelloWorld
        (JNIEnv *, jobject) {
    std::cout << "Hello world!";
}

JNIEXPORT jint JNICALL Java_by_bytechs_jni_JNIHelloWorld_multiply
        (JNIEnv *env, jobject obj, jint a, jint b) {
    return a * b;
}

JNIEXPORT jstring JNICALL Java_by_bytechs_jni_JNIHelloWorld_getLine
        (JNIEnv *env, jobject obj, jstring prompt) {
    char buf[128];
    const char *str;
    str = (*env).GetStringUTFChars(prompt, NULL);
    if (str == NULL) {
        return NULL; /* OutOfMemoryError already thrown */
    }
    int i = printf("%s", str);
    (*env).ReleaseStringUTFChars(prompt, str);
/* We assume here that the user does not type more than
* 127 characters */
    scanf("%s", buf);
    return (*env).NewStringUTF(buf);
}
