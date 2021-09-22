
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X18_PopupMenu extends JFrame implements ActionListener {

  private JButton button;
  private JPopupMenu popup;
  private JMenuItem menuItem1, menuItem2;

  public X18_PopupMenu() {
    super("ポップアップ");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);

    popup = new JPopupMenu();
    menuItem1 = new JMenuItem("メニュー１");
    menuItem1.addActionListener(this);
    popup.add(menuItem1);
    menuItem2 = new JMenuItem("メニュー２");
    menuItem2.addActionListener(this);
    popup.add(menuItem2);

    JPanel panel = new JPanel();
    getContentPane().add(panel, BorderLayout.WEST);
    button = new JButton("ボタン");
    button.addActionListener(this);
    panel.add(button);

//    pack();

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource() == button){
      popup.show(button, 0, 0);
    }
    else if(e.getSource() instanceof JMenuItem){
      button.setText( ( (JMenuItem)e.getSource()).getText());
    }

  }

  public static void main(String[] args) {
    new X18_PopupMenu().setVisible(true);
  }

}
