#ifndef __ORG_XMLVM_IPHONE_UIPREFERENCESTABLE__
#define __ORG_XMLVM_IPHONE_UIPREFERENCESTABLE__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIView.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTableDataSource
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTableDataSource
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIPreferencesTableDataSource)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIView
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIView)
#endif
// Class declarations for org.xmlvm.iphone.UIPreferencesTable
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIPreferencesTable, 71)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UIPreferencesTable
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_UIPreferencesTable \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UIView; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UIPreferencesTable \
    } org_xmlvm_iphone_UIPreferencesTable

struct org_xmlvm_iphone_UIPreferencesTable {
    __CLASS_DEFINITION_org_xmlvm_iphone_UIPreferencesTable* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UIPreferencesTable;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTable
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIPreferencesTable
typedef struct org_xmlvm_iphone_UIPreferencesTable org_xmlvm_iphone_UIPreferencesTable;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIPreferencesTable 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTable_setDataSource___org_xmlvm_iphone_UIPreferencesTableDataSource 69
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UIPreferencesTable_getDataSource__ 70

void __INIT_org_xmlvm_iphone_UIPreferencesTable();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIPreferencesTable();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIPreferencesTable();
void org_xmlvm_iphone_UIPreferencesTable___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 69
void org_xmlvm_iphone_UIPreferencesTable_setDataSource___org_xmlvm_iphone_UIPreferencesTableDataSource(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 70
JAVA_OBJECT org_xmlvm_iphone_UIPreferencesTable_getDataSource__(JAVA_OBJECT me);

#endif
