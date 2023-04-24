import javax.swing.*;
import java.awt.event.*;

public class Exp15 implements ActionListener{
    JButton cancel = new JButton("CANCEL");
    JButton ok = new JButton("OK");
    JLabel t = new JLabel();
    public Exp15(){

        JFrame f = new JFrame("Exp-15");

        f.setSize(700,800);
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        t.setBounds(330, 150, 200, 100);
        f.add(t);

        //Button Ok
        ok.setBounds(280, 300, 100, 60);
        f.add(ok);
        
        // Cancel
        cancel.setBounds(400, 300, 100, 60);
        f.add(cancel);
        
        ok.addActionListener(this);
        cancel.addActionListener(this);

    }
    public static void main(String args[]) {
        new Exp15();
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource() == ok){
            t.setText("Ok clicked..");
        }
        else if(e.getSource() == cancel){
            t.setText("Cancel clicked..");
        }
}
}
