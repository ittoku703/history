package x00_Made_in_yamamoto;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X02_CardImage extends JFrame implements ActionListener {

  private JMenuItem[] items = {
    new JMenuItem("first"),
    new JMenuItem("next"),
    new JMenuItem("previous"),
    new JMenuItem("last")
  };
  private CardLayout Card;

  X02_CardImage() {
    super("カード");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);
    setResizable(false);

    Card = new CardLayout();
    getContentPane().setLayout(Card);

    JMenuBar menubar = new JMenuBar();
    setJMenuBar(menubar);
    JMenu menu = new JMenu("カード選択");
    menubar.add(menu);
    for(int i=0; i<items.length; i++) {
      menu.add(items[i]);
      items[i].addActionListener(this);
    }

    ImageIcon[] icons = {
      new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora1.jpeg/"),
      new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora2.jpeg/"),
      new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora3.jpeg/"),
      new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora4.jpeg/"),
      new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora5.jpeg")
    };
    for(int i=0; i<icons.length; i++){
      getContentPane().add(new JLabel(icons[i]));
    }

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource().equals(items[0])){
      Card.first(getContentPane());
    }

    if(e.getSource().equals(items[1])){
      Card.next(getContentPane());
    }

    if(e.getSource().equals(items[2])){
      Card.previous(getContentPane());
    }

    if(e.getSource().equals(items[3])){
      Card.last(getContentPane());
    }

  }

  public static void main(String[] args) {
    new X02_CardImage().setVisible(true);
  }

}
