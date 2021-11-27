import java.util.*;

class failexception extends Exception {
    public failexception(String message){
        super(message);
    }
}
class testgrade{
    public void testmygrade(Integer marks) throws failexception{
          if(marks<35){
             throw new failexception("YOU WERE FAILED");
          }else if(marks<100 && marks>35){
              System.out.println("YOU WERE PASSED");
          }
          else{
              throw new failexception("MARKS SHOULD BE IN RANGE OF 0 TO 100");
          }
    }
}

public class marks {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int marks;
        System.out.println("ENTER YOUR MARKS");
        marks=s.nextInt();
        testgrade t=new testgrade();
        try {
            t.testmygrade(marks);
        } catch (failexception e) {
            System.out.println(e.getMessage());
        }
    }
}
