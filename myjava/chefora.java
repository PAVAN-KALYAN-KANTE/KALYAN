import java.util.*;
import java.io.*;

public class chefora {
    public static void getche(ArrayList<Long>v1){
        v1.add(0,(long) -1);
        long rem,num,d;
        for(long i=1;i<100001;i++){
            rem=i/10;
            num=i;
            while(rem!=0){
                d=rem%10;
                num=num*10+d;
                rem=rem/10;
            }
            v1.add(num+v1.get((int) (i-1)));
        }
    }
    static long getpower(Long x, Long y, int i)
    {
      long res = 1;
   
      x = x % i;
   
      if (x == 0)
        return 0; 
   
      while (y > 0)
      {
   
        if ((y & 1) != 0)
          res = (res * x) % i;
   
        y = y >> 1; // y = y/2
        x = (x * x) % i;
      }
      return res;
    }
    public static void main(String[] args){
        ArrayList<Long>v1=new ArrayList<Long>();
        getche(v1);
        Long t;
        Scanner s=new Scanner(System.in);
        t=s.nextLong();
        s.nextLine();
        while (t-- > 0){
            int l;
            int r;
            l=s.nextInt();
            r=s.nextInt();
            long base=v1.get(l)-v1.get(l-1);
            long power=v1.get(r)-v1.get(l);
            long p=getpower(base,power,1000000007);
            System.out.println(p);
        }
    }
    
}
