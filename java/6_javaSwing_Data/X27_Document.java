
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.text.*;

class X27_Document extends JFrame {

  private JTextField textField;
  private MyDocument doc;

  public X27_Document() {
    super("ドキュメント");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    doc = new MyDocument();
    textField = new JTextField(doc, "", 5);
    getContentPane().add(textField);

    pack();

  }

  public static void main(String[] args) {
    new X27_Document().setVisible(true);
  }

}


class MyDocument extends PlainDocument {

  public MyDocument() {
    super();
  }

  public void insertString(int offset, String text, AttributeSet attributes) throws BadLocationException {
    try {
      Integer.parseInt(text);
    }catch(NumberFormatException e) {
      return;
    }

    for(int i=0; i<text.length(); i++){
      if(this.getLength() > 3) {
        return;
      }
      super.insertString(offset + i, text, attributes);
    }
  }

  public void remove(int offs, int len) throws BadLocationException {
    if(offs < 0) {
      return;
    }
    super.remove(offs, len);
  }

}
