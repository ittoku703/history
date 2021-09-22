
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

class X17_TabbedPane extends JFrame implements ChangeListener, ActionListener {

  private JTabbedPane tabbedPane;
  private JButton labelButton, buttonButton, radioButton;

  public X17_TabbedPane() {
    super("タブ");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    tabbedPane = new JTabbedPane();
    tabbedPane.addChangeListener(this);
    getContentPane().add(tabbedPane);

    tabbedPane.add("Label", new JLabel("ラベル", SwingConstants.CENTER));

    tabbedPane.add("Button", new JButton("ボタン"));

    JPanel panel = new JPanel(new GridLayout(3, 1));
    tabbedPane.add("Radio", panel);
    ButtonGroup bg = new ButtonGroup();
    JRadioButton radioButton1 = new JRadioButton("ラジオボタン１");
    JRadioButton radioButton2 = new JRadioButton("ラジオボタン２");
    JRadioButton radioButton3 = new JRadioButton("ラジオボタン３");
    radioButton1.setSelected(true);
    bg.add(radioButton1);
    bg.add(radioButton2);
    bg.add(radioButton3);
    panel.add(radioButton1);
    panel.add(radioButton2);
    panel.add(radioButton3);


    JToolBar toolBar = new JToolBar();
    getContentPane().add(toolBar, BorderLayout.NORTH);
    labelButton = new JButton("ラベル");
    buttonButton = new JButton("ボタン");
    radioButton = new JButton("ラジオ");
    labelButton.addActionListener(this);
    buttonButton.addActionListener(this);
    radioButton.addActionListener(this);
    toolBar.add(labelButton);
    toolBar.add(buttonButton);
    toolBar.add(radioButton);

    pack();

  }

  public void stateChanged(ChangeEvent e) {
    setTitle(tabbedPane.getTitleAt(tabbedPane.getSelectedIndex()));
  }

  public void actionPerformed(ActionEvent e){
    if(e.getSource().equals(labelButton)){
      tabbedPane.setSelectedIndex(tabbedPane.indexOfTab("Label"));
    }
    if(e.getSource().equals(buttonButton)){
      tabbedPane.setSelectedIndex(tabbedPane.indexOfTab("Button"));
    }
    if(e.getSource().equals(radioButton)){
      tabbedPane.setSelectedIndex(tabbedPane.indexOfTab("Radio"));
    }

  }

  public static void main(String[] args) {
    new X17_TabbedPane().setVisible(true);
  }

}
