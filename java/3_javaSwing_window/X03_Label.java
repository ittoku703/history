import java.awt.BorderLayout;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;

public class X03_Label extends JFrame {

	public X03_Label() {
		super("Labelテスト");
		setDefaultCloseOperation(EXIT_ON_CLOSE);

		JLabel label1 = new JLabel("This is a label1");
		getContentPane().add(label1, BorderLayout.CENTER);

		ImageIcon icon = new ImageIcon("/Users/yamamotokazunori/Desktop/picture/Miku.gif");
		JLabel label2 = new JLabel(icon);
		getContentPane().add(label2, BorderLayout.SOUTH);

		pack();
	}

	public static void main(String[] args) {
		new X03_Label().setVisible(true);
	}

}
