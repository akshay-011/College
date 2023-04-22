import javax.swing.*;
import java.awt.event.*;

class Exp17 implements ActionListener {
    JTextField one, two;
    JLabel out = new JLabel();

    public Exp17() {
        JFrame f = new JFrame("Experiment 17");

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setSize(800, 800);
        f.setVisible(true);
        f.setLayout(null);

        one = new JTextField("TextField one");
        one.setBounds(300, 400, 200, 30);
        f.add(one);

        two = new JTextField("TextField two");
        two.setBounds(300, 450, 200, 30);
        f.add(two);

        out.setBounds(300, 350, 200, 30);
        f.add(out);

        one.setActionCommand("one");
        two.setActionCommand("two");

        one.addActionListener(this);
        two.addActionListener(this);

    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("one")) {
            out.setText("TextField one selected");
        } else {
            out.setText("TextField two selected");
        }
    }

    public static void main(String[] args) {
        new Exp17();
    }
}
