#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
//set<int>s;
//vector<pair<ll,string>>vp1;
//vector<pair<ll,string>>vp2;
struct type{
    ll a;
    string b;
    ll c;
    ll d;
};
class account{
    public:
    ll acc_num;
    string name;
    ll balance;
   // account(string name=NULL,ll acc_num=0,ll acc_balance=0):name(name),acc_num(acc_num),balance(balance){}
   
   vector<pair<ll,ll>>vp;
   vector<type>vp1;
   vector<vector<type>>vp2;
   //int k=0;
   void create_account(string name, ll acc_num, ll balance=0){
       this->name=name;
       this->acc_num = acc_num;
       this->balance = balance;
       cout<<"ACCOUNT CREATED SUCCESSFULLY "<<"\n"<<endl;
      // vp.push_back(make_pair(acc_num,k));
      // k++;
   }
   void deposit(ll money){
       balance += money;
      // vp2.push_back(make_pair(acc_num,"credit"));
       vp1.push_back({acc_num,"credit",money,balance});
       vp2.push_back(vp1);
       cout<<"DEPOSITED SUCCESSFULLY\n"<<endl;
   }
   void withdraw(ll money){
       if(money>balance){cout<<"TRANSACTION DECLINED DUE TO LOW BALANCE\n"<<endl;}
       else{
       balance -= money;
      // vp2.push_back(make_pair(acc_num,"debit"));
       vp1.push_back({acc_num,"debit",money,balance});
       vp2.push_back(vp1);
       cout<<"WITHDRAWN SUCCESSFULLY\n"<<endl;}
   }
   void view_balance(){
       cout<<"YOUR AVAILABLE BALANCE IS  "<<balance<<endl;
       cout<<endl;
   }
   void view_statement(){
       cout<<"DATE"<<"\t\t"<<"ACC_NUM"<<"\t\t"<<"NAME"<<"\t"<<"    CR/DR"<<"\t"<<"AMOUNT"<<"\t\t"<<" BALANCE"<<endl;
      for (auto i = 0; i < vp2.size(); ++i) {
       // cout << "(" << vp2.at(i]).first << ","
      //      << vp2.at(i).second << ")" << "; ";
       cout<<__DATE__<<"\t "<<acc_num<<"\t\t"<<name<<"\t   "<<vp1.at(i).b<<"\t"<<vp1.at(i).c<<"\t\t "<<vp1.at(i).d<<endl;

    }
    cout << endl;
     //  cout<<_DATE_<<"\t"<<acc_num<<"\t"<<name<<"\t"<<balance<<"\t"<<endl;
   }
};
int main(){

   /* account b("pavan",1234);
    cout<<b.acc_num<<endl;
    cout<<b.name<<"  "<<b.balance<<endl;
    cout<<__DATE__<<endl;
    b.balance=b.balance+500;
    cout<<b.balance<<endl;*/
    //b.deposit(500);
    //b.withdraw(300);
    ll acc_num;
    string name;
    int n=100;
    account* a=new account[n];
   // a[0].create_account("pavan",1234);
   // cout<<a[0].name<<"  "<<a[0].acc_num<<"  "<<a[0].balance<<endl;
   // a[0].deposit(500);
  //  a[0].withdraw(300);
   // cout<<a[0].name<<"  "<<a[0].acc_num<<"  "<<a[0].balance<<endl;
    //a[1].create_account("kalyan",2345);
    //cout<<a[1].name<<"  "<<a[1].acc_num<<"  "<<a[1].balance<<endl;
   //a[1].deposit(500);
   // cout<<a[1].name<<"  "<<a[1].acc_num<<"  "<<a[1].balance<<endl;
   // a[0].view_balance();
   // a[0].view_statement();
   // a[0].deposit(1000);
    //a[0].view_statement();
    //a[1].view_statement();
    vector<pair<int,int>>v;
    int i =0;
   while(1){
       int flag=-1;
        cout<<"ENTER OPTION FROM BELOW: "<<endl;
        cout<<"1.CREATE A NEW ACCOUNT "<<endl;
        cout<<"2.TO MAKE A DEPOSIT "<<endl;
        cout<<"3.TO DO WITHDRAW "<<endl;
        cout<<"4.TO VIEW YOUR ACCOUNT STATEMENT"<<endl;
        cout<<"5.TO VIEW YOUR ACCOUNT BALANCE"<<endl;
        cout<<"6.TO EXIT"<<endl;
       int x;
        cin>>x;
        switch(x){
            case 1:
            cout<<"ENTER NAME AND NUMBER "<<endl;
            cin>>name;
            cin>>acc_num;
            for(auto i:v){if(i.first==acc_num){flag=1;}}
            if(flag==-1){a[i].create_account(name,acc_num);
            v.push_back(make_pair(acc_num,i));
            i++;}
            else if(flag==1){cout<<"ACCOUNT ALREADY EXISTS "<<endl;cout<<endl;}
            break;

            case 2:
            ll k,m;
            cout<<"ENTER ACC_NUM "<<endl;
            cin>>acc_num;
            //cin>>k;
            for(auto p:v){if(p.first==acc_num){flag=1;m=p.second;}}
           /* std::vector<int>::iterator it;
            it = std::find (v.begin(), v.end(), acc_num);
            if (it != v.end()){m=it->second;}*/
            if (flag==1){ cout<<"ENTER MONEY TO BE DEPOSITED : ";cin>>k;
            a[m].deposit(k);}
            else if(flag==-1){
                cout<<"NO ACCOUNT FOUND WITH THAT NUMBER "<<endl;
                cout<<endl;
            }
            break;

            case 3:
            ll l,n;
            cout<<"ENTER ACC_NUM "<<endl;
            cin>>acc_num;
           // cin>>l;
           // int flag=-1;
            for(auto p:v){if(p.first==acc_num){flag=1;n=p.second;}}
            if(flag==1){ cout<<"ENTER MONEY TO BE WITHDRAWN: ";cin>>l;
            a[n].withdraw(l);}
            else if(flag==-1){
                cout<<"ENTER VALID ACC_NUM "<<endl;
                cout<<endl;
            }
            break;

            case 4:
            ll o;
            cout<<"ENTER ACC_NUM "<<endl;
            cin>>acc_num;
            for(auto p:v){if(p.first==acc_num){flag=1;o=p.second;}}
            if(flag==1){
            a[o].view_statement();}
            else if(flag==-1){
                cout<<"ENTER VALID ACC_NUM "<<endl;
                cout<<endl;
            }
            break;

            case 5:
            ll q;
            cout<<"ENTER ACC_NUM "<<endl;
            cin>>acc_num;
            for(auto p:v){if(p.first==acc_num){flag=1;q=p.second;}}
            if(flag==1){
            a[q].view_balance();}
            else if(flag==-1){cout<<"ENTER VALID ACC_NUM "<<endl;}
            break;

            case 6:
            exit(0);

            default:
            cout<<"ENTER VALID OPTION"<<endl;
            break;
        }
        
    }
    
}