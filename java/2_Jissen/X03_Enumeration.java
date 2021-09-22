import java.awt.Color;
import java.awt.Dimension;
import java.awt.BorderLayout;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import java.util.Vector;
import java.util.Enumeration;

import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.Box;
import javax.swing.BoxLayout;

public class X03_Enumeration extends JFrame implements ActionListener {

  JButton EMOJI[] = {
    new JButton("｡･ω･)ﾉﾞ ｺﾝﾁｬ"),
    new JButton("(*´･ω･)(･ω･`*)ﾈｰ"),
    new JButton("(￣ー￣)ﾆﾔﾘ"),
    new JButton("(　･∀･)ﾉｼ")
  };

  private JButton display;
  private JButton initialize;

  private Dimension size = new Dimension(150, 50);

  private Vector vector = new Vector();

  public X03_Enumeration(){
    super("えもじ");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    Color foreColor[] = { Color.black, Color.black, Color.black, Color.black, };

    for(int i=0; i<EMOJI.length; i++){
      EMOJI[i].setForeground(foreColor[i]);
      EMOJI[i].setMinimumSize(size);
      EMOJI[i].setPreferredSize(size);
      EMOJI[i].setMaximumSize(size);
      EMOJI[i].addActionListener(this);
    }

    Box topBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(topBox, BorderLayout.NORTH);

    topBox.add(Box.createHorizontalStrut(60));
    topBox.add(EMOJI[0]);
    topBox.add(Box.createHorizontalGlue());
    topBox.add(EMOJI[1]);
    topBox.add(Box.createHorizontalStrut(60));


    Box centerBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(centerBox, BorderLayout.CENTER);

    centerBox.add(Box.createHorizontalStrut(60));
    centerBox.add(EMOJI[2]);
    centerBox.add(Box.createHorizontalGlue());
    centerBox.add(EMOJI[3]);
    centerBox.add(Box.createHorizontalStrut(60));


    display = new JButton("表示");
    display.addActionListener(this);

    initialize = new JButton("初期化");
    initialize.addActionListener(this);

    Box bottomBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(bottomBox, BorderLayout.SOUTH);

    bottomBox.add(Box.createHorizontalStrut(60));
    bottomBox.add(display);
    bottomBox.add(Box.createHorizontalGlue());
    bottomBox.add(initialize);
    bottomBox.add(Box.createHorizontalStrut(60));


    pack();
  }

  public void actionPerformed(ActionEvent e){

    if(e.getSource().equals(display)){
      Enumeration enumeration = vector.elements();
      while(enumeration.hasMoreElements()){
        JButton button = (JButton)enumeration.nextElement();
        System.out.println(button.getText());
      }
    }
    else if(e.getSource().equals(initialize)){
      vector.clear();
    }
    else {
      for(int i=0; i<EMOJI.length; i++){
        if(e.getSource().equals(EMOJI[i])){
          vector.add(EMOJI[i]);
          break;
        }
      }
    }
  }

  public static void main(String[] args){
    new X03_Enumeration().setVisible(true);
  }

}
