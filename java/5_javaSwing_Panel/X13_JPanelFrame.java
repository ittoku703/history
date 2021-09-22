
import java.awt.*;
import javax.swing.*;

class X13_JPanelFrame extends JFrame {

  public X13_JPanelFrame(){
    super("JPanelFrame");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JPanel panel1 = new JPanel();
    getContentPane().add(panel1, BorderLayout.NORTH);
    panel1.add(new JLabel("100"));
    panel1.add(new JButton("ok"));

    JPanel panel2 = new JPanel();
    getContentPane().add(panel2, BorderLayout.CENTER);
    panel2.add(new JLabel("50"));
    panel2.add(new JButton("ok"));

    JPanel panel3 = new JPanel();
    getContentPane().add(panel3, BorderLayout.SOUTH);
    panel3.add(new JLabel("10"));
    panel3.add(new JButton("ok"));


    pack();
    
  }

  public static void main(String[] args) {
    new X13_JPanelFrame().setVisible(true);
  }

}
