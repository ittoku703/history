
import java.util.*;
import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;

class X33_TreeExpansion extends JFrame implements TreeExpansionListener {

  private JTree tree;

  X33_TreeExpansion() {
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
    tree.addTreeExpansionListener(this);
    treePane.getViewport().add(tree);
    treePane.setPreferredSize(new Dimension(150, 200));
    getContentPane().add(treePane, BorderLayout.CENTER);

    pack();

  }

  public void treeExpanded(TreeExpansionEvent e) {
    JOptionPane.showMessageDialog(
      this,
      e.getPath(),
      "EXPANSION",
      JOptionPane.INFORMATION_MESSAGE);
  }

  public void treeCollapsed(TreeExpansionEvent e) {
    JOptionPane.showMessageDialog(
      this,
      e.getPath().getLastPathComponent(),
      "CLOSE",
      JOptionPane.INFORMATION_MESSAGE);

  }

  public static void main(String[] args) {
    new X33_TreeExpansion().setVisible(true);
  }

}
