import java.awt.*;

import javax.swing.*;

public class X02_Menu extends JFrame {
  Dimension size = new Dimension(600, 400);

  public X02_Menu(){
    super("Menu");
    super.setDefaultCloseOperation(EXIT_ON_CLOSE);
    super.setSize(size);

/*----------------------------------------------------------------------------*/

    JMenuBar menuBar = new JMenuBar();            //上のスライドバー
    super.setJMenuBar(menuBar);

    JMenu fileMenu = new JMenu("File");           //メニューバーに入れる
    menuBar.add(fileMenu);

    JMenuItem openMenu = new JMenuItem("open");   //ファイルメニューに入れる
    fileMenu.add(openMenu);

/*----------------------------------------------------------------------------*/

    /*チェックが1つつく*/
    JMenu radioMenu = new JMenu("Radio");         //メニューバーに入れる
    menuBar.add(radioMenu);

    ButtonGroup group = new ButtonGroup();        //グループ作成

    JRadioButtonMenuItem radioButton1 = new JRadioButtonMenuItem("radio1");
    radioMenu.add(radioButton1);
    group.add(radioButton1);        //ラジオメニューに入れる

    JRadioButtonMenuItem radioButton2 = new JRadioButtonMenuItem("radio2");
    radioMenu.add(radioButton2);
    group.add(radioButton2);        //ラジオメニューに入れる

/*----------------------------------------------------------------------------*/

    /*チェックが複数つく*/
    JMenu checkMenu = new JMenu("CheckBox");      //メニューバーに入れる
    menuBar.add(checkMenu);

    JCheckBoxMenuItem checkBox1 = new JCheckBoxMenuItem("check1");
    checkMenu.add(checkBox1);     //チェックメニューに入れる

    JCheckBoxMenuItem checkBox2 = new JCheckBoxMenuItem("check2");
    checkMenu.add(checkBox2);     //チェックメニューに入れる

  }

  public static void main(String... args){
    new X02_Menu().setVisible(true);

  }

}
