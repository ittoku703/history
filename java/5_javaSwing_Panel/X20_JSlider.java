
import java.awt.BorderLayout;
import javax.swing.*;
import javax.swing.event.*;

class X20_JSlider extends JFrame implements ChangeListener {

  private JLabel label;
  private JSlider slider;

  static final int MIN_VALUE = 0;
  static final int MAX_VALUE = 100;

  public X20_JSlider() {
      super("スライダー");
      setDefaultCloseOperation(EXIT_ON_CLOSE);

      slider = new JSlider(SwingConstants.HORIZONTAL, MIN_VALUE, MAX_VALUE, MIN_VALUE);
      slider.addChangeListener(this);
      label = new JLabel("0", SwingConstants.CENTER);
      getContentPane().add(label, BorderLayout.CENTER);
      getContentPane().add(new JLabel(String.valueOf(MIN_VALUE), SwingConstants.LEFT), BorderLayout.WEST);
      getContentPane().add(new JLabel(String.valueOf(MAX_VALUE), SwingConstants.RIGHT), BorderLayout.EAST);
      getContentPane().add(slider, BorderLayout.SOUTH);

      pack();

  }

  public void stateChanged(ChangeEvent e){
    label.setText(String.valueOf(slider.getValue()));
  }

  public static void main(String[] args){
    new X20_JSlider().setVisible(true);
  }

}
