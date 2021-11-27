import java.awt.*;
import java.awt.event.*;
import java.util.*;
class mobiles extends Frame implements KeyListener
{
    String msg;
    String gettext;
    String puttext;
    Label l;
    Label l2;
    Label l3;
    Label l4;
    TextField t;
    TextField t2;
    String mobile_number;
    public mobiles()
    {
        super("Mobile validate, lower to upper!");
        setLayout(new FlowLayout());
        l=new Label("Enter text");
        l2=new Label("Enter mobile number");
        l3=new Label(" ");
        l4=new Label(" ");
        t=new TextField(35);
        t2=new TextField(40);
        l3.setBounds(35,200,25,25);
        l4.setBounds(35,400,25,25);
        add(l);
        add(t);
        add(l2);
        add(t2);
        add(l3);
        add(l4);
        t.addKeyListener(this);
        t2.addKeyListener(this);
    }
    public void keyTyped(KeyEvent e)
    {
        
    }
    public void keyPressed(KeyEvent e)
    {
    }
    public void keyReleased(KeyEvent e)
    {
       gettext=t.getText();
       puttext=gettext.toUpperCase();
       l3.setText(puttext);
        
       mobile_number=t2.getText();
       int l=mobile_number.length();
       if(e.getKeyChar()>='0' && e.getKeyChar()<='9')
       {
           if(l==9)
           {
               l4.setBackground(Color.GREEN);
               l4.setText("Number validated");
           }

       else
       {
           l4.setText("Enter correct number");
            l4.setBackground(Color.RED);
       }
       
        
    }
}
}

public class prog5 {
    public static void main(String[] args){
        mobiles f = new mobiles();
        f.setSize(500,500);
        f.setVisible(true);
    }
}