import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;


public class X02_Hashtable extends JFrame implements ActionListener {

  private JButton name[] = {
    new JButton("ねこ"),
    new JButton("いぬ"),
    new JButton("やまもと"),
    new JButton("こーひー"),
    new JButton("充電器"),
    new JButton("コントローラー")
  };
  private JLabel label;

  private Hashtable table = new Hashtable();

  public X02_Hashtable(){
    super("名前");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    table.put("ねこ", "ふんじゃった");
    table.put("いぬ", "ひろし");
    table.put("やまもと", "かずのり");
    table.put("こーひー", "牛乳");
    table.put("充電器", "さいこー");
    table.put("コントローラー", "すぐ壊れる");

    Color backColor[] = { Color.red, Color.red, Color.red, Color.red, Color.red, Color.red};

    Color foreColor[] = { Color.black, Color.blue, Color.gray, Color.white, Color.orange, Color.pink};

    Dimension size = new Dimension(150, 50);

    for(int i=0; i<name.length; i++){
      name[i].setBackground(backColor[i]);
      name[i].setForeground(foreColor[i]);
      name[i].setMinimumSize(size);
      name[i].setPreferredSize(size);
      name[i].setMaximumSize(size);
      name[i].addActionListener(this);
    }


    Box topBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(topBox, BorderLayout.NORTH);

    topBox.add(Box.createHorizontalStrut(5));
    topBox.add(name[0]);
    topBox.add(Box.createHorizontalGlue());
    topBox.add(name[1]);
    topBox.add(Box.createHorizontalGlue());
    topBox.add(name[2]);
    topBox.add(Box.createHorizontalStrut(5));


    Box centerBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(centerBox, BorderLayout.CENTER);

    centerBox.add(Box.createHorizontalStrut(5));
    centerBox.add(name[3]);
    centerBox.add(Box.createHorizontalGlue());
    centerBox.add(name[4]);
    centerBox.add(Box.createHorizontalGlue());
    centerBox.add(name[5]);
    centerBox.add(Box.createHorizontalStrut(5));


    label = new JLabel("(・∀・)");
    label.setHorizontalAlignment(SwingConstants.CENTER);
    label.setPreferredSize(new Dimension(250, 50));
    getContentPane().add(label, BorderLayout.SOUTH);

    pack();

    }

    public void actionPerformed(ActionEvent e){
      String key = ((JButton)e.getSource()).getText();
      label.setText((String)table.get(key));
  }

  public static void main(String[] args){
    new X02_Hashtable().setVisible(true);
  }

}
