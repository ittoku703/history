
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.tree.*;

class X35_TreeDefault extends JFrame implements ActionListener {

  private JTree tree;
  private JButton addButton, delButton;

  X35_TreeDefault() {
    super("ツリー");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    String[] lowerCases = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    String[] upperCases = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    Hashtable<String, String[]> alphabets = new Hashtable<String, String[]>();
    alphabets.put("小文字", lowerCases);
    alphabets.put("大文字", upperCases);

    String[] hiraganas = {"あ", "い", "う", "え", "お", "か", "き", "く", "け", "こ"};
    String[] kanjis = {"一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
    Hashtable<String, String[]> japaneses = new Hashtable<String, String[]>();
    japaneses.put("ひらがな", hiraganas);
    japaneses.put("漢字", kanjis);

    Hashtable<String, Hashtable<String, String[]>> root
      = new Hashtable<String, Hashtable<String, String[]>>();
    root.put("英字", alphabets);
    root.put("和字", japaneses);

    tree = new JTree(root);
    JScrollPane treePane = new JScrollPane();
    treePane.getViewport().add(tree);
    treePane.setPreferredSize(new Dimension(150, 200));
    getContentPane().add(treePane, BorderLayout.CENTER);

    JPanel panel = new JPanel(new GridLayout(1, 2));
    getContentPane().add(panel, BorderLayout.SOUTH);
    addButton = new JButton("追加");
    addButton.addActionListener(this);
    delButton = new JButton("削除");
    delButton.addActionListener(this);
    panel.add(addButton);
    panel.add(delButton);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    if(tree.getSelectionCount() != 1) {
      JOptionPane.showMessageDialog(this, "１つだけ選択", "エラー", JOptionPane.ERROR_MESSAGE);
      return;
    }

    DefaultTreeModel treeModel = (DefaultTreeModel)tree.getModel();
    MutableTreeNode selectedNode = (MutableTreeNode)tree.getSelectionPath().getLastPathComponent();

    if(e.getSource().equals(addButton)) {
      if(treeModel.isLeaf(selectedNode)){
        JOptionPane.showMessageDialog(this, "リーフには追加できないです", "エラー", JOptionPane.ERROR_MESSAGE);
        return;
      }

      String leafName = JOptionPane.showInputDialog(this, "追加するリーフを入力");
      if((leafName != null) && (!leafName.equals(""))){
        treeModel.insertNodeInto(new DefaultMutableTreeNode(leafName), selectedNode, 0);
      } else {
        JOptionPane.showMessageDialog(this, "入力してください", "エラー", JOptionPane.ERROR_MESSAGE);
      }

    }

    if(e.getSource().equals(delButton)) {
      int Option = JOptionPane.showConfirmDialog(this, "削除してもよろしいですか", "削除", JOptionPane.YES_NO_CANCEL_OPTION);

      if(Option == JOptionPane.YES_OPTION){
        treeModel.removeNodeFromParent(selectedNode);
      } else {
        return;
      }

    }

  }

  public static void main(String[] args) {
    new X35_TreeDefault().setVisible(true);
  }

}
