import java.awt.*;
import java.applet.*;
class week12a extends Applet implements Runnable {
    String display;
    int x,y,flag;
    Thread t;

    public void init(){
        display="pavan kalyan";
        x=100; y=100;
        flag=1;
        t=new Thread(this,"mythread");
        t.start();
    }
    public void update(){
        x=x+10*flag;
        if(x>300){flag=-1;}
        if(x<100){flag=1;}
    }
    public void run(){
        while(true){
            repaint();
            update();
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){}
        }
    }
    public void paint(Graphics g){
        g.drawString(display,x,y);
    }
}