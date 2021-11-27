import java.util.*;
public class week3b {
    public static void main(String[] args){
    int n,m;
    Scanner s=new Scanner(System.in);
    System.out.println("enter number of years");
    m=s.nextInt();
    System.out.println("enter number of ids");
    n=s.nextInt();
    int[][] a=new int[m+1][n+1];
    System.out.println("enter years");
    for(int i=1;i<m+1;i++){
        a[i][0]=s.nextInt();
    }
    System.out.println("enter ids");
    for(int i=1;i<n+1;i++){
        a[0][i]=s.nextInt();
    }
    for(int i=1;i<m+1;i++){
        System.out.println("enter value of items sold in year "+a[i][0]);
        for(int j=1;j<n+1;j++){
            a[i][j]=s.nextInt();
        }
    }
    int max=a[1][1];
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    System.out.println("id of maximum demand item and in year");
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i][j]==max){
                System.out.println(a[0][j]+" "+a[i][0]);
            }
        }
    }
 }
}
