#ifndef __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__
#define __ORG_XMLVM_IPHONE_UINAVIGATIONCONTROLLER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_UIViewController.h"
#include "org_xmlvm_iphone_UIViewController.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIToolbar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIToolbar
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIToolbar)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationBar
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationBar)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationControllerDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UINavigationControllerDelegate)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
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
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UINavigationController, 84)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UIViewController; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController \
    } org_xmlvm_iphone_UINavigationController

struct org_xmlvm_iphone_UINavigationController {
    __CLASS_DEFINITION_org_xmlvm_iphone_UINavigationController* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_UINavigationController;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UINavigationController
typedef struct org_xmlvm_iphone_UINavigationController org_xmlvm_iphone_UINavigationController;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UINavigationController 84
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_requestInternalFrame__ 25
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getTopViewController__ 65
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getVisibleViewController__ 66
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getViewControllers__ 67
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList 68
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean 69
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean 70
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean 71
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean 72
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean 73
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__ 74
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean 75
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean 76
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getNavigationBar__ 77
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_isToolbarHidden__ 78
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean 79
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean 80
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getToolbar__ 81
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate 82
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_getDelegate__ 83
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_loadView__ 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_UINavigationController_updateViews__ 26

void __INIT_org_xmlvm_iphone_UINavigationController();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UINavigationController();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UINavigationController();
void org_xmlvm_iphone_UINavigationController___INIT____org_xmlvm_iphone_UIViewController(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 25
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_requestInternalFrame__(JAVA_OBJECT me);
// Vtable index: 65
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getTopViewController__(JAVA_OBJECT me);
// Vtable index: 66
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getVisibleViewController__(JAVA_OBJECT me);
// Vtable index: 67
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getViewControllers__(JAVA_OBJECT me);
// Vtable index: 68
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 69
void org_xmlvm_iphone_UINavigationController_setViewControllers___java_util_ArrayList_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 70
void org_xmlvm_iphone_UINavigationController_pushViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 71
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 72
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToRootViewControllerAnimated___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 73
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_popToViewController___org_xmlvm_iphone_UIViewController_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
// Vtable index: 74
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isNavigationBarHidden__(JAVA_OBJECT me);
// Vtable index: 75
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 76
void org_xmlvm_iphone_UINavigationController_setNavigationBarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 77
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getNavigationBar__(JAVA_OBJECT me);
// Vtable index: 78
JAVA_BOOLEAN org_xmlvm_iphone_UINavigationController_isToolbarHidden__(JAVA_OBJECT me);
// Vtable index: 79
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
// Vtable index: 80
void org_xmlvm_iphone_UINavigationController_setToolbarHidden___boolean_boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1, JAVA_BOOLEAN n2);
// Vtable index: 81
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getToolbar__(JAVA_OBJECT me);
// Vtable index: 82
void org_xmlvm_iphone_UINavigationController_setDelegate___org_xmlvm_iphone_UINavigationControllerDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 83
JAVA_OBJECT org_xmlvm_iphone_UINavigationController_getDelegate__(JAVA_OBJECT me);
// Vtable index: 20
void org_xmlvm_iphone_UINavigationController_loadView__(JAVA_OBJECT me);
// Vtable index: 26
void org_xmlvm_iphone_UINavigationController_updateViews__(JAVA_OBJECT me);

#endif
