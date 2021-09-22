
import java.awt.*;
import javax.swing.*;

class X14_Box extends JFrame {

  public X14_Box(String name){
    super(name);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);

    Box box = new Box(BoxLayout.Y_AXIS);
    getContentPane().add(box);
    box.add(Box.createVerticalStrut(50));
    box.add(new JButton("1"));
    box.add(Box.createGlue());
    box.add(new JButton("2"));
    box.add(Box.createGlue());
    box.add(new JButton("3"));
    box.add(Box.createGlue());
    box.add(new JButton("4"));
    box.add(Box.createVerticalStrut(50));

  }

  public static void main(String[] args) {
    new X14_Box("Box").setVisible(true);
  }


}
