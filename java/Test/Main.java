
import java.awt.*;
import javax.swing.*;

class Main extends JFrame {

  public Main(){
    super("η»εεΊε");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    ImageIcon icon = new ImageIcon("/Users/yamamotokazunori/Desktop/picture/images-2.jpeg/");
    getContentPane().add(new JLabel(icon));

    pack();

  }

  public static void main(String[] args){
    new Main().setVisible(true);
  }

}
