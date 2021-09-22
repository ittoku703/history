import java.awt.*;
import javax.swing.*;

class X30_Graphics extends JFrame {

  public X30_Graphics() {
    super("グラフィック");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    X30_HexagonPanel panel = new X30_HexagonPanel();
    panel.setPreferredSize(new Dimension(300, 300));
    getContentPane().add(panel);

    pack();
    setLocationRelativeTo(null);

  }

  public static void main(String[] args) {
    new X30_Graphics().setVisible(true);
  }

}


class X30_HexagonPanel extends JPanel {

  public void paint(Graphics g) {
    Dimension dim = getSize();
    Polygon hex = new Polygon();

    //minはどちらかの小さい値を取得  sqrtは平方根をもとめる
    double redius = Math.min(dim.height / 2.0, dim.width / Math.sqrt(3.0));

    for(int i=0; i<6; i++){
      hex.addPoint(
        (int)(Math.sin(Math.PI / 3 * i) * redius + dim.width / 2),
        (int)(Math.cos(Math.PI / 3 * i) * redius + dim.height / 2));
    }
    g.setColor(Color.orange);
    g.fillPolygon(hex);

  }

}
