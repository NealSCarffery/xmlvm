#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWCELLSELECTIONSTYLE__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWCELLSELECTIONSTYLE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UITableViewCellSelectionStyle
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewCellSelectionStyle, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UITableViewCellSelectionStyle)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSelectionStyle;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSelectionStyle_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSelectionStyle_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellSelectionStyle_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSelectionStyle
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSelectionStyle \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSelectionStyle \
    } org_xmlvm_iphone_UITableViewCellSelectionStyle

struct org_xmlvm_iphone_UITableViewCellSelectionStyle {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewCellSelectionStyle* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellSelectionStyle;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellSelectionStyle
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellSelectionStyle
typedef struct org_xmlvm_iphone_UITableViewCellSelectionStyle org_xmlvm_iphone_UITableViewCellSelectionStyle;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewCellSelectionStyle 6

void __INIT_org_xmlvm_iphone_UITableViewCellSelectionStyle();
void __INIT_IMPL_org_xmlvm_iphone_UITableViewCellSelectionStyle();
void __DELETE_org_xmlvm_iphone_UITableViewCellSelectionStyle(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UITableViewCellSelectionStyle(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewCellSelectionStyle();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewCellSelectionStyle();
JAVA_INT org_xmlvm_iphone_UITableViewCellSelectionStyle_GET_None();
void org_xmlvm_iphone_UITableViewCellSelectionStyle_PUT_None(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellSelectionStyle_GET_Blue();
void org_xmlvm_iphone_UITableViewCellSelectionStyle_PUT_Blue(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellSelectionStyle_GET_Gray();
void org_xmlvm_iphone_UITableViewCellSelectionStyle_PUT_Gray(JAVA_INT v);

#endif
