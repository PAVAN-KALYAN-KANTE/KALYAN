import java.util.*;
class calc{
    static int c=0;{c++; }
   public calc(){

    }
    public int intpow(int a,int b){
           return (int)Math.pow(a,b);
    }
    public double doublepow(double a,double b){
        return (double)Math.pow(a,b);
    }
}
public class week4b {
    public static void main(String[] args){
        calc a=new calc();
        calc b=new calc();
        calc c=new calc();
        System.out.println("intpow of 4 ,5 is"+a.intpow(4,5));
        System.out.println("doublepow of 2.2,4.5"+a.doublepow(2.2,4.5));
        System.out.println("no.of objects created "+calc.c);
    }
}
