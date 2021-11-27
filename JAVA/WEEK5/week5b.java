import java.util.*;
public class week5b {
    public static void main(String[] args){
        int n;
        System.out.println("enter no,of strings");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        s.nextLine();
        String[] str=new String[n];
        for(int i=0; i<n; i++){
            System.out.println("enter the string "+i+1);
            str[i]=s.nextLine();
        }
        for(int i=0; i<n; i++){
            int v=0,c=0;
            int l=str[i].length();
            str[i]=str[i].toLowerCase();
            for(int j=0; j<l; j++){
                char ch=str[i].charAt(j);
                if(ch>='a' && ch<='z'){
                    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'){
                        v++;
                    }
                    else{
                        c++;
                    }
                }
            }
            System.out.println("no.of vowels and consonants in "+str[i]+" are "+v+"  "+c);
        }
    }
}
