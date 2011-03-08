#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWSCROLLPOSITION__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWSCROLLPOSITION__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.UITableViewScrollPosition
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewScrollPosition, 11)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewScrollPosition;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewScrollPosition_ARRAYTYPE;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewScrollPosition
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewScrollPosition \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewScrollPosition \
    } org_xmlvm_iphone_UITableViewScrollPosition

struct org_xmlvm_iphone_UITableViewScrollPosition {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewScrollPosition* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewScrollPosition;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewScrollPosition
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewScrollPosition
typedef struct org_xmlvm_iphone_UITableViewScrollPosition org_xmlvm_iphone_UITableViewScrollPosition;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewScrollPosition 11

void __INIT_org_xmlvm_iphone_UITableViewScrollPosition();
void __DELETE_org_xmlvm_iphone_UITableViewScrollPosition(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UITableViewScrollPosition(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewScrollPosition();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewScrollPosition();
JAVA_INT org_xmlvm_iphone_UITableViewScrollPosition_GET_None();
void org_xmlvm_iphone_UITableViewScrollPosition_PUT_None(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewScrollPosition_GET_Top();
void org_xmlvm_iphone_UITableViewScrollPosition_PUT_Top(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewScrollPosition_GET_Middle();
void org_xmlvm_iphone_UITableViewScrollPosition_PUT_Middle(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewScrollPosition_GET_Bottom();
void org_xmlvm_iphone_UITableViewScrollPosition_PUT_Bottom(JAVA_INT v);

#endif
