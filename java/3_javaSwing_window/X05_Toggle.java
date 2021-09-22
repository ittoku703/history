
import java.awt.BorderLayout;
import javax.swing.*;

public class X05_Toggle extends JFrame {

  public X05_Toggle(){
    super("Toggle");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

/*----------------------------------------------------------------------------*/

    JMenuBar menuBar = new JMenuBar();
    super.setJMenuBar(menuBar);

    JMenu radioMenu = new JMenu("Radio");
    menuBar.add(radioMenu);

/*----------------------------------------------------------------------------*/

    JToggleButton toggleButton1 = new JToggleButton("Toggle1");
    getContentPane().add(toggleButton1, BorderLayout.NORTH);

    JToggleButton toggleButton2 = new JToggleButton("Toggle2");
    getContentPane().add(toggleButton2, BorderLayout.CENTER);

    JToggleButton toggleButton3 = new JToggleButton("Toggle3");
    getContentPane().add(toggleButton3, BorderLayout.SOUTH);

/*----------------------------------------------------------------------------*/

    ButtonGroup group = new ButtonGroup();

    JRadioButton radioButton1 = new JRadioButton("Radio1");
    radioMenu.add(radioButton1);
    group.add(radioButton1);

    JRadioButton radioButton2 = new JRadioButton("Radio2");
    radioMenu.add(radioButton2);
    group.add(radioButton2);

    JRadioButton radioButton3 = new JRadioButton("Radio3");
    radioMenu.add(radioButton3);
    group.add(radioButton3);

    pack();

  }

  public static void main(String[] args){
    new X05_Toggle().setVisible(true);
  }

}
