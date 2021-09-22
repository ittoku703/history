package x00_Made_in_yamamoto;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class x03_ extends JFrame implements MouseListener {

    private JButton btn;
    private JLabel label;

    x03_() {
        super("テストです");
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        JMenuBar menubar = new JMenuBar();
        setJMenuBar(menubar);
        JMenu menu1 = new JMenu("メニュー１");
        menubar.add(menu1);
        JMenu menu2 = new JMenu("メニュー２");
        menubar.add(menu2);
        JMenuItem menuItem1 = new JMenuItem("アイテム１");
        menu1.add(menuItem1);
        JMenuItem menuItem2 = new JMenuItem("アイテム２");
        menu1.add(menuItem2);
        JMenuItem menuItem3 = new JMenuItem("アイテム３");
        menu2.add(menuItem3);
        JMenuItem menuItem4 = new JMenuItem("アイテム４");
        menu2.add(menuItem4);

        JPanel panel = new JPanel();
        getContentPane().add(panel);
        btn = new JButton("絶対に押すな");
        btn.addMouseListener(this);
        panel.add(btn);
        label = new JLabel();
        panel.add(label);

        setSize(600, 400);
        setLocationRelativeTo(null);
    }

    public void mousePressed(MouseEvent e) {}
    public void mouseClicked(MouseEvent e) {
        if(SwingUtilities.isRightMouseButton(e)) {

        }

        if(e.getSource().equals(btn)) {
            label.setText("押すなと言ったのに・・・");
        }
    }
    public void mouseReleased(MouseEvent e) {}
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}


    public static void main(String[] srgs) {
        new x03_().setVisible(true);
    }
}