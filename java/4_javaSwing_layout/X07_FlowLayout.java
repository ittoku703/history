
import java.awt.*;
import javax.swing.*;

public class X07_FlowLayout extends JFrame {

  public X07_FlowLayout(String label, FlowLayout layout){
    super(label);
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    getContentPane().setLayout(layout);

    JButton firstButton = new JButton("first");
    firstButton.setForeground(Color.orange);
    getContentPane().add(firstButton);

    JButton secondButton = new JButton("second");
    secondButton.setForeground(Color.pink);
    getContentPane().add(secondButton);

    JButton thirdButton = new JButton("third");
    thirdButton.setForeground(Color.magenta);
    getContentPane().add(thirdButton);


    pack();

  }

  public static void main(String[] args) {
    //引数なし
//    new X07_FlowLayout("FlowLayout", new FlowLayout()).setVisible(true);
    //引数３つの場合
    //後ろの引数でボタンのサイズ指定
    new X07_FlowLayout("FlowLayout3", new FlowLayout(FlowLayout.CENTER, 100, 50)).setVisible(true);
  }
}
