using System;
public class Test{
    public static void Main(string[] args){
        int t=Convert.ToInt32(Console.ReadLine());
        for (int i=0; i<t; i++){
            int g,c;
            string s=Console.ReadLine();
            g=Convert.ToInt32(s.Split(' ')[0]);
            c=Convert.ToInt32(s.Split(' ')[1]);
            Console.WriteLine((c*c)/(2*g));
        }
    }
}