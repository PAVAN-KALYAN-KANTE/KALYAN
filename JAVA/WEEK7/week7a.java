import java.util.*;
import sports.*;
import student.*;
class cricket implements sports{
    public void sportinfo(){
        System.out.println("this is cricket");
    }
}
class week7a{
    public static void main(String[] args){
        student s=new student("kalyan", 44);
        s.display();
        cricket c=new cricket();
        c.sportinfo();
    }
}