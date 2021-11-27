import java.util.*;

class Factor
{
    synchronized void printfactors(int n)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                System.out.println(i);
            }
        }
        try{
            Thread.sleep(400);
        }
    }
    public void main(String[] args){
        printfactors(25);
    }
}