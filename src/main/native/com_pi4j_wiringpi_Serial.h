/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Serial */

#ifndef _Included_com_pi4j_wiringpi_Serial
#define _Included_com_pi4j_wiringpi_Serial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialOpen
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialOpen
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialFlush
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialFlush
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialPutchar
 * Signature: (IC)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialPutchar
  (JNIEnv *, jclass, jint, jchar);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialPuts
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Serial_serialPuts
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialDataAvail
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialDataAvail
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Serial
 * Method:    serialGetchar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Serial_serialGetchar
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif