
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X23_JProgressBar extends JFrame implements ActionListener {
  private JProgressBar progressBar;
  private JButton startButton, stopButton;
  private Timer t;
  private static final int MIN = 0;
  private static final int MAX = 100;

  public X23_JProgressBar() {
    super("プログレスバー");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    t = new Timer(1000, this);

    JPanel labelPanel = new JPanel(new GridLayout(1, 2));
    labelPanel.add(new JLabel("0%", SwingConstants.LEFT));
    labelPanel.add(new JLabel("100%", SwingConstants.RIGHT));
    getContentPane().add(labelPanel, BorderLayout.NORTH);

    progressBar = new JProgressBar(SwingConstants.HORIZONTAL, MIN, MAX);
    getContentPane().add(progressBar, BorderLayout.CENTER);

    JPanel panel = new JPanel();
    startButton = new JButton("開始");  panel.add(startButton);
    startButton.addActionListener(this);
    stopButton = new JButton("停止");  panel.add(stopButton);
    stopButton.addActionListener(this);
    getContentPane().add(panel, BorderLayout.SOUTH);


    pack();

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource() == startButton) {
      progressBar.setValue(0);
      t.start();
    }
    else if(e.getSource() == stopButton) {
      t.stop();
    }
    else if(e.getSource().equals(t)) {
      progressBar.setValue(progressBar.getValue() + 10);
      if(progressBar.getValue() >= 100) {
        progressBar.setValue(100);
        t.stop();
      }
    }

  }

  public static void main(String[] args) {
    new X23_JProgressBar().setVisible(true);
  }

}
