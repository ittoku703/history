
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X09_GridLayout extends JFrame implements ActionListener {
  private JButton button[] = {
    new JButton("first"),
    new JButton("second"),
    new JButton("third"),
    new JButton("forth")
  };
  JLabel label;

  public X09_GridLayout(String name){
    super(name);
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JPanel panel = new JPanel(new GridLayout(2, 2));
    getContentPane().add(panel, BorderLayout.NORTH);
    for(int i=0; i<button.length; i++){
      panel.add(button[i]);
      button[i].setPreferredSize(new Dimension(60, 40));
      button[i].addActionListener(this);
    }

    label = new JLabel("select button", SwingConstants.CENTER);
    label.setPreferredSize(new Dimension(120, 80));
    getContentPane().add(label, BorderLayout.SOUTH);

    pack();

  }


  public void actionPerformed(ActionEvent e){
    if(e.getSource().equals(button[0])){
      label.setText("1");
    }
    if(e.getSource().equals(button[1])){
      label.setText("2");
    }
    if(e.getSource().equals(button[2])){
      label.setText("3");
    }
    if(e.getSource().equals(button[3])){
      label.setText("4");
    }

  }

  public static void main(String[] args) {
    new X09_GridLayout("GridLayout").setVisible(true);
  }

}
