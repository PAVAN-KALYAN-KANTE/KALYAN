import java.util.*;

class InvalidWeightexception extends Exception {
    public InvalidWeightexception(String message){
        super(message);
    }
}
class testexc{
    public void testweight(float weight) throws InvalidWeightexception{
        if(weight>80.00f){
            throw new InvalidWeightexception("weight not acceptable");
        }else{
            System.out.println("weight acceptable");
        }
    }
}
public class userdefx {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("enter weight");
        float weight;
        weight =s.nextFloat();
        testexc t=new testexc();
        try {
            t.testweight(weight);
        } catch (InvalidWeightexception e) {
            e.printStackTrace();
        }
    }
}
