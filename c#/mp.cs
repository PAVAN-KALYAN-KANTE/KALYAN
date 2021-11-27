using System;
public class Test{
    public static void Main(string[] args){
        int t=Convert.ToInt32(Console.ReadLine());
        for (int i=0;i<t;i++){
            int d,x,y,z;
           string s= Console.ReadLine();
           d = Convert.ToInt32(s.Split(' ')[0]);
           x = Convert.ToInt32(s.Split(' ')[1]);
           y = Convert.ToInt32(s.Split(' ')[2]);
           z = Convert.ToInt32(s.Split(' ')[3]);
           
           int a=x*7;
           int b=(d*y)+((7-d)*z);
           Console.WriteLine(Math.Max(a,b));
        }

    }
}