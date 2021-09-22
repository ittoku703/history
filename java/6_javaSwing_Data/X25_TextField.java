
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X25_TextField extends JFrame implements ActionListener {

  private JTextField textField;
  private JList list;
  private DefaultListModel listModel;
  private JButton addButton, deleteButton;

  X25_TextField(){
    super("テキストフィールド");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    Box box = new Box(BoxLayout.Y_AXIS);
    textField = new JTextField(5);
    getContentPane().add(box, BorderLayout.NORTH);
    box.add(new JLabel("リストに追加したい文字を入力"));
    box.add(new JLabel("削除したい文字を入力し、削除ボタンをクリック"));
    box.add(textField);

    JPanel panel = new JPanel();
    getContentPane().add(panel, BorderLayout.CENTER);
    addButton = new JButton("追加");
    addButton.addActionListener(this);
    panel.add(addButton);
    deleteButton = new JButton("削除");
    deleteButton.addActionListener(this);
    panel.add(deleteButton);

    String listItem[] = {
      "あ", "か", "さ", "た", "な", "は", "ま", "や", "ら", "わ"
    };
    listModel = new DefaultListModel<String>();
    for(int i=0; i<listItem.length; i++) {
      listModel.addElement(listItem[i]);
    }

    list = new JList<String>(listModel);
    JScrollPane scrollPane = new JScrollPane();
    scrollPane.getViewport().add(list);
    getContentPane().add(scrollPane, BorderLayout.SOUTH);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource().equals(addButton)){
      String str = textField.getText();
      for(int i=0; i<str.length(); i++){
        if(!Character.isISOControl(str.charAt(i)) && !Character.isWhitespace(str.charAt(i))){
          listModel.addElement(str);
          break;
        }
      }
    }
    if(e.getSource().equals(deleteButton)){
      Object items[] = list.getSelectedValues();
      for(int i=0; i<items.length; i++){
        listModel.removeElement(items[i]);
      }
    }

  }

  public static void main(String[] args) {
    new X25_TextField().setVisible(true);
  }

}
