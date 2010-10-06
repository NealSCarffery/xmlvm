#ifndef __ORG_XMLVM_IPHONE_NSHTTPURLRESPONSEHOLDER__
#define __ORG_XMLVM_IPHONE_NSHTTPURLRESPONSEHOLDER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
// Class declarations for org.xmlvm.iphone.NSHTTPURLResponseHolder
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSHTTPURLResponseHolder, 14)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSHTTPURLResponseHolder
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_NSHTTPURLResponseHolder \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_NSHTTPURLResponseHolder \
    } org_xmlvm_iphone_NSHTTPURLResponseHolder

struct org_xmlvm_iphone_NSHTTPURLResponseHolder {
    __CLASS_DEFINITION_org_xmlvm_iphone_NSHTTPURLResponseHolder* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSHTTPURLResponseHolder;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSHTTPURLResponseHolder
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSHTTPURLResponseHolder
typedef struct org_xmlvm_iphone_NSHTTPURLResponseHolder org_xmlvm_iphone_NSHTTPURLResponseHolder;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSHTTPURLResponseHolder 14

void __INIT_org_xmlvm_iphone_NSHTTPURLResponseHolder();
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSHTTPURLResponseHolder();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSHTTPURLResponseHolder();
void org_xmlvm_iphone_NSHTTPURLResponseHolder___INIT___(JAVA_OBJECT me);

#endif