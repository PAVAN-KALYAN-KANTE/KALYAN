import java.util.*;
class Box{
   public int width, height,depth;
   public Box(int width, int depth, int height){
       this.width = width;
       this.height = height;
       this.depth = depth;
   }

   public int volume(){
       return depth*width*height;
   }
}
public class week4a{
      public static void main(String[] args){
          Scanner s=new Scanner(System.in);
          int x,y,z;
          System.out.println("enter dimensions of box");
          x=s.nextInt();
          y=s.nextInt();
          z=s.nextInt();
         Box b=new Box(x,y,z);
         System.out.println("volume " + b.volume());
      }
}