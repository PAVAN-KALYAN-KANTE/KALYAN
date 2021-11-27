import java.util.*;
public class week5c {
    public static void main(String[] args){
        String s1,s2;
        Scanner s = new Scanner(System.in);
        System.out.println("enter string1");
        s1=s.nextLine();
        System.out.println("enter string2");
        s2=s.nextLine();
        char[] c1=s1.toCharArray();
        char[] c2=s2.toCharArray();
        if(s1.length()==s2.length()){
            Arrays.sort(c1);
            Arrays.sort(c2);
            if(Arrays.equals(c1,c2)){
                System.out.println("anagrams");
            }
            else{
                System.out.println("Not anagrams");
            }
        }
        else{
            System.out.println("Not anagrams");
        }
    }
}
