// Automatically generated by xmlvm2csharp. Do not edit!

using org.xmlvm;

namespace Compatlib.System.Windows.Media {
public class SolidColorBrush: global::Compatlib.System.Windows.Media.Brush {
public void @this(Compatlib.System.Windows.Media.Color n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: void <init>(Compatlib.System.Windows.Media.Color)]
    this.color = n1;
    base.brush = new global::System.Windows.Media.SolidColorBrush(n1.color);
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: void <init>(Compatlib.System.Windows.Media.Color)]
}

public virtual global::System.Object getColor(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: Compatlib.System.Windows.Media.Color getColor()]
    return color;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: Compatlib.System.Windows.Media.Color getColor()]
}

public virtual void setColor(Compatlib.System.Windows.Media.Color n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: void setColor(Compatlib.System.Windows.Media.Color)]
    this.color = n1;
    ((global::System.Windows.Media.SolidColorBrush)base.brush).Color = n1.color;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush: void setColor(Compatlib.System.Windows.Media.Color)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush]
private Compatlib.System.Windows.Media.Color color;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Media.SolidColorBrush]

} // end of class: SolidColorBrush

} // end of namespace: Compatlib.System.Windows.Media
