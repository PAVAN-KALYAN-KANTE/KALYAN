import java.util.*;
public class week2a {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("enter no.of inputs: ");
        int t;
        t=s.nextInt();
        int i=1;
        while(t-->0){
            System.out.println("enter the number "+i);
            long l=s.nextLong();
            if(l>=Byte.MIN_VALUE && l<=Byte.MAX_VALUE){
               System.out.println("can be stored in byte");
            }
            if(l>=Short.MIN_VALUE && l<=Short.MAX_VALUE){
               System.out.println("can be stored in short");
            }
            if(l>=Long.MIN_VALUE && l<=Long.MAX_VALUE){
               System.out.println("can be stored in Long");
            }
            if(l>=Integer.MIN_VALUE && l<=Integer.MAX_VALUE){
                System.out.println("can be stored in Integer");
            }
            i++;
        }
    }
}
