import java.util.*;
public class week2b {
    public static void main(String[] args){
        int n;
        System.out.println("enter no.of elements");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        int[] arr=new int[n];
        for (int i=0; i<n; i++){
            arr[i]=s.nextInt();
        }
       // ArrayList<Integer>al=new ArrayList<Integer>();
        int k=0;
        for (int i=0; i<n; i++){
            int c=0;
            if(arr[i]%2!=0) {
               for (int j=1; j<=arr[i]/2; j++) {
                   if(arr[i]%j==0) {
                       c++;
                       k++;
                   }
            }
            if(c==1){
              //  al.add(arr[i]);
              System.out.println(arr[i]);
            }
        }
    }
    if(k==0){
        System.out.println("not found");
    }
  //  else{
   //     System.out.println(al);
   // }
}
}
