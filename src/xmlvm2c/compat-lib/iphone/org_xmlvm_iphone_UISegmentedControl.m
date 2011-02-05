#include "xmlvm.h"
#include "org_xmlvm_iphone_UIImage.h"
#include "org_xmlvm_iphone_UIEvent.h"
#include "java_util_ArrayList.h"
#include "java_util_Set.h"
#include "org_xmlvm_iphone_CGRect.h"
#include "org_xmlvm_iphone_UIColor.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_UISegmentedControl.h"

__TIB_DEFINITION_org_xmlvm_iphone_UISegmentedControl __TIB_org_xmlvm_iphone_UISegmentedControl = {
    0, // classInitialized
    __INIT_org_xmlvm_iphone_UISegmentedControl, // classInitializer
    "org.xmlvm.iphone.UISegmentedControl", // className
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_UIControl, // extends
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_UISegmentedControl_ARRAYTYPE;

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
};

static JAVA_OBJECT* __constructor1_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_CGRect,
};

static JAVA_OBJECT* __constructor2_arg_types[] = {
    &__CLASS_java_util_ArrayList,
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
    {&__constructor0_arg_types[0],
    sizeof(__constructor0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {&__constructor1_arg_types[0],
    sizeof(__constructor1_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {&__constructor2_arg_types[0],
    sizeof(__constructor2_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_UISegmentedControl();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_UISegmentedControl___INIT___(obj);
        break;
    case 1:
        org_xmlvm_iphone_UISegmentedControl___INIT____org_xmlvm_iphone_CGRect(obj, argsArray[0]);
        break;
    case 2:
        org_xmlvm_iphone_UISegmentedControl___INIT____java_util_ArrayList(obj, argsArray[0]);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

static JAVA_OBJECT* __method0_arg_types[] = {
    &__CLASS_java_lang_String,
    &__CLASS_int,
};

static JAVA_OBJECT* __method1_arg_types[] = {
    &__CLASS_int,
};

static JAVA_OBJECT* __method2_arg_types[] = {
    &__CLASS_java_lang_String,
    &__CLASS_int,
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method3_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UIImage,
    &__CLASS_int,
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method4_arg_types[] = {
};

static JAVA_OBJECT* __method5_arg_types[] = {
};

static JAVA_OBJECT* __method6_arg_types[] = {
    &__CLASS_int,
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method7_arg_types[] = {
};

static JAVA_OBJECT* __method8_arg_types[] = {
    &__CLASS_int,
};

static JAVA_OBJECT* __method9_arg_types[] = {
};

static JAVA_OBJECT* __method10_arg_types[] = {
    &__CLASS_int,
};

static JAVA_OBJECT* __method11_arg_types[] = {
};

static JAVA_OBJECT* __method12_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_UIColor,
};

static JAVA_OBJECT* __method13_arg_types[] = {
};

static JAVA_OBJECT* __method14_arg_types[] = {
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method15_arg_types[] = {
    &__CLASS_java_util_Set,
    &__CLASS_org_xmlvm_iphone_UIEvent,
};

static JAVA_OBJECT* __method16_arg_types[] = {
};

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
    {"setTitle",
    &__method0_arg_types[0],
    sizeof(__method0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"getTitleForSegmentAtIndex",
    &__method1_arg_types[0],
    sizeof(__method1_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"insertSegmentWithTitle",
    &__method2_arg_types[0],
    sizeof(__method2_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"insertSegmentWithImage",
    &__method3_arg_types[0],
    sizeof(__method3_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"numberOfSegments",
    &__method4_arg_types[0],
    sizeof(__method4_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"removeAllSegments",
    &__method5_arg_types[0],
    sizeof(__method5_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"removeSegmentAtIndex",
    &__method6_arg_types[0],
    sizeof(__method6_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"getSelectedSegmentIndex",
    &__method7_arg_types[0],
    sizeof(__method7_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"setSelectedSegmentIndex",
    &__method8_arg_types[0],
    sizeof(__method8_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"getSegmentedControlStyle",
    &__method9_arg_types[0],
    sizeof(__method9_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"setSegmentedControlStyle",
    &__method10_arg_types[0],
    sizeof(__method10_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"getTintColor",
    &__method11_arg_types[0],
    sizeof(__method11_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"setTintColor",
    &__method12_arg_types[0],
    sizeof(__method12_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"isMomentary",
    &__method13_arg_types[0],
    sizeof(__method13_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"setMomentary",
    &__method14_arg_types[0],
    sizeof(__method14_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"touchesEnded",
    &__method15_arg_types[0],
    sizeof(__method15_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
    {"fireEventValueChanged",
    &__method16_arg_types[0],
    sizeof(__method16_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT method_dispatcher(JAVA_OBJECT method, JAVA_OBJECT receiver, JAVA_OBJECT arguments)
{
    JAVA_OBJECT result = JAVA_NULL; //TODO need to set result
    java_lang_Object* obj = receiver;
    java_lang_reflect_Method* m = (java_lang_reflect_Method*) method;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (m->fields.java_lang_reflect_Method.slot_) {
    case 0:
        org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int(receiver, argsArray[0], ((java_lang_Integer*) argsArray[1])->fields.java_lang_Integer.value_);
        break;
    case 1:
        org_xmlvm_iphone_UISegmentedControl_getTitleForSegmentAtIndex___int(receiver, ((java_lang_Integer*) argsArray[0])->fields.java_lang_Integer.value_);
        break;
    case 2:
        org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean(receiver, argsArray[0], ((java_lang_Integer*) argsArray[1])->fields.java_lang_Integer.value_, ((java_lang_Boolean*) argsArray[2])->fields.java_lang_Boolean.value_);
        break;
    case 3:
        org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean(receiver, argsArray[0], ((java_lang_Integer*) argsArray[1])->fields.java_lang_Integer.value_, ((java_lang_Boolean*) argsArray[2])->fields.java_lang_Boolean.value_);
        break;
    case 4:
        org_xmlvm_iphone_UISegmentedControl_numberOfSegments__(receiver);
        break;
    case 5:
        org_xmlvm_iphone_UISegmentedControl_removeAllSegments__(receiver);
        break;
    case 6:
        org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean(receiver, ((java_lang_Integer*) argsArray[0])->fields.java_lang_Integer.value_, ((java_lang_Boolean*) argsArray[1])->fields.java_lang_Boolean.value_);
        break;
    case 7:
        org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__(receiver);
        break;
    case 8:
        org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int(receiver, ((java_lang_Integer*) argsArray[0])->fields.java_lang_Integer.value_);
        break;
    case 9:
        org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__(receiver);
        break;
    case 10:
        org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int(receiver, ((java_lang_Integer*) argsArray[0])->fields.java_lang_Integer.value_);
        break;
    case 11:
        org_xmlvm_iphone_UISegmentedControl_getTintColor__(receiver);
        break;
    case 12:
        org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor(receiver, argsArray[0]);
        break;
    case 13:
        org_xmlvm_iphone_UISegmentedControl_isMomentary__(receiver);
        break;
    case 14:
        org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean(receiver, ((java_lang_Boolean*) argsArray[0])->fields.java_lang_Boolean.value_);
        break;
    case 15:
        org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent(receiver, argsArray[0], argsArray[1]);
        break;
    case 16:
        // org_xmlvm_iphone_UISegmentedControl_fireEventValueChanged__(receiver);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return result;
}

void __INIT_org_xmlvm_iphone_UISegmentedControl()
{
    __TIB_org_xmlvm_iphone_UISegmentedControl.classInitialized = 1;
    // Initialize base class if necessary
    if (!__TIB_org_xmlvm_iphone_UIControl.classInitialized) __INIT_org_xmlvm_iphone_UIControl();
    __TIB_org_xmlvm_iphone_UISegmentedControl.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_UISegmentedControl;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_UISegmentedControl.vtable, __TIB_org_xmlvm_iphone_UIControl.vtable, sizeof(__TIB_org_xmlvm_iphone_UIControl.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[72] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[73] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_getTitleForSegmentAtIndex___int;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[74] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[75] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[76] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_numberOfSegments__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[77] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_removeAllSegments__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[78] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[79] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[80] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[81] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[82] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[83] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_getTintColor__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[84] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[85] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_isMomentary__;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[86] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean;
    __TIB_org_xmlvm_iphone_UISegmentedControl.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent;
    // Initialize vtable for implementing interfaces
    __TIB_org_xmlvm_iphone_UISegmentedControl.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_iphone_UISegmentedControl.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    __TIB_org_xmlvm_iphone_UISegmentedControl.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_UISegmentedControl.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UISegmentedControl.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_UISegmentedControl.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_UISegmentedControl.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_UISegmentedControl.methodDispatcherFunc = method_dispatcher;
    __TIB_org_xmlvm_iphone_UISegmentedControl.declaredMethods = &__method_reflection_data[0];
    __TIB_org_xmlvm_iphone_UISegmentedControl.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_UISegmentedControl = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_UISegmentedControl);
    __TIB_org_xmlvm_iphone_UISegmentedControl.clazz = __CLASS_org_xmlvm_iphone_UISegmentedControl;
    __CLASS_org_xmlvm_iphone_UISegmentedControl_ARRAYTYPE = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_UISegmentedControl, 1);

    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_UISegmentedControl]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_UISegmentedControl(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_UISegmentedControl]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_UISegmentedControl()
{
    if (!__TIB_org_xmlvm_iphone_UISegmentedControl.classInitialized) __INIT_org_xmlvm_iphone_UISegmentedControl();
    org_xmlvm_iphone_UISegmentedControl* me = (org_xmlvm_iphone_UISegmentedControl*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_UISegmentedControl));
    me->tib = &__TIB_org_xmlvm_iphone_UISegmentedControl;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_UISegmentedControl]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UISegmentedControl()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_UISegmentedControl();
    org_xmlvm_iphone_UISegmentedControl___INIT___(me);
    return me;
}

void org_xmlvm_iphone_UISegmentedControl___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl___INIT____org_xmlvm_iphone_CGRect(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl___INIT____org_xmlvm_iphone_CGRect]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl___INIT____java_util_ArrayList(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl___INIT____java_util_ArrayList]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_setTitle___java_lang_String_int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_UISegmentedControl_getTitleForSegmentAtIndex___int(JAVA_OBJECT me, JAVA_INT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_getTitleForSegmentAtIndex___int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_BOOLEAN n3)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_insertSegmentWithTitle___java_lang_String_int_boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_BOOLEAN n3)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_insertSegmentWithImage___org_xmlvm_iphone_UIImage_int_boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_INT org_xmlvm_iphone_UISegmentedControl_numberOfSegments__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_numberOfSegments__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_removeAllSegments__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_removeAllSegments__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean(JAVA_OBJECT me, JAVA_INT n1, JAVA_BOOLEAN n2)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_removeSegmentAtIndex___int_boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_INT org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_getSelectedSegmentIndex__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int(JAVA_OBJECT me, JAVA_INT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_setSelectedSegmentIndex___int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_INT org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_getSegmentedControlStyle__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int(JAVA_OBJECT me, JAVA_INT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_setSegmentedControlStyle___int]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_UISegmentedControl_getTintColor__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_getTintColor__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_setTintColor___org_xmlvm_iphone_UIColor]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_iphone_UISegmentedControl_isMomentary__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_isMomentary__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_setMomentary___boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_UISegmentedControl_touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

