import java.util.*;
class week3a{
    public static void main(String[] args){
        int n;
        Scanner s=new Scanner(System.in);
        System.out.println("enter value of n");
        n=s.nextInt();
        int[] a=new int[n*n];
        System.out.println("enter the elements");
        for(int i=0; i<n*n; i++){
            a[i]=s.nextInt();
        }
        System.out.println("the left diagonal elements are");
        for(int i=0; i<n*n; i+=n+1){
            System.out.print(a[i] + " ");
        }
    }
}