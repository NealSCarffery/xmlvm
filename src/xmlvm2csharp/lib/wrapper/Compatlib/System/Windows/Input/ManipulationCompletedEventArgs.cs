// Automatically generated by xmlvm2csharp (do not edit).

using org.xmlvm;
namespace Compatlib.System.Windows.Input {
public class ManipulationCompletedEventArgs: global::Compatlib.System.Windows.Input.InputEventArgs {
public void @this(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void <init>()]
    throw new global::org.xmlvm._nNotYetImplementedException("a");
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void <init>()]
}

public virtual bool isHandled(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: boolean isHandled()]
    return ((global::System.Windows.Input.ManipulationCompletedEventArgs)base.args).Handled;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: boolean isHandled()]
}

public virtual void setHandled(bool n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void setHandled(boolean)]
    ((global::System.Windows.Input.ManipulationCompletedEventArgs)base.args).Handled = n1;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void setHandled(boolean)]
}

public virtual global::System.Object getManipulationOrigin(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: Compatlib.System.Windows.Point getManipulationOrigin()]
    global::Compatlib.System.Windows.Point ret = new global::Compatlib.System.Windows.Point();
    ret.point = ((global::System.Windows.Input.ManipulationCompletedEventArgs)base.args).ManipulationOrigin;
    return ret;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: Compatlib.System.Windows.Point getManipulationOrigin()]
}

public virtual void setManipulationOrigin(global::Compatlib.System.Windows.Point n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void setManipulationOrigin(Compatlib.System.Windows.Point)]
    throw new global::org.xmlvm._nNotYetImplementedException("a");
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs: void setManipulationOrigin(Compatlib.System.Windows.Point)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs]
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationCompletedEventArgs]

} // end of class: ManipulationCompletedEventArgs

} // end of namespace: Compatlib.System.Windows.Input
