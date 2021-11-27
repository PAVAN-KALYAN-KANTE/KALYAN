import java.util.*;
class vehicle{
    String type;
    int wheels;
    vehicle(String type, int wheels){
        this.type = type;
        this.wheels = wheels;
    }
}
class brand extends vehicle{
    String name;
    String color;
    brand(String type,int wheels,String name,String color){
        super(type, wheels);
         this.name = name;
         this.color = color;   
    }
}
class cost extends brand{
    int cost;
    cost(String type,int wheels,String name,String color,int cost){
        super(type, wheels, name, color);
        this.cost = cost;
    }
    void info(){
        System.out.print("type of vehicle "+type+"\nno.of wheels "+wheels+"\nname of vehicle "+name+"\ncolor of vehicle "+color+"\ncost of vehicle "+cost);
    }
}
class week6a{
    public static void main(String[] args) {
        cost c1=new cost("car", 4, "nano","yellow",100000);
        c1.info();
    }
}