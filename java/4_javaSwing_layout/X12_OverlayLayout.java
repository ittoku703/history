
import java.awt.*;
import javax.swing.*;

class X12_OverlayLayout extends JFrame {

  public X12_OverlayLayout(){
    super("OverlayLayout");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    OverlayLayout layout = new OverlayLayout(getContentPane());
    getContentPane().setLayout(layout);

    JLabel label[] = {
      new JLabel("label 1"),
      new JLabel("label     2"),
      new JLabel("label      3")
    };

    for(int i=0; i<label.length; i++){
      getContentPane().add(label[i]);
    }

    pack();

  }

  public static void main(String[] args) {
    new X12_OverlayLayout().setVisible(true);
  }

}
