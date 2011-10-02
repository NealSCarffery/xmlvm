#ifndef __ORG_XMLVM_IPHONE_GKSESSION__
#define __ORG_XMLVM_IPHONE_GKSESSION__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKDataReceiveHandler
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKDataReceiveHandler
XMLVM_FORWARD_DECL(org_xmlvm_iphone_GKDataReceiveHandler)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSessionDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSessionDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_GKSessionDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSErrorHolder
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSErrorHolder
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSErrorHolder)
#endif
// Class declarations for org.xmlvm.iphone.GKSession
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_GKSession, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_GKSession)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSession;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSession_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSession_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_GKSession_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKSession
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_GKSession \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_GKSession \
    } org_xmlvm_iphone_GKSession

struct org_xmlvm_iphone_GKSession {
    __TIB_DEFINITION_org_xmlvm_iphone_GKSession* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_GKSession;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_GKSession
typedef struct org_xmlvm_iphone_GKSession org_xmlvm_iphone_GKSession;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_GKSession 7

void __INIT_org_xmlvm_iphone_GKSession();
void __INIT_IMPL_org_xmlvm_iphone_GKSession();
void __DELETE_org_xmlvm_iphone_GKSession(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_GKSession(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_GKSession();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_GKSession();
void org_xmlvm_iphone_GKSession___INIT____java_lang_String_java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_INT n3);
JAVA_OBJECT org_xmlvm_iphone_GKSession_getDelegate__(JAVA_OBJECT me);
void org_xmlvm_iphone_GKSession_setDelegate___org_xmlvm_iphone_GKSessionDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN org_xmlvm_iphone_GKSession_isAvailable__(JAVA_OBJECT me);
void org_xmlvm_iphone_GKSession_setAvailable___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
JAVA_DOUBLE org_xmlvm_iphone_GKSession_getDisconnectTimeout__(JAVA_OBJECT me);
void org_xmlvm_iphone_GKSession_setDisconnectTimeout___double(JAVA_OBJECT me, JAVA_DOUBLE n1);
JAVA_OBJECT org_xmlvm_iphone_GKSession_getDisplayName__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_GKSession_getPeerID__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_GKSession_getSessionID__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_GKSession_getSessionMode__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_GKSession_peersWithConnectionState___int(JAVA_OBJECT me, JAVA_INT n1);
JAVA_OBJECT org_xmlvm_iphone_GKSession_displayNameForPeer___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_GKSession_connectToPeer___java_lang_String_double(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_DOUBLE n2);
void org_xmlvm_iphone_GKSession_cancelConnectToPeer___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN org_xmlvm_iphone_GKSession_acceptConnectionFromPeer___java_lang_String_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void org_xmlvm_iphone_GKSession_denyConnectionFromPeer___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_GKSession_setDataReceiveHandler___org_xmlvm_iphone_GKDataReceiveHandler_java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_BOOLEAN org_xmlvm_iphone_GKSession_sendData___org_xmlvm_iphone_NSData_java_util_ArrayList_int_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_INT n3, JAVA_OBJECT n4);
JAVA_BOOLEAN org_xmlvm_iphone_GKSession_sendDataToAllPeers___org_xmlvm_iphone_NSData_int_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3);
void org_xmlvm_iphone_GKSession_disconnectFromAllPeers__(JAVA_OBJECT me);
void org_xmlvm_iphone_GKSession_disconnectPeerFromAllPeers___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);

#endif
