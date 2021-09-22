
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X24_ToolTiptext extends JFrame implements ActionListener {
  private HelpProgressBar helpProgressBar;
  private JButton startButton, stopButton;
  private Timer t = new Timer(1000, this);

  public X24_ToolTiptext() {
    super("プログレスバー");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JPanel labelPanel = new JPanel(new GridLayout(1, 2));
    getContentPane().add(labelPanel, BorderLayout.NORTH);
    labelPanel.add(new JLabel("0%", SwingConstants.LEFT));
    labelPanel.add(new JLabel("100%", SwingConstants.RIGHT));

    helpProgressBar = new HelpProgressBar();
    getContentPane().add(helpProgressBar, BorderLayout.CENTER);

    JPanel panel = new JPanel(new GridLayout(1, 2));
    getContentPane().add(panel, BorderLayout.SOUTH);

    startButton = new JButton("開始(n)");  panel.add(startButton);
    startButton.addActionListener(this);
    startButton.setMnemonic('n');
    stopButton = new JButton("停止(m)");  panel.add(stopButton);
    stopButton.addActionListener(this);
    stopButton.setMnemonic('m');

    this.addKeyListener(new MyKeyAdapter());
    pack();

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource() == startButton) {
      helpProgressBar.setValue(0);
      t.start();
    }
    else if(e.getSource() == stopButton) {
      t.stop();
    }
    else if(e.getSource().equals(t)) {
      helpProgressBar.setValue(helpProgressBar.getValue() + 10);
      if(helpProgressBar.getValue() >= 100) {
        helpProgressBar.setValue(100);
        t.stop();
      }
    }
    requestFocusInWindow();
  }

  public static void main(String[] args) {
    new X24_ToolTiptext().setVisible(true);
  }


  class HelpProgressBar extends JProgressBar {

    public HelpProgressBar() {
      super(SwingConstants.HORIZONTAL, 0, 100);
      ToolTipManager.sharedInstance().registerComponent(this);;
    }

    public String getToolTipText() {
      return (String.valueOf(getValue()));
    }

  }


  class MyKeyAdapter extends KeyAdapter {
    public void MyKeyAdapter(KeyEvent e) {

    }
  }

}
