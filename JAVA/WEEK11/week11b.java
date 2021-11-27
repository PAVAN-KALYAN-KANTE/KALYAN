import java.util.*;
class counter{
    int c;
    synchronized public void increment(){
       c++;
    }
}
public class week11b {
    public static void main(String[] args) throws Exception{
    counter C=new counter();
    Thread t1=new Thread(new Runnable() {
        public void run(){
            try {
            for(int i=0;i<1000;i++) {
                C.increment();
            }
        }
        catch(Exception e){}
        }
    });
    Thread t2=new Thread(new Runnable() {
        public void run(){
            try {
            for(int i=0;i<1000;i++) {
                C.increment();
            }
        }
        catch(Exception e){}
        }
    });
    t1.start();
    t2.start();
    t1.join();
    t2.join();
    System.out.println(C.c);
}
}
