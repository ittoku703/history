
import java.awt.*;
import javax.swing.*;

public class X11_BoxLayout extends JFrame {

  public X11_BoxLayout(){
    super("BoxLayout");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    BoxLayout layout = new BoxLayout(getContentPane(), BoxLayout.Y_AXIS);
    getContentPane().setLayout(layout);

    JRadioButton radiobutton[] = {
      new JRadioButton("radio1"),
      new JRadioButton("radio2"),
      new JRadioButton("radio3")
    };
    ButtonGroup group = new ButtonGroup();

    for(int i=0; i<radiobutton.length; i++){
      getContentPane().add(radiobutton[i]);
      group.add(radiobutton[i]);
    }

    pack();

  }

  public static void main(String[] args) {
    new X11_BoxLayout().setVisible(true);
  }

}
