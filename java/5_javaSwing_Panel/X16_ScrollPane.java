
import javax.swing.*;

class X16_ScrollPane extends JFrame {

  public X16_ScrollPane() {
    super("スクロール");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JLabel label = new JLabel(new ImageIcon("/Users/yamamotokazunori/Desktop/"
      + "picture/urutora1.jpeg/"));
    JScrollPane scrollPane = new JScrollPane(label);
    getContentPane().add(scrollPane);

    pack();
    setSize(100, 100);

  }


  public static void main(String[] args){
    new X16_ScrollPane().setVisible(true);
  }
}
