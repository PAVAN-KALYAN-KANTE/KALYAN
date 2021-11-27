import java.util.*;
class employee{
    public int id;
    public String name;
    public int age;
    
    public void setter(int id, String name, int age){
        this.id = id;
        this.name = name;
        this.age = age;
    }
    public void getter(){
       System.out.println("employee id "+this.id+" name "+this.name+" age "+this.age);
    }
}
public class week8c {
    public static void main(String[] args){
       Scanner s=new Scanner(System.in);
      // System.out.println("enter number of employees");
      // int n=s.nextInt();
       employee[] a=new employee[3];
       HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
       a[0]=new employee();
       a[2]=new employee();
       a[1]=new employee();
       a[0].setter(101,"kalyan",19);
       a[1].setter(102,"pavan",20);
       a[2].setter(103,"wayne",21);   
       for(int i=0;i<3;i++){
           hm.put(a[i].id,i);
       }
       for(Integer k:hm.keySet()){
         int p=hm.get(k);
         System.out.println(k);a[p].getter();
       }
    
    }
}
