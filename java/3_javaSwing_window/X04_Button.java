import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class X04_Button extends JFrame implements ActionListener {
  private JButton button[] = {
    new JButton("north"),
    new JButton("west"),
    new JButton("east"),
    new JButton("south")
  };
  private JLabel label;

  public X04_Button(){
    super("Button");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    getContentPane().add(button[0], BorderLayout.NORTH);
    getContentPane().add(button[1], BorderLayout.EAST);
    getContentPane().add(button[2], BorderLayout.WEST);
    getContentPane().add(button[3], BorderLayout.SOUTH);
    for(int i=0; i<button.length; i++){
      button[i].addActionListener(this);
    }


    label = new JLabel("方角を表示", SwingConstants.CENTER);
    getContentPane().add(label, BorderLayout.CENTER);

    pack();

  }

  public void actionPerformed(ActionEvent e){
    if(e.getSource().equals(button[0])){
      label.setText("北");
    }
    if(e.getSource().equals(button[1])){
      label.setText("東");
    }
    if(e.getSource().equals(button[2])){
      label.setText("西");
    }
    if(e.getSource().equals(button[3])){
      label.setText("南");
    }

  }


  public static void main(String[] args) {
    new X04_Button().setVisible(true);

  }

}
