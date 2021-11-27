package student;
public class student {
    String name;
    int roll;
    public student(String name, int roll){
        this.name = name;
        this.roll = roll;
    }
    public void display(){
        System.out.println(name + " " + roll);
    }
}
