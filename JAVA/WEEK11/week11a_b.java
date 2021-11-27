import java.util.*;
public class week11a_b {
    public static void main(String[] args){
        Runnable A=new Runnable() {
           synchronized public void run(){
                 try {
                     while(true){
                         Thread.sleep(1000);
                         System.out.println("good morning");
                     }
                 }
                 catch(Exception e){}
             }
        } ;
        Runnable B=new Runnable() {
          synchronized  public void run(){
                try{
                    while(true){
                        Thread.sleep(2000);
                        
                        System.out.println("Hello");
                    }
                }
                catch(Exception e){}
            }
        };
        Runnable C=new Runnable() {
            synchronized public void run(){
                try{
                    while(true){
                        Thread.sleep(3000);
                        System.out.println("Welcome");
                    }
                }
                catch(Exception e){}
            }
        };
        Thread t1=new Thread(A);
        Thread t2=new Thread(B);
        Thread t3=new Thread(C);
        t1.start();
        t2.start();
        t3.start();
    }
}
