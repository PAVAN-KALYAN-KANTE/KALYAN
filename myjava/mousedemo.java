import java.awt.*;
import java.awt.event.*;
import java.javax.swing.*;
public class mousedemo extends Jframe implements MouseListener,MouseMotionListener {
    string msg1=" ",msg2=" ",msg3=" ";
    int x1=0,y1=0,x2=0,y2=0;
    JLabel jl1,jl2,jl3;
    public mousedemo(String msg){
        super(msg);
        jl1=new JLabel();
        jl2=new JLabel();
        jl3=new JLabel();
        SetLayout(new GridLayout(1,3));
        add(jl1);
        add(jl2);
        add(jl3);
        addMouseListener(this);
        addMouseMotionListener(this);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we){System.exit(0);}
        });
    }
    public void mouseClicked(MouseEvent me){
        msg1="mouse clicked";
        jl1.setText(msg1);
    }
    public void mouseEntered(MouseEvent me){
        int X=me.getX();
        int Y=me.getY();
        msg2="mouse clicked at ("+X","+Y")";
        jl2.setText(msg2);
    }
    public void mouseExcited(MouseEvent me){
        
    }
}
