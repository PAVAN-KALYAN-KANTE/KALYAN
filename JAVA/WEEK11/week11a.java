import java.util.*;
class A extends Thread{
    synchronized public void run() {
         try {
             while (true) {
                 sleep(1000);
                 System.out.println("good morning");
             }
         }
         catch(Exception e) {}
     }
}
class B extends Thread{
    synchronized public void run() {
        try {
            while (true) {
                sleep(2000);
                System.out.println("hello");
            }
        }
        catch(Exception e) {}
    }
}
class C extends Thread{
   synchronized public void run() {
        try{
        while(true) {
            sleep(3000);
            System.out.println("welcome");
        }
    }
    catch(Exception e) {}
    }
}
class week11a{
    public static void main(String[] args){
        A t1=new A();
        B t2=new B();
        C t3=new C();
        t1.start();
        t2.start();
        t3.start();
    }
}