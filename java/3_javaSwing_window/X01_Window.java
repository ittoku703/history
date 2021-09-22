import javax.swing.*;

public class X01_Window extends JFrame {

  public X01_Window(){
    super("Window");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setSize(600, 400);

  }

  public static void main(String[] args){
    new X01_Window().setVisible(true);

  }

}
