
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class X08_CardLayout extends JFrame implements ActionListener {
  private JMenuItem item[] = {
    new JMenuItem("first"),
    new JMenuItem("next"),
    new JMenuItem("previous"),
    new JMenuItem("last")
  };
  private CardLayout layout;

  public X08_CardLayout(String label){
    super(label);
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    layout = new CardLayout();
    getContentPane().setLayout(layout);

    JButton blueButton = new JButton("1");
    getContentPane().add(blueButton, "first");
    blueButton.setForeground(Color.blue);

    JButton yellowButton = new JButton("2");
    getContentPane().add(yellowButton, "second");
    yellowButton.setForeground(Color.yellow);

    JButton redButton = new JButton("3");
    getContentPane().add(redButton, "third");
    redButton.setForeground(Color.red);

/*---------------------------------------------------------------------------*/

    JMenuBar menubar = new JMenuBar();
    setJMenuBar(menubar);

    JMenu filemenu = new JMenu("select Card");
    menubar.add(filemenu);

/*---------------------------------------------------------------------------*/

    for(int i=0; i<item.length; i++){
      filemenu.add(item[i]);
      item[i].addActionListener(this);
    }

    pack();

  }

  public void actionPerformed(ActionEvent e){
    if(e.getSource().equals(item[0])){
      layout.first(getContentPane());
    }
    if(e.getSource().equals(item[1])){
      layout.next(getContentPane());
    }
    if(e.getSource().equals(item[2])){
      layout.previous(getContentPane());
    }
    if(e.getSource().equals(item[3])){
      layout.last(getContentPane());
    }

  }

  public static void main(String[] args) {
    new X08_CardLayout("CardLayout").setVisible(true);
  }

}
