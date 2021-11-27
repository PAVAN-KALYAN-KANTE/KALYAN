import java.util.*;
import java.lang.*;
public class week7b {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        s.nextLine();
        char c=s.nextLine().charAt(0);
        double d=s.nextDouble();
        Vector v=new Vector();
        v.add(Integer.valueOf(a));
        v.add(Character.valueOf(c));
        v.add(Double.valueOf(d));
        /*for(int i=0; i<v.size(); i++){
            System.out.print(v.get(i)+" ");
        }*/
        System.out.println(v);
    }
}
