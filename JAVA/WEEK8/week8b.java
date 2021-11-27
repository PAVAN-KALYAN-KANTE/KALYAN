import java.util.*;
class week8b
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
int x,i;
String n;
ArrayList<String> a=new ArrayList<String>();
System.out.println("Operations are:\n 1)Add an element\n 2)Add an element at specific index\n 3)Remove an element\n 4)Remove an element at specified index\n 5)Get the size of ArrayList\n 6)Get an element at specified index\n 7)Display total ArrayList\n 8)Exit");
while(true)
{
 System.out.print("\nEnter any Operation: ");
 x=s.nextInt();
 if(x==1)
 {
 System.out.print("Enter the element to be added: ");
 n=s.next();
 a.add(n);
 }
 if(x==2)
 {
 System.out.print("Enter the element to be added: ");
 n=s.next();
 System.out.print("Enter the index where the element to be added: ");
 i=s.nextInt();
 a.add(i,n);
 }
 if(x==3)
 {
 System.out.print("Enter the element to be removed: ");
 n=s.next();
 a.remove(n);
 }
 if(x==4)
 {
 System.out.print("Enter the index of element to be removed: ");
 i=s.nextInt();
 a.remove(i);
 }
 if(x==5)
 {
 System.out.print("Size of the ArrayList is: "+a.size());
 }
 if(x==6)
 {
    System.out.print("Enter the index of element you want: ");
    i=s.nextInt();
    System.out.print(a.get(i));
    }
    if(x==7)
    {
    for(String k:a )
    System.out.print(k+" ");
    }
    if(x==8)
    break;
   }
   }
   }