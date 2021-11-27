import java.util.*;
class Hashee {
    public class Person {
        public long a;
        public String b;
        public int c;

        public Person(long a, String b, int c) {
            this.a = a;
            this.b = b;
            this.c = c;
        }
    }
    long id;
    String name;
    int age;
    ArrayList<Person>al1=new ArrayList<Person>();
   // ArrayList<ArrayList<Person>>al2=new ArrayList<ArrayList<Person>>();

    void createPerson(long id, String name, int age){
        this.id = id;
        this.name = name;
        this.age = age;
        Person p=new Person(id, name, age);
        al1.add(p);
      //  al2.add(al1);
    }
    void viewdetails(){
        Person n=al1.get(0);
        System.out.println("ID\tNAME\tAGE");
        System.out.println(n.a+"\t"+n.b+"\t"+n.c);
    }

}
public class Employee{
    public static void main(String[] args){
    Scanner s=new Scanner(System.in);
    long id;
    String name;
    int age;
    Hashee a[]=new Hashee[50];
    ArrayList<HashMap<Long,Integer>>v1=new ArrayList<HashMap<Long,Integer>>();
    HashMap<Long,Integer> v2=new HashMap<Long,Integer>();
    int i=0;
    while(true){
        int flag=-1;
        System.out.println("CHOOSE OPTION FROM BELOW");
        System.out.println("1.TO ADD NEW EMPLOYEE");
        System.out.println("2.TO SEARCH EMPLOYEE DETAILS");
        int x=s.nextInt();
        switch(x){
          case 1:
          System.out.println("ENTER EMPLOYEE ID");
          id=s.nextInt();
          for(HashMap<Long,Integer> req :v1){
            for(Long l:req.keySet())
            if(l==id){
                flag=1;
                break;
            }
         }
         if(flag==1){System.out.println("ID ALREADY EXISTS");}
         else if(flag==-1){
          System.out.println("ENTER EMPLOYEE NAME");
          name=s.nextLine();
          s.nextLine();
          System.out.println("ENTER AGE OF EMPLOYEE");
          age=s.nextInt();
          a[i]=new Hashee();
          a[i].createPerson(id,name,age);
          v2.put(id,i);
          v1.add(v2);
          i++;}
          break;

          case 2:
          System.out.println("ENTER ID OF EMPLOYEE TO BE SEARCHED");
          id=s.nextInt();
          int j=-1;
          for(HashMap<Long,Integer> req :v1){
            for(Long l:req.keySet())
            if(l==id){
                flag=1;
                j=req.get(l);
                break;
            }
       }
       if(flag==1){
           a[j].viewdetails();
       }
       else{
           System.out.println("NOT FOUND");
       }
       break;

       default:
       System.exit(0);
          
        }

        
    }
}
}


