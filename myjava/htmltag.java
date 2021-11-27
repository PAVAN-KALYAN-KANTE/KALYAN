import java.io.*;
import java.util.*;

public class htmltag {
    public static void main(String[] args) {
        int t;
     Scanner s=new Scanner(System.in);
     t=s.nextInt();
     s.nextLine();
     for(int i=t;i>=0;i--){
         String p;
        p=s.nextLine();
        //System.out.println(p);
            if(p.charAt(0)!='<' && p.charAt(1)!='/' && p.charAt(p.length()-1)!='>'){
                System.out.println("Error");
                return;
            }
            for (int k = 2; i < p.length()-2; k++){
                if (p.charAt(k)-'0'<0 ) {
                    System.out.println("Error");
                    return;
                }
                if (p.charAt(k)-'0'>9 && p.charAt(k)-'0'<49) {
                   System.out.println("Error"); 
                   return;
                }
                if(p.charAt(k)-'0'>57&& p.charAt(k)<97){
                    System.out.println("Error");
                    return;
                }
                else{
                    System.out.println("Success");
                    return;
                }
            }
    }
}
}
