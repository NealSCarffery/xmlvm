#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIViewController.h"
#include "org_xmlvm_iphone_UIViewController.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationControllerDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIViewController)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIViewController
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIViewController)
#endif
// Class declarations for org.xmlvm.iphone.UINavigationController
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationController, 80, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UINavigationController)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_3ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UINavigationController_1ARRAY;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController \
    __INSTANCE_FIELDS_org_xmlvm_iphone_UIViewController; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController \
    } org_xmlvm_iphone_UINavigationController

struct org_xmlvm_iphone_UINavigationController {
    __TIB_DEFINITION_org_xmlvm_iphone_UINavigationController* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UINavigationController;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
typedef struct org_xmlvm_iphone_UINavigationController org_xmlvm_iphone_UINavigationController;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationController 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_requestInternalFrame__ 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getTopViewController__ 61
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getVisibleViewController__ 62
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getViewControllers__ 63
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList 64
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean 65
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean 66
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean 67
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean 68
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean 69
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__ 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getNavigationBar__ 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isToolbarHidden__ 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getToolbar__ 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getDelegate__ 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_loadView__ 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_updateViews__ 22

void __INIT_org_xmlvm_iphone_UINavigationController();
void __INIT_IMPL_org_xmlvm_iphone_UINavigationController();
void __DELETE_org_xmlvm_iphone_UINavigationController(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UINavigationController();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UINavigationController();
void org_xmlvm_iphone_UINavigationController___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_UINavigationController___INIT____org_xmlvm_iphone_UIViewController(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 21
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_requestInternalFrame__(JAVA_OBJECT me);
// Vtable index: 61
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getTopViewController__(JAVA_OBJECT me);
// Vtable index: 62
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getVisibleViewController__(JAVA_OBJECT me);
// Vtable index: 63
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getViewControllers__(JAVA_OBJECT me);
// Vtable index: 64
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 65
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 66
void org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 67
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 68
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 69
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 70
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__(JAVA_OBJECT me);
// Vtable index: 71
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 72
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 73
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getNavigationBar__(JAVA_OBJECT me);
// Vtable index: 74
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isToolbarHidden__(JAVA_OBJECT me);
// Vtable index: 75
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 76
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 77
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getToolbar__(JAVA_OBJECT me);
// Vtable index: 78
void org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 79
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getDelegate__(JAVA_OBJECT me);
// Vtable index: 16
void org_xmlvm_iphone_UINavigationController_loadView__(JAVA_OBJECT me);
// Vtable index: 22
void org_xmlvm_iphone_UINavigationController_updateViews__(JAVA_OBJECT me);

#endif
