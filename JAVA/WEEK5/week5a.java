import java.util.*;
public class week5a{
    public static void main(String[] args){
        String str;
        Scanner s=new Scanner(System.in);
        str=s.nextLine();
        System.out.println("enter value of n ");
        int n=s.nextInt();
        int l=str.length();
        int nw;
        nw=(l%n==0)?(l/n):((l/n)+1);
        String[] st=new String[nw];
        int i=0;
        while(i<nw){
            st[i]=str.substring(i*n,Math.min((i+1)*n,l));
            i++;
        }
        for(int k=0;k<nw;k++){
            for(int j=k+1;j<nw;j++){
                if(st[k].compareTo(st[j])>0){
                    String temp=st[k];
                    st[k]=st[j];
                    st[j]=temp;
                }
        }
    }
    for(int k=0;k<nw;k++){
        System.out.print(st[k]+",");
    }
}
}