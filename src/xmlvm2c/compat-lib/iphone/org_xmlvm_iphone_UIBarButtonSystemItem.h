#ifndef __ORG_XMLVM_IPHONE_UIBARBUTTONSYSTEMITEM__
#define __ORG_XMLVM_IPHONE_UIBARBUTTONSYSTEMITEM__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UIBarButtonSystemItem
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIBarButtonSystemItem, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UIBarButtonSystemItem)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIBarButtonSystemItem;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIBarButtonSystemItem_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIBarButtonSystemItem_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UIBarButtonSystemItem_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIBarButtonSystemItem
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIBarButtonSystemItem \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIBarButtonSystemItem \
    } org_xmlvm_iphone_UIBarButtonSystemItem

struct org_xmlvm_iphone_UIBarButtonSystemItem {
    __TIB_DEFINITION_org_xmlvm_iphone_UIBarButtonSystemItem* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIBarButtonSystemItem;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIBarButtonSystemItem
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIBarButtonSystemItem
typedef struct org_xmlvm_iphone_UIBarButtonSystemItem org_xmlvm_iphone_UIBarButtonSystemItem;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIBarButtonSystemItem 6

void __INIT_org_xmlvm_iphone_UIBarButtonSystemItem();
void __INIT_IMPL_org_xmlvm_iphone_UIBarButtonSystemItem();
void __DELETE_org_xmlvm_iphone_UIBarButtonSystemItem(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UIBarButtonSystemItem(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIBarButtonSystemItem();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIBarButtonSystemItem();
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Done();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Done(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Cancel();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Cancel(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Edit();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Edit(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Save();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Save(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Add();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Add(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_FlexibleSpace();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_FlexibleSpace(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_FixedSpace();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_FixedSpace(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Compose();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Compose(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Reply();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Reply(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Action();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Action(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Organize();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Organize(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Bookmarks();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Bookmarks(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Search();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Search(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Refresh();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Refresh(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Stop();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Stop(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Camera();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Camera(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Trash();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Trash(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Play();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Play(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Pause();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Pause(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Rewind();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Rewind(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_FastForward();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_FastForward(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Undo();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Undo(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIBarButtonSystemItem_GET_Redo();
void org_xmlvm_iphone_UIBarButtonSystemItem_PUT_Redo(JAVA_INT v);

#endif
