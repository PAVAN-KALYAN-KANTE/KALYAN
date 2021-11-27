class customerId
{
    static int count=0;
    int id;
customerId()
{
    count++;
    id=count;
}
int getId()
{
    return id;
}
int localvariable()
{
    int a=10;
    return a;
}
}
class application
{
    public static void main(String args[])
    {
        customerId obj1=new customerId();
        System.out.println("customerId="+ obj1.getId());
        System.out.println("localvariable=" + obj1.localvariable());

        customerId obj2=new customerId();
        System.out.println("customerId="+ obj2.getId());
        System.out.println("localvariable=" + obj2.localvariable());

    }
}