import java.util.*;
import java.util.Vector;
import javafx.util.pair;

public class Bank {
    class type{
        int a;
        string b;
        int c;
        int d;
    }
    class account{
        int acc_num;
        string name;
        int balance;
        
        vector<type>vp1=new vector<type>();
        vector<vector<type>>vp2=new vector<vector<type>>();

        void create_account(string name, int acc_num,int balance=0){
            this.name=name;
            this.acc_num=acc_num;
            this.balance=balance;
            system.out.println("ACCOUNT CREATED SUCCESSFULLY\n");
        }
        void deposit(int money){
            balance=balance+money;
            vp1.add({acc_num,"credit",money,balance});
            vp2.add(vp1);
            system.out.println("DEPOSITED SUCCESSFULLY\n");
        }
        void withdraw(int money){
            if(money>balance){system.out.println("TRANSACTION DECLINED DUE TO LOW BALNCE\n");}
            else{
                balance=balance-money;
                vp1.add({acc_num,"debit",money,balance});
                vp2.add(vp1);
                system.out.println("WITHDRAWN SUCCESSFULLY\n");
            }
        }
        void view_balance(){
            system.out.println("YOUR AVAILABLE BALANCE IS "+balance+"\n");
        }

        public static void main(String[] args){
            int acc_num;
            string name;
            int n=100;
            account[] a;
            a=new account[n];
            vector<pair<int,int>>v=new vector<pair<int,int>>();
            int i=0;
            while(true){
                int flag=-1;
                system.out.println("ENTER OPTION FROM BELOW\n");
                system.out.println("1.CREATE A NEW ACCOUNT\n");
                system.out.println("2.TO MAKE A DEPOSIT\n");
                system.out.println("3.TO MAKE A WITHDRAW\n");
                system.out.println("4.TO VIEW YOUR ACCOUNT BALANCE\n");
                system.out.println("5.TO EXIT\n");
                int x;
                scanner sc=new Scanner(System.in);
                x=sc.nextint();
                switch(x){
                    case 1:
                    system.out.println("ENTER NAME AND ACC_NUMBER\n");
                    name=sc.nextLine();
                    acc_num=sc.nextint();
                    a[0].create_account(name,acc_num);
                    //v.add(acc_num,i);
                    //i++;
                    break;

                    case 2:
                    int k,m;
                    system.out.println("ENTER ACCOUNT NUMBER\n");
                    acc_num=sc.nextint();
                    k=sc.nextint();
                    a[0].deposit(k);
                    system.out.println("DEPOSITED SUCCESSFULLY\n");
                    break;

                    default:
                    system.out.println("ENTER VALID OPTION\n");
                    break;

                }
            } 
        }
    }
    
}
