
import java.awt.*;
import javax.swing.*;

public class X06_LayoutManeger extends JFrame {

  public X06_LayoutManeger(String label){
    super(label);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    getContentPane().setBackground(Color.BLACK);

    Dimension size = new Dimension(100, 50);

/*----------------------------------------------------------------------------*/

    JButton northButton = new JButton("North");
    getContentPane().add(northButton, BorderLayout.NORTH);
    northButton.setForeground(Color.blue);
    northButton.setPreferredSize(size);

    JButton westButton = new JButton("West");
    getContentPane().add(westButton, BorderLayout.WEST);
    westButton.setForeground(Color.yellow);
    westButton.setPreferredSize(size);

    JButton eastButton = new JButton("East");
    getContentPane().add(eastButton, BorderLayout.EAST);
    eastButton.setForeground(Color.red);
    eastButton.setPreferredSize(size);

    JButton southButton = new JButton("South");
    getContentPane().add(southButton, BorderLayout.SOUTH);
    southButton.setForeground(Color.orange);
    southButton.setPreferredSize(size);

    pack();
  }

  public static void main(String[] args) {
    new X06_LayoutManeger("LayoutManeger").setVisible(true);

  }

}
