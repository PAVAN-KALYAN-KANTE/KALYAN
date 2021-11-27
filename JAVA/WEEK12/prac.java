import java.util.*;
class prac
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter no of strings:");
        n=sc.nextInt();
        String arr[]=new String[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.next();
        }
        sort(arr,n);
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
            
        }
    }
    public static void sort(String arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i].compareToIgnoreCase(arr[j])>0)
                {
                    String temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}