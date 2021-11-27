import java.util.*;
class myexception extends Exception{
    public myexception(String message){
        super(message);
    }
}
public class week10b {
        public static void main(String[] args){
            Scanner s=new Scanner(System.in);
            int marks;
            try {
                System.out.println("enter your marks");
                marks=s.nextInt();
                if(marks>125){
                    throw new myexception("above 125");
                }
                else if(marks<0){
                    throw new myexception("less than zero");
                }
            }
            catch(myexception e){System.out.println(e);}
        }
}
