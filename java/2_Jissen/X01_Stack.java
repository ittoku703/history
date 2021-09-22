import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class X01_Stack extends JFrame implements ActionListener {
  private JButton continent[] = {
    new JButton("赤レンジャー"),
    new JButton("青レンジャー"),
    new JButton("黄レンジャー"),
    new JButton("緑レンジャー"),
    new JButton("黒レンジャー")
  };
  private JButton display;
  private JButton initialize;

  private Stack stack = new Stack();

  public X01_Stack(){
    super("なんとか戦隊");
    setDefaultCloseOperation(EXIT_ON_CLOSE);

    Color backColor[] = { Color.white, Color.white, Color.white, Color.white, Color.white};

    Color foreColor[] = { Color.red, Color.blue, Color.yellow, Color.green, Color.black};

    Dimension size = new Dimension(150, 50);

    for(int i=0; i<continent.length; i++){
      continent[i].setBackground(backColor[i]);
      continent[i].setForeground(foreColor[i]);
      continent[i].setMinimumSize(size);
      continent[i].setPreferredSize(size);
      continent[i].setMaximumSize(size);
      continent[i].addActionListener(this);
    }

    Box topBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(topBox, BorderLayout.NORTH);

    topBox.add(Box.createHorizontalStrut(80));
    topBox.add(continent[0]);
    topBox.add(Box.createHorizontalGlue());
    topBox.add(continent[1]);
    topBox.add(Box.createHorizontalStrut(80));


    Box centerBox = new Box(BoxLayout.X_AXIS);
    getContentPane().add(centerBox, BorderLayout.CENTER);

    centerBox.add(Box.createHorizontalStrut(5));
    centerBox.add(continent[2]);
    centerBox.add(Box.createHorizontalGlue());
    centerBox.add(continent[3]);
    centerBox.add(Box.createHorizontalGlue());
    centerBox.add(continent[4]);
    centerBox.add(Box.createHorizontalStrut(5));


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
      while(!stack.empty()){
        JButton button = (JButton)stack.pop();
        System.out.println(button.getText());
      }
    }
    else if(e.getSource().equals(initialize)){
      stack.clear();
    }
    else {
      for(int i=0; i<continent.length; i++){
        if(e.getSource().equals(continent[i])){
          stack.push(continent[i]);
          break;
        }
      }
    }
  }

  public static void main(String[] args){
    new X01_Stack().setVisible(true);
  }
}
