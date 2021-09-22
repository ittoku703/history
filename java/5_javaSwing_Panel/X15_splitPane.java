
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X15_splitPane extends JFrame implements ActionListener {

  private JButton leftPaneButton, rightPaneButton;
  private JButton leftButton, rightButton;
  private JSplitPane splitPane;

  public X15_splitPane(){
    super("splitPane");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    splitPane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, false);
    splitPane.setPreferredSize(new Dimension(200, 100));
    getContentPane().add(splitPane);

    leftPaneButton = new JButton("red");
    leftPaneButton.setForeground(Color.red);
    leftPaneButton.addActionListener(this);
    splitPane.setLeftComponent(leftPaneButton);

    rightPaneButton = new JButton("blue");
    rightPaneButton.setForeground(Color.blue);
    rightPaneButton.addActionListener(this);
    splitPane.setRightComponent(rightPaneButton);

/*----------------------------------------------------------------------------*/

    JPanel panel = new JPanel();
    getContentPane().add(panel, BorderLayout.SOUTH);

    leftButton = new JButton("left");
    leftButton.addActionListener(this);
    rightButton = new JButton("right");
    rightButton.addActionListener(this);
    panel.add(leftButton);
    panel.add(rightButton);

    pack();

    splitPane.setDividerLocation((splitPane.getMinimumDividerLocation() +
      splitPane.getMaximumDividerLocation()) / 2);

  }

  public void actionPerformed(ActionEvent e){
    if(e.getSource().equals(leftPaneButton) || e.getSource().equals(rightButton)){
      splitPane.setDividerLocation(splitPane.getDividerLocation() + 1);
    }
    else if(e.getSource().equals(rightPaneButton) || e.getSource().equals(leftButton)){
      splitPane.setDividerLocation(splitPane.getDividerLocation() - 1);
    }
  }

  public static void main(String[] args) {
    new X15_splitPane().setVisible(true);
  }

}
