
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.table.*;

public class X36_JTable extends JFrame implements MouseListener, ActionListener {

  private DefaultTableModel tableModel;
  private JTable table;

  private JPopupMenu popup;
  private JMenuItem addColumnItem;
  private JMenuItem addRowItem;
  private JMenuItem insertRowItem;

  X36_JTable() {
    super("テーブル");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    tableModel = new DefaultTableModel();
    for(int i=1; i<8; i++){
      tableModel.addColumn("Column"+i);
    }
    for(int i=0; i<5; i++){
      String[] data = new String[tableModel.getColumnCount()];
      for(int j=0; j<data.length; j++){
        data[j] = String.valueOf(j + i * tableModel.getColumnCount() + 1);
      }
      tableModel.addRow(data);
    }

    table = new JTable(tableModel);
    table.addMouseListener(this);
    JScrollPane tablePane = new JScrollPane();
    tablePane.getViewport().add(table);
    tablePane.setPreferredSize(new Dimension(500, 200));
    getContentPane().add(tablePane);

    popup = new JPopupMenu();
    addColumnItem = new JMenuItem("列の追加");
    addRowItem = new JMenuItem("行の追加");
    insertRowItem = new JMenuItem("行の挿入");
    addColumnItem.addActionListener(this);
    addRowItem.addActionListener(this);
    insertRowItem.addActionListener(this);
    popup.add(addColumnItem);
    popup.add(addRowItem);
    popup.add(insertRowItem);

    pack();

  }

  public void mouseClicked(MouseEvent e) {
    if(e.isMetaDown()){
      if(table.getSelectedRow() == -1){
        insertRowItem.setEnabled(false);
      } else{
        insertRowItem.setEnabled(true);
      }
    }
    if(SwingUtilities.isRightMouseButton(e)){
      popup.show(this, e.getX(), e.getY());
    }
  }

  public void mousePressed(MouseEvent e) {}
  public void mouseReleased(MouseEvent e) {}
  public void mouseEntered(MouseEvent e) {}
  public void mouseExited(MouseEvent e) {}

  public void actionPerformed(ActionEvent e) {



    if(e.getSource().equals(addColumnItem)){
      tableModel.addColumn("column" + (tableModel.getColumnCount() + 1));

      return;
    }

    if(e.getSource().equals(addRowItem)){
      String[] data = new String[tableModel.getColumnCount()];
      for(int i=0; i<data.length; i++){
        data[i] = "";
      }
      tableModel.addRow(data);

      return;
    }

    if(e.getSource().equals(insertRowItem)){
      String[] data = new String[tableModel.getColumnCount()];
      for(int i=0; i<data.length; i++){
        data[i] = "";
      }
      tableModel.insertRow(table.getSelectedRow(), data);

      return;
    }

  }

  public static void main(String[] args) {
    new X36_JTable().setVisible(true);
  }

}
