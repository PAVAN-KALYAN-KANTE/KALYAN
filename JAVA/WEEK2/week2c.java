import java.util.*;
public class week2c {
   public static void main(String[] args){
       int n;
       final int N=10000009;
       int[] a2=new int[N];
       System.out.println("enter no.of elements ");
       Scanner s=new Scanner(System.in);
       n=s.nextInt();
       int[] a1=new int[n];
       for(int i=0; i<n; i++) {
           a1[i]=s.nextInt();
           a2[a1[i]]++;
       }
       ArrayList<Integer> a3=new ArrayList<Integer>();
       for(int i=0; i<n;i++) {
           if(!a3.contains(a1[i])) {
               a3.add(a1[i]);
           }
       }
       for(int i=0; i<n; i++) {
           System.out.println(a3.get(i)+"--"+a2[a3.get(i)]);
       }
   }
}
