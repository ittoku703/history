
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X22_JComboBox extends JFrame implements ActionListener {

  private JComboBox combo;
  private JButton displayButton;
  private final String comboItem[] = {
    "あ", "い", "う", "え", "お", "か", "き", "く", "け", "こ"
  };

  X22_JComboBox() {
    super("コンボボックス");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    combo = new JComboBox(comboItem);
    combo.setEditable(true);
    getContentPane().add(combo, BorderLayout.CENTER);

    displayButton = new JButton("表示");
    getContentPane().add(displayButton, BorderLayout.SOUTH);
    displayButton.addActionListener(this);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    String selectedString = (String)combo.getSelectedItem();

    if(e.getSource() == displayButton) {
      System.out.println(selectedString);
    }
    for(int i=0; i<combo.getItemCount(); i++) {
      if(selectedString.equals(combo.getItemAt(i))) {
        return;
      }
    }
    combo.addItem(selectedString);
  }

  public static void main(String[] args) {
    new X22_JComboBox().setVisible(true);
  }

}
