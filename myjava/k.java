import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
/*
<applet code="appletscroll.class" width="500" height="500">
</applet>
*/
public class appletscroll extends JApplet implements Runnable
{
    String msg="Welcome to Applets";
    int x=0,y=200;
    Thread t=null;
    public void init()
    {
        setBackground(Color.YELLOW);
        setForeground(Color.GREEN);
        t=new Thread(this);
        t.start();
    }
    public void run()
    {
        while(true)
        {
            if(x<500)
            {
                x=x+1;
                repaint();
                try
                {
                    Thread.sleep(200);
                }
                catch(Exception e)
                {

                }
            }
        }
    }
    public void paint(Graphics g)
    {
        g.drawString(msg,x,y);
    }
}