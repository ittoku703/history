
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X21_JList extends JFrame implements ActionListener {

  private JList list;
  private JButton displayButton, deleteButton;
  private DefaultListModel listModel;
  private String listItem[] = {
    "あ", "か", "さ", "た", "な", "は", "ま", "や", "ら", "わ"
  };

  X21_JList() {
    super("リスト");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    listModel = new DefaultListModel<String>();
    for(int i=0; i<listItem.length; i++){
      listModel.addElement(listItem[i]);
    }

    list = new JList(listModel);
    JScrollPane scrollPane = new JScrollPane(list);
    getContentPane().add(scrollPane, BorderLayout.CENTER);

    JPanel buttonPanel = new JPanel(new GridLayout(1, 2));
    getContentPane().add(buttonPanel, BorderLayout.SOUTH);
    displayButton = new JButton("表示");
    displayButton.addActionListener(this);
    deleteButton = new JButton("消去");
    deleteButton.addActionListener(this);
    buttonPanel.add(displayButton);
    buttonPanel.add(deleteButton);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    int selectedIndices[] = list.getSelectedIndices();

    if(e.getSource().equals(displayButton)){
      for(int i=0; i<listItem.length; i++){
        System.out.println((String)listModel.elementAt(selectedIndices[i]));
      }
    }
    else if(e.getSource().equals(deleteButton)){
      for(int i=selectedIndices.length - 1; i>=0; i--){
        listModel.removeElementAt(selectedIndices[i]);
      }
    }
  }

  public static void main(String[] args) {
    new X21_JList().setVisible(true);
  }

}
