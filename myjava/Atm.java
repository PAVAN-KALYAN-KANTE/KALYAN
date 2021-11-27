import java.io.*;
//import java.lang.*;
import java.util.*;

class failexception extends Exception {
    public failexception(String message){
        super(message);
    }
}
class Account{

    public class Abc{
    public long a;
    public String b;
    public long c;
    public long d;
    public Abc(long a,String b,long c,long d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
 }
    public long acc_num;
    public String name;
    public long balance;
    //ArrayList<HashMap<Integer,Integer>> al1;
    ArrayList<Abc> al2=new ArrayList<Abc>();
    ArrayList<ArrayList<Abc>> al3=new ArrayList<ArrayList<Abc>>();
    void create_account(String name,long acc_num,long balance){
        this.name=name;
        this.acc_num=acc_num;
        this.balance=balance;
        System.out.println("ACCOUNT CREATED SUCCESSFULLY ");
    }
    void deposit(long money){
        balance+=money;
        Abc h=new Abc(acc_num,"credit",money,balance);
        al2.add(h);
        al3.add(al2);
    }
    int withdraw(long money) throws failexception{
        if(money>balance){
           throw new failexception("INSUFFICIENT BALANCE");
           // return -1;
        }
        else if(balance-money<500){
            throw new failexception("MINIMUM BALANCE SHOULD BE MAINTAINED");
        }
        else{
            balance -= money;
        Abc h=new Abc(acc_num,"debit",money,balance);
        al2.add(h);
        al3.add(al2);
          return 1;
        }
    }
    void view_balance(){
        System.out.println("YOUR AVAILABLE BALANCE IS  "+balance);
    }
    void view_statement(){
        System.out.println("DATE\t\t"+"ACC_NUM\t "+"CR/DR\t"+"AMOUNT\t"+"BALANCE\t\t");
        for (int i = 0; i < al3.size(); ++i)
        {
            ArrayList<Abc> res=al3.get(i);
            Abc p=res.get(i);
            System.out.println(java.time.LocalDate.now()+"\t"+p.a+"\t"+p.b+"\t"+p.c
        +"\t"+p.d);
        }
    }


}

 public class Atm
{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        long acc_num;
      String name;
        int n=100;
        Account a[]=new Account[n];
        ArrayList<HashMap<Long,Integer>> al=new ArrayList<HashMap<Long,Integer>>();
        HashMap<Long,Integer> hm=new HashMap<Long,Integer>();
        int i=0;
        while(true){
            int flag=-1,f1=-1,f2=-1;
            System.out.println("ENTER OPTION FROM BELOW :");
            System.out.println("1.CREATE A NEW ACCOUNT");
            System.out.println("2.TO MAKE A DEPOSIT");
            System.out.println("3.TO DO WITHDRAW ");
            System.out.println("4.TO VIEW YOUR ACCOUNT BALANCE");
            System.out.println("5.TO VIEW YOUR ACCOUNT STATEMENT");
            System.out.println("6.TO TRANSFER MONEY FROM ONE ACCOUNT TO ANOTHER ACCOUNT");
            System.out.println("7.TO EXIT");
            int x=s.nextInt();
            
            switch(x){
                case 1 : System.out.println("ENTER NAME AND NUMBER:");
                          name=s.nextLine();
                          s.nextLine();
                          acc_num=s.nextInt();
                         //1name=s.nextLine();
                         for(HashMap<Long,Integer> req :al){
                             for(Long l:req.keySet())
                             if(l==acc_num){
                                 flag=1;
                                 break;
                             }
                         }
                         if(flag==-1){
                             a[i]=new Account();
                             a[i].create_account(name,acc_num,0);
                             hm.put(acc_num,i);
                             al.add(hm);
                             i++;
                         }
                         else if(flag==1){
                            System.out.println("ACCOUNT ALREADY EXISTS");
                         }
                         break;


                case 2: System.out.println("ENTER ACC_NUM ");
                        acc_num=s.nextInt();
                        long k;
                        int m=-1;
                        for(HashMap<Long,Integer> req :al){
                             for(Long l:req.keySet())
                             if(l==acc_num){
                                 flag=1;
                                 m=req.get(l);
                                 break;
                             }
                        }
                        if(flag==1){
                            System.out.println("ENTER MONEY TO BE DEPOSITED");
                            k=s.nextInt();
                            a[m].deposit(k);
                            System.out.println("DEPOSITED SUCCESSFULLY");
                        }
                        else if(flag==-1){
                            System.out.println("NO ACCOUNT FOUND WITH THAT NUMBER ");
                        }
                        break;


                case 3: System.out.println("ENTER ACC_NUM ");
                        acc_num=s.nextInt();
                        long l1,z;
                        int n1=-1;
                        for(HashMap<Long,Integer> req :al){
                             for(Long l:req.keySet())
                             if(l==acc_num){
                                 flag=1;
                                 n1=req.get(l);
                                 break;
                             }
                        }
                        if(flag==1){
                            System.out.println("ENTER MONEY TO BE WITHDRAWN: ");
                            l1=s.nextInt();
                            z=a[n1].withdraw(l1);
                            if(z==-1){System.out.println("TRANSACTION DECLINED DUE TO LOW BALANCE");}
                            else{System.out.println("WITHDRAWN SUCCESSFULLY");}
                        }
                        /*else if(flag==-1){
                            System.out.println("ENTER VALID ACCOUNT NUMBER ");
                        }*/
                        break;


                case 4: System.out.println("ENTER ACC_NUM ");
                        acc_num=s.nextInt();
                        int q=-1;
                        
                        for(HashMap<Long,Integer> req :al){
                             for(Long l:req.keySet())
                             if(l==acc_num){
                                 flag=1;
                                 q=req.get(l);
                                 break;
                             }
                        }
                        if(flag==1){
                            a[q].view_balance();
                        }
                        else if(flag==-1){
                            System.out.println("ENTER VALID ACCOUNT NUMBER ");
                        }
                        break;


                case 5: System.out.println("ENTER ACC_NUM ");
                        acc_num=s.nextInt();
                        int o=-1;
                        
                        for(HashMap<Long,Integer> req :al){
                             for(Long l:req.keySet())
                             if(l==acc_num){
                                 flag=1;
                                 o=req.get(l);
                                 break;
                             }
                        }
                        if(flag==1){
                            a[o].view_statement();
                        }
                        else if(flag==-1){
                            System.out.println("ENTER VALID ACCOUNT NUMBER ");
                        }
                        break;

                case 6: 
                 int r,w,u,ress;
                 int v=-1,y=-1;
                 System.out.println("ENTER ACCOUNT NUMBER 1: ");
                 r=s.nextInt();
                 for(HashMap<Long,Integer> req :al){
                     for(long l:req.keySet())
                     if(l==r){
                         f1=1;
                         v=req.get(l);
                         break;
                     }
                 }
                 if(f1==-1){
                     System.out.println("ACCOUNT NOT FOUND");
                 }
                 else{
                     System.out.println("ENTER ACCOUNT NUMBER 2");
                     w=s.nextInt();
                     for(HashMap<Long,Integer> req :al){
                        for(long l:req.keySet())
                        if(l==w){
                            f2=1;
                            y=req.get(l);
                            break;
                        }
                      }
                      if(f2==-1){
                          System.out.println("ACCOUNT NOT FOUND");
                      }
                      else{
                          System.out.println("ENTER AMOUNT TO BE TRANSFERRED");
                          u=s.nextInt();
                          ress=a[v].withdraw(u);
                          if(ress==-1){
                              System.out.println("TRANSACTION DECLINED DUE TO INSUFFICIENT BALANCE");
                          }
                          else if(ress==1){
                              a[y].deposit(u);
                              System.out.println("AMOUNT TRANSFERRED SUCCESSFULLY");
                          }
                      }
                    }
                    break;

                    case 7: 
                    System.exit(0);



                
                default: 
                System.out.println("ENTER VALID OPTION");
                break;  

            }



        }
    }
}