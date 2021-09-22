
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X10_GridBagLayout extends JFrame implements ActionListener {
  private JButton button[] = {
      new JButton("first"),
      new JButton("second"),
      new JButton("third"),
      new JButton("forth")
    };
    JLabel label;


  public X10_GridBagLayout(){
    super("GridBagLayout");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    GridBagLayout layout = new GridBagLayout();
    getContentPane().setLayout(layout);
    GridBagConstraints c = new GridBagConstraints();
    c.insets = new Insets(5, 5, 5, 5);

/*----------------------------------------------------------------------------*/

    button[0].setForeground(Color.red);
    c.gridwidth = 2;
    c.gridheight = 1;
    c.gridx = 0;
    c.gridy = 0;
    c.fill = GridBagConstraints.HORIZONTAL;
    layout.setConstraints(button[0], c);
    getContentPane().add(button[0]);

    button[1].setForeground(Color.blue);
    c.gridwidth = 1;
    c.gridheight = 2;
    c.gridx = 0;
    c.gridy = 1;
    c.fill = GridBagConstraints.VERTICAL;
    layout.setConstraints(button[1], c);
    getContentPane().add(button[1]);

    button[2].setForeground(Color.green);
    c.gridwidth = 1;
    c.gridheight = 1;
    c.gridx = 1;
    c.gridy = 1;
    layout.setConstraints(button[2], c);
    getContentPane().add(button[2]);

    button[3].setForeground(Color.magenta);
    c.gridwidth = 1;
    c.gridheight = 1;
    c.gridx = 1;
    c.gridy = 2;
    layout.setConstraints(button[3], c);
    getContentPane().add(button[3]);

    for(int i=0; i<button.length; i++){
      button[i].addActionListener(this);
    }

    label = new JLabel("select Button");
    c.gridwidth = 2;
    c.gridheight = 1;
    c.gridx = 0;
    c.gridy = 3;
    c.anchor = GridBagConstraints.CENTER;
    layout.setConstraints(label, c);
    getContentPane().add(label);


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
    new X10_GridBagLayout().setVisible(true);
  }

}
