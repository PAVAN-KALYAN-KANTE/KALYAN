import java.util.*;
class Student {
    public String name;
    public int roll;
    public int cellnumber;

    public Student(String name, int roll, int cellnumber) {
        this.name = name;
        this.roll = roll;
        this.cellnumber = cellnumber;
    }
    public void display(){
        System.out.println(name+" " +roll+" "+cellnumber);
    }
}
class stud{
    public static void main(String[] args){
        ArrayList<Student> al = new ArrayList<Student>();
      //  Student s = new Student();
        // s.name = "sai";
        // s.roll =44;
        // s.cellnumber =89769;
       // al.add(s);
       al.add(new Student("kalyan",44,998));
       Student p=al.get(0);
        p.display();
    }
}