import javax.swing.*;
import java.awt.event.*;

public class Exp16 implements ActionListener {
    JButton button1 = new JButton("  +  ");
    JButton button2 = new JButton("  0  ");
    int count = 0;
    int ok=1;
    JLabel t = new JLabel(count + " times clicked.....");
    Exp16(){
        JFrame f = new JFrame("Experiment 16");
        f.setSize(700,800);
        f.setVisible(true);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        button1.setBounds(280, 400, 100, 50);
        f.add(button1);
        button1.addActionListener(this);
        t.setBounds(330, 200, 200, 100);
        f.add(t);

        button2.setBounds(400, 400, 100, 50);
        f.add(button2);
        button2.addActionListener(this);

    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource() == button1){
            count = count + ok;
            if(count > 15)
                ok++;
        }
        else{
            count = 0;
        }
        t.setText(count + " times clicked.....");
    }
    public static void main(String[] args) {
        new Exp16();
    }
}
