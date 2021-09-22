
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Test extends JFrame implements MouseListener {

  private JTextField name, password;
//  private CreateDocument doc;
  private JButton okButton, noButton;

  public Test() {
    super("テスト");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);
    setResizable(false);
    setBounds(100, 100, 100, 100);

    name = new JTextField("");
    password = new JTextField("");

    Box inputBox = new Box(BoxLayout.Y_AXIS);
    getContentPane().add(inputBox, BorderLayout.CENTER);
    inputBox.add(new JLabel("IDを入力", SwingConstants.CENTER));
    inputBox.add(name);
    inputBox.add(new JLabel("パスワードを入力", SwingConstants.CENTER));
    inputBox.add(password);

    JPanel panel = new JPanel();
    getContentPane().add(panel, BorderLayout.PAGE_END);
    okButton = new JButton("決定");
    noButton = new JButton("消す");
    panel.add(noButton);
    panel.add(okButton);

    pack();

  }

  public void mousePressed(MouseEvent e) {}
  public void mouseClicked(MouseEvent e) {}
  public void mouseReleased(MouseEvent e) {}
  public void mouseEntered(MouseEvent e) {}
  public void mouseExited(MouseEvent e) {}

  public static void main(String[] args) {
    new Test().setVisible(true);
  }

}
