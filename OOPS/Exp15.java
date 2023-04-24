import javax.swing.*;
import java.awt.event.*;
import java.awt.FlowLayout;

public class exp15 implements ActionListener {
    JButton button1, button2;
    JLabel label=new JLabel("");

    public exp15() {
        JFrame frame = new JFrame("Button Click Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        button1 = new JButton("OK");
        button1.addActionListener(this);
        button2 = new JButton("Cancel");
        button2.addActionListener(this);
        frame.setLayout(new FlowLayout());
        frame.setSize(1000, 1000);
        frame.setVisible(true);
        frame.add(button1);
        frame.add(button2);
        frame.add(label);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button1) {
            System.out.println("OK clicked...");
            label.setText(" OK Clicked...");
        } else if (e.getSource() == button2) {
            System.out.println("Cancel clicked...");
            label.setText(" Cancel Clicked");
        }
    }

    public static void main(String[] args) {
        new exp15();
    }
}

