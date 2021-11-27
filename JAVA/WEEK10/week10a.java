import java.util.*;
class week10a{
    public static void main(String[] args){
        int a,b;
        Scanner s=new Scanner(System.in);
        try {
            System.out.println("enter number 1: ");
            a=s.nextInt();
            System.out.println("enter number 2: ");
            b=Integer.parseInt(s.next());
            System.out.println("division of "+a+" by "+b+" is "+a/b);
        }
        catch (NumberFormatException e) {System.out.println(e);}
        catch(ArithmeticException e) {System.out.println(e);}
    }
}
