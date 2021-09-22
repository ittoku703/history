
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X28_Dialog extends JFrame implements ActionListener {

  private JMenuItem addItem, deleteItem;
  private DefaultListModel listModel;
  private JList list;

  X28_Dialog() {
    super("ダイアログ");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JMenuBar menubar = new JMenuBar();
    super.setJMenuBar(menubar);
    JMenu menu = new JMenu("編集");
    menubar.add(menu);
    addItem = new JMenuItem("追加");
    menu.add(addItem);
    addItem.addActionListener(this);
    deleteItem = new JMenuItem("削除");
    menu.add(deleteItem);
    deleteItem.addActionListener(this);

    String listData[] = {
      "あ", "い", "う", "え", "お", "か", "き", "く", "け", "こ"
    };
    listModel = new DefaultListModel<String>();
    for(int i=0; i<listData.length; i++){
      listModel.addElement(listData[i]);
    }
    list = new JList(listModel);

    JScrollPane listPane = new JScrollPane();
    listPane.getViewport().add(list);
    getContentPane().add(listPane);

    pack();
    setSize(200, 200);

  }

  public void actionPerformed(ActionEvent e) {
    X28_AddDialog dialog = new X28_AddDialog(this);

    if(e.getSource().equals(addItem)) {
      dialog.show();
      if(dialog.isButtonPressed()) {
        listModel.addElement(dialog.getInput());
      }
    }

    else if(e.getSource().equals(deleteItem)) {
      int option = JOptionPane.showConfirmDialog(this, "削除してもよろしいですか?", "削除", JOptionPane.YES_NO_CANCEL_OPTION);
      if(option == JOptionPane.NO_OPTION || option == JOptionPane.CANCEL_OPTION) {
        return;
      }
      Object obj[] = list.getSelectedValues();
      for(int i=0; i<obj.length; i++){
        listModel.removeElement(obj[i]);
      }
    }
  }

  public static void main(String[] args) {
    new X28_Dialog().setVisible(true);
  }

}


class X28_AddDialog extends JDialog implements ActionListener {

  private JTextField textField;
  private boolean buttonPressed;

  X28_AddDialog(Frame owner) {
    super(owner, "文字を追加してください", true);

    textField = new JTextField();

    Box textBox = new Box(BoxLayout.Y_AXIS);
    getContentPane().add(textBox, BorderLayout.NORTH);
    textBox.add(new JLabel("文字を追加してください"));
    textBox.add(textField);

    JButton addButton = new JButton("追加");
    addButton.addActionListener(this);
    getContentPane().add(addButton, BorderLayout.SOUTH);

    pack();

  }

  public boolean isButtonPressed() {
    int option = JOptionPane.showConfirmDialog(this, "追加してもよろしいですか？", "追加", JOptionPane.YES_NO_CANCEL_OPTION);
    if(option == JOptionPane.NO_OPTION || option == JOptionPane.CANCEL_OPTION) {
      return false;
    }
    return (buttonPressed);
  }

  public String getInput() {
    return textField.getText();
  }

  public void actionPerformed(ActionEvent e) {
    if(!textField.getText().equals("")) {
      buttonPressed = true;
    }
    this.hide();

  }

}
