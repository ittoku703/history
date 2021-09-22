
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X29_OptionPane extends JFrame implements ActionListener {

  private JMenuItem addItem, deleteItem;
  private DefaultListModel listModel;
  private JList list;

  X29_OptionPane() {
    super("オプションペイン");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    JMenuBar menubar = new JMenuBar();
    super.setJMenuBar(menubar);
    JMenu menu = new JMenu("編集");
    menubar.add(menu);
    addItem = new JMenuItem("追加");
    addItem.addActionListener(this);
    menu.add(addItem);
    deleteItem = new JMenuItem("削除");
    deleteItem.addActionListener(this);
    menu.add(deleteItem);

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

  }

  public void actionPerformed(ActionEvent e) {
    if(e.getSource().equals(addItem)) {
      String str = JOptionPane.showInputDialog("追加する文字を入力");
      if(str == null){
        return;
      } else if(str.equals("")){
          JOptionPane.showMessageDialog(null, "文字が入力されていません", "アラート", JOptionPane.ERROR_MESSAGE);
      } else {
          listModel.addElement(str);
      }
    }

    else if(e.getSource() == deleteItem) {
      Object obj = JOptionPane.showInputDialog(
        null,
        "削除する項目を選択",
        "削除",
        JOptionPane.PLAIN_MESSAGE,
        null,
        listModel.toArray(),
        null);
        listModel.removeElement(obj);
    }

  }

  public static void main(String[] args) {
    new X29_OptionPane().setVisible(true);
    JOptionPane.showInputDialog(parentComponent, message, title, messageType, icon, selectionValues, initialSelectionValue)
  }

}
