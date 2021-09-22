
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X31_imageFrame extends JFrame {

  public X31_imageFrame() {
    super("イメージ描画");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    X31_imagePanel imagePanel = new X31_imagePanel();
    imagePanel.setPreferredSize(new Dimension(600, 400));
    getContentPane().add(imagePanel);

    pack();

  }


  public static void main(String[] args) {
    new X31_imageFrame().setVisible(true);
  }

}


class X31_imagePanel extends JPanel {

  private ImageIcon icon = new ImageIcon("/Users/yamamotokazunori/Desktop/picture/urutora5.jpeg");
  private int mouseX = 0;
  private int mouseY = 0;
  private boolean isMousePressed = false;

  public X31_imagePanel() {
    super();
    X31_imageMouse imageMouse = new X31_imageMouse();

    addMouseListener(imageMouse);
    addMouseMotionListener(imageMouse);

  }

  public void paint(Graphics g) {
    Dimension dim = getSize();
    g.setColor(getBackground());
    g.fillRect(0, 0, dim.width, dim.height);


    if(isMousePressed){
      g.drawImage(icon.getImage(), mouseX, mouseY, this);
    }

  }


  private class X31_imageMouse extends MouseAdapter implements MouseMotionListener {

    public void mousePressed(MouseEvent e) {
      isMousePressed = true;
      mouseX = e.getX() - (icon.getIconWidth() / 2);
      mouseY = e.getY() - (icon.getIconHeight() / 2);
      repaint();
    }

    public void mouseReleased(MouseEvent e) {
      isMousePressed = false;
      repaint();
  }

    public void mouseDragged(MouseEvent e) {
      mouseX = e.getX() - (icon.getIconWidth() / 2);
      mouseY = e.getY() - (icon.getIconHeight() / 2);
      repaint();
    }

    public void mouseMoved(MouseEvent e) {

    }

  }

}
