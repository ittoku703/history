
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
import javax.swing.table.*;

class X37_JTableColumn extends JFrame implements ActionListener {

  private JTable table;
  private DefaultTableModel tableModel;
  private Hashtable<String, Integer> modes;
  private JComboBox<Hashtable<String, Integer>> comboBox;

  public X37_JTableColumn() {
    super("テーブルコラム");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    tableModel = new DefaultTableModel();
    for(int i=1; i<6; i++){
      tableModel.addColumn("コラム " + i);
    }
    for(int i=0; i<6; i++){
      String[] data = new String[tableModel.getColumnCount()];
      for(int j=0; j<data.length; j++){
        data[j] = String.valueOf(j + i * tableModel.getColumnCount() + 1);
      }
      tableModel.addRow(data);
    }

    table = new JTable(tableModel);
    JScrollPane tablePane = new JScrollPane();
    tablePane.getViewport().add(table);
    tablePane.setPreferredSize(new Dimension(600, 400));
    getContentPane().add(tablePane, BorderLayout.CENTER);

    modes = new Hashtable<String, Integer>();
    modes.put("AUTO_RESIZE_OFF", new Integer(JTable.AUTO_RESIZE_OFF));
    modes.put("AUTO_RESIZE_LAST_COLUMN", new Integer(JTable.AUTO_RESIZE_LAST_COLUMN));
    modes.put("AUTO_RESIZE_SUBSEQUENT_COLUMNS", new Integer(JTable.AUTO_RESIZE_SUBSEQUENT_COLUMNS));
    modes.put("AUTO_RESIZE_NEXT_COLUMN", new Integer(JTable.AUTO_RESIZE_NEXT_COLUMN));
    modes.put("AUTO_RESIZE_ALL_COLUMNS", new Integer(JTable.AUTO_RESIZE_ALL_COLUMNS));
    /*AUTO_RESIZE_OFF	テーブルのサイズを変更する事により、サイズの変更を対象とする列だけに影響させます。
    AUTO_RESIZE_LAST_COLUMN	テーブルのサイズは変えず、一番右の列で調節します。
    AUTO_RESIZE_SUBSEQUENT_COLUMNS	サイズを変更する列の右側にある全ての列で調節します。
    AUTO_RESIZE_NEXT_COLUMN	右隣の列で調節します。
    AUTO_RESIZE_ALL_COLUMNS	サイズを変更する列以外の全ての列で調節します。
    */
    comboBox = new JComboBox(modes.keySet().toArray());
    comboBox.addActionListener(this);
    getContentPane().add(comboBox, BorderLayout.NORTH);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    table.setAutoResizeMode(
      ((Integer)(modes.get(comboBox.getSelectedItem().toString())))
        .intValue());
  }

  public static void main(String[] args) {
    new X37_JTableColumn().setVisible(true);
  }

}
