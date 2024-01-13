/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_library_gpiod_internal_GpioD */

#ifndef _Included_com_pi4j_library_gpiod_internal_GpioD
#define _Included_com_pi4j_library_gpiod_internal_GpioD
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_open
 * Signature: (Ljava/lang/String;)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1open
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_label
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1label
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_num_lines
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1num_1lines
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_get_line
 * Signature: (JI)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1get_1line
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_get_lines
 * Signature: (J[IIJ)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1get_1lines
  (JNIEnv *, jclass, jlong, jintArray, jint, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_get_all_lines
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1get_1all_1lines
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_find_line
 * Signature: (JLjava/lang/String;)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1find_1line
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bulk_free
 * Signature: (J)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bulk_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_bulk_init
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1bulk_1init
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bulk_new
 * Signature: ()Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bulk_1new
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bulk_add
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bulk_1add
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bulk_get_line
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bulk_1get_1line
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bulk_num_lines
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bulk_1num_1lines
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_offset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1offset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_consumer
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1consumer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_direction
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1direction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_active_state
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1active_1state
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_bias
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1bias
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_is_used
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1is_1used
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_is_open_drain
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1is_1open_1drain
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_is_open_source
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1is_1open_1source
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_update
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1update
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_needs_update
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1needs_1update
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_input
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1input
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_output
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1output
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_rising_edge_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1rising_1edge_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_falling_edge_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1falling_1edge_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_both_edges_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1both_1edges_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_input_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1input_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_output_flags
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1output_1flags
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_rising_edge_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1rising_1edge_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_falling_edge_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1falling_1edge_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_both_edges_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1both_1edges_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk
 * Signature: (JJ[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk
  (JNIEnv *, jclass, jlong, jlong, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_input
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1input
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_output
 * Signature: (JLjava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1output
  (JNIEnv *, jclass, jlong, jstring, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_rising_edge_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1rising_1edge_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_falling_edge_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1falling_1edge_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_both_edges_events
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1both_1edges_1events
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_input_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1input_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_output_flags
 * Signature: (JLjava/lang/String;I[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1output_1flags
  (JNIEnv *, jclass, jlong, jstring, jint, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_rising_edge_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1rising_1edge_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_falling_edge_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1falling_1edge_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_request_bulk_both_edges_events_flags
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1request_1bulk_1both_1edges_1events_1flags
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1release
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_release_bulk
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1release_1bulk
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_is_requested
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1is_1requested
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_is_free
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1is_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_get_value
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1get_1value
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_get_value_bulk
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1get_1value_1bulk
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_value
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1value
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_value_bulk
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1value_1bulk
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_config
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1config
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_config_bulk
 * Signature: (JII[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1config_1bulk
  (JNIEnv *, jclass, jlong, jint, jint, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_flags
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1flags
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_flags_bulk
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1flags_1bulk
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_direction_input
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1direction_1input
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_direction_input_bulk
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1direction_1input_1bulk
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_direction_output
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1direction_1output
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_set_direction_output_bulk
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1set_1direction_1output_1bulk
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_wait
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1wait
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_wait_bulk
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1wait_1bulk
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_read
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1read
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_read_multiple
 * Signature: (J[JI)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1read_1multiple
  (JNIEnv *, jclass, jlong, jlongArray, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_get
 * Signature: (Ljava/lang/String;I)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1get
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_find
 * Signature: (Ljava/lang/String;)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1find
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_close_chip
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1close_1chip
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_get_chip
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1get_1chip
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_chip_iter_new
 * Signature: ()Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1chip_1iter_1new
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_iter_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1iter_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_iter_free_noclose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1iter_1free_1noclose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_iter_next
 * Signature: (J)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1iter_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_chip_iter_next_noclose
 * Signature: (J)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1chip_1iter_1next_1noclose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_iter_new
 * Signature: (J)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1iter_1new
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_iter_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1iter_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    gpiod_line_iter_next
 * Signature: (J)Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_gpiod_1line_1iter_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_get_timespec
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1get_1timespec
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_get_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1get_1type
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_new
 * Signature: ()Ljava/lang/Long;
 */
JNIEXPORT jobject JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1new
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_line_event_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1line_1event_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_library_gpiod_internal_GpioD
 * Method:    c_gpiod_version_string
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_pi4j_library_gpiod_internal_GpioD_c_1gpiod_1version_1string
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
