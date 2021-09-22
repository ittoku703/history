package x00_Made_in_yamamoto;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X01_ShortCutKey extends JFrame implements ActionListener {

  JMenuItem item1;
  JMenuItem item2;
  JLabel label;

  public X01_ShortCutKey() {
    super("テスト");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);

    JMenuBar menubar = new JMenuBar();
    setJMenuBar(menubar);
    JMenu menu = new JMenu("メニュー");
    menubar.add(menu);

    item1 = new JMenuItem("アイテム１");
    item1.addActionListener(this);
    item1.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Y, Event.META_MASK));
    menu.add(item1);
    
    item2 = new JMenuItem("アイテム２");
    item2.addActionListener(this);
    item2.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_X, Event.META_MASK));
    menu.add(item2);

    label = new JLabel("ショートカットキーを入力", SwingConstants.CENTER);
    getContentPane().add(label);

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource().equals(item1)){
      label.setText("item1が押されました");
    }
    else if(e.getSource().equals(item2)) {
      label.setText("item2が押されました");
    }

  }

  public void MyKeyAdapter(KeyEvent e){

  }

  public static void main(String[] args) {
    new X01_ShortCutKey().setVisible(true);
  }
}
