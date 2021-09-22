
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class X26_TextArea extends JFrame implements ActionListener {

  private JTextArea textArea;
  private String fontVariation[] = {"Serif", "sansSerif", "Monospaced", "Dialog", "DialogInput", "Symbol"};
  private JList list;
  private JCheckBox Style[] = {new JCheckBox("BOLD"), new JCheckBox("ITALIC")};
  private JTextField textField;

  X26_TextArea() {
    super("テキストエリア");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    textArea = new JTextArea("サンプルだよ", 10, 10);

    list = new JList<String>(fontVariation);
    list.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);

    textField = new JTextField(3);

    JButton changeButton = new JButton("変更");
    changeButton.addActionListener(this);

    JScrollPane areaPane = new JScrollPane();
    getContentPane().add(areaPane, BorderLayout.NORTH);
    areaPane.setPreferredSize(new Dimension(200, 100));
    areaPane.getViewport().add(textArea);

    JScrollPane fieldPane = new JScrollPane();
    fieldPane.getViewport().add(list);

    JPanel panel = new JPanel();
    getContentPane().add(panel, BorderLayout.SOUTH);

    Box fontBox = new Box(BoxLayout.Y_AXIS);
    fontBox.add(new JLabel("フォントを選択"));
    fontBox.add(fieldPane);
    panel.add(fontBox);

    Box styleBox = new Box(BoxLayout.Y_AXIS);
    styleBox.add(new JLabel("スタイルを選択"));
    for(int i=0; i<Style.length; i++){
      styleBox.add(Style[i]);
    }
    panel.add(styleBox);

    Box sizeBox = new Box(BoxLayout.Y_AXIS);
    sizeBox.add(new JLabel("サイズを入力"));
    sizeBox.add(textField);
    panel.add(sizeBox);

    panel.add(changeButton);

    pack();

  }

  public void actionPerformed(ActionEvent e) {
    String font = (String)list.getSelectedValue();

    int style;
    if(Style[0].isSelected() && Style[1].isSelected()){
      style = (Font.BOLD | Font.ITALIC);
    } else if(Style[0].isSelected()){
      style = Font.BOLD;
    } else if(Style[1].isSelected()){
      style = Font.ITALIC;
    } else {
      style = Font.PLAIN;
    }

    String tmpsize = textField.getText();
    int size;
    boolean flag = true;

    if(tmpsize.length() == 0){
      flag = false;
    }

    for(int i=0; i<tmpsize.length(); i++) {
      if(!Character.isDigit(tmpsize.charAt(i))){
        flag = false;
        break;
      }
    }

    if(flag) {
      size = Integer.parseInt(tmpsize);
    } else {
      size = 20;
    }

    textArea.setFont(new Font(font, style, size));

  }

  public static void main(String[] args) {
    new X26_TextArea().setVisible(true);
  }

}
