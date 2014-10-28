/******************************************************************************
 * Copyright (c) 2014 AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_allseen_sample_event_tester_BusHandler */

#ifndef _Included_org_allseen_sample_event_tester_BusHandler
#define _Included_org_allseen_sample_event_tester_BusHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_allseen_sample_event_tester_BusHandler
 * Method:    initialize
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_allseen_sample_event_tester_BusHandler_initialize
    (JNIEnv *, jobject, jstring);

JNIEXPORT void JNICALL Java_org_allseen_sample_event_tester_BusHandler_startRuleEngine
    (JNIEnv *, jobject);

/*
 * Class:     org_allseen_sample_event_tester_BusHandler
 * Method:    dointrospection
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)Ljava/langString;
 */
JNIEXPORT jstring JNICALL Java_org_allseen_sample_event_tester_BusHandler_doIntrospection
    (JNIEnv *, jobject, jstring, jstring, jint);

JNIEXPORT void JNICALL Java_org_allseen_sample_event_tester_BusHandler_introspectionDone
    (JNIEnv *, jobject, jint);

JNIEXPORT jboolean JNICALL Java_org_allseen_sample_event_tester_BusHandler_enableEvent
    (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring);

JNIEXPORT void JNICALL Java_org_allseen_sample_event_tester_BusHandler_callAction
    (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     org_allseen_sample_event_tester_BusHandler
 * Method:    shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_allseen_sample_event_tester_BusHandler_shutdown
    (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
