import java.util.*;
class week8a{
    public static void main(String[] args){
    int x1,x2;
    Scanner s=new Scanner(System.in);
    System.out.println("enter two numbers");
    x1=s.nextInt();
    x2=s.nextInt();
    Random r=new Random();
    System.out.println("enter no.of numbers");
    int n=s.nextInt();
    for(int i=0;i<n;i++){
        System.out.print((r.nextInt(x2-x1+1)+x1)+" ");
    }
}
}