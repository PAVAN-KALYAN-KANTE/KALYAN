import java.util.*;
public class week3c {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("enter value of n");
        int n=s.nextInt();
        int[][] a=new int[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                a[i][j]=s.nextInt();
            }
        }
        int ld=0,rd=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if(i==j) {
                    ld+=a[i][j];
                }
                if(i+j==n-1){
                    rd+=a[i][j];
                }
            }
        }
        System.out.println("diagonal difference is "+Math.abs(ld-rd));
    }
}
