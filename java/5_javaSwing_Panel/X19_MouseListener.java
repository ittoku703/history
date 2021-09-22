
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X19_MouseListener extends JFrame {

  private JPopupMenu popup;
  private JPanel panel;

  public X19_MouseListener() {
    super("マウス");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    popup = new JPopupMenu();
    popup.add(new JMenuItem("メニューアイテム１"));
    popup.add(new JMenuItem("メニューアイテム２"));

    panel = new JPanel();
    panel.setPreferredSize(new Dimension(150, 150));
    getContentPane().add(panel);

    MouseListener popupListener = new popupListener();
    panel.addMouseListener(popupListener);

    pack();

  }

  public static void main(String[] args){
    new X19_MouseListener().setVisible(true);
  }


  class popupListener extends MouseAdapter {
    public void mousePressed(MouseEvent e){
      if(e.getComponent() == panel){
        popup.show(e.getComponent(), e.getX(), e.getY());        
      }
    }

  }

}
