#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct person{
    string a;
    string b;
    string c;
};
class Student{
    public:
     string roll_no;
     string name;
     string password;

    vector<person>vs1;
    vector<vector<person>>vs2;

    void create_stuid(string roll_no, string name, string password){
        this->roll_no = roll_no;
        this->name = name;
        this->password = password;
        vs1.push_back({roll_no, name, password});
        vs2.push_back(vs1);
    }

    void view_details(){
        for(auto i=0;i<vs2.size();i++){
           cout<<vs1.at(i).a<<" "<<vs1.at(i).b<<" "<<vs1.at(i).c<<endl;
        }
    }
    
};
class teacher{
    public:
     string teach_id;
     string name;
     string password;

    vector<person>vt1;
    vector<vector<person>>vt2;

    void create_teachid(string teach_id, string name, string password){
        this->teach_id = teach_id;
        this->name = name;
        this->password = password;
        vt1.push_back({teach_id, name, password});
        vt2.push_back(vt1);
    }

    void view_details(){
        for(auto i=0;i<vt2.size();i++){
           cout<<vt1.at(i).a<<" "<<vt1.at(i).b<<" "<<vt1.at(i).c<<endl;
        }
    }


};
int main(){
    string name;
    string roll_no;
    string password;
    string teach_id;
    int n=100;
    Student* as=new Student[n];
    teacher* at=new teacher[n];
    int i=0,j=0;
   // int choice;
    //cin>>choice;
    vector<pair<string,int> >vsp1;
    vector<pair<int,string> >vsp2;
    vector<pair<string,int> >vtp;
    while(true) {
        int flag=-1;
        cout<<"ARE YOU A STUDENT OR TEACHER?"<<endl;
        cout<<"1.STUDENT\n2.TEACHER"<<endl;
        int key;
        cin>>key;
        switch(key) {
            case 1: 
            cout<<"DO YOU ALREADY HAVE ACCOUNT OR DO YOU NEED TO CREATE NEW ACCOUNT"<<endl;
            cout<<"1.EXISTING\n2.NEW ACCOUNT"<<endl;
            int a1;
            cin>>a1;
            switch(a1) {
                case 2:
                cout<<"ENTER ROLL_NO"<<endl;
                cin>>roll_no;
                for(auto i:vsp1){
                    if(i.first==roll_no){flag=1;break;}
                }
                if(flag==1){cout<<"ACCOUNT ALREADY EXISTS"<<endl;}
                else if(flag==-1){cout<<"ENTER STRONG PASSWORD TO SECURE YOUR ACCOUNT"<<endl;
                cin>>password;
                cout<<"ENTER YOUR NAME"<<endl;
                cin>>name;
                vsp1.push_back(make_pair(roll_no,i));
                vsp2.push_back(make_pair(i,password));
                as[i].create_stuid(roll_no,name,password);
                i++;
                }
                break;
                

                case 1: 
                int id=-1;
                cout<<"ENTER YOUR ROLL_NO"<<endl;
                cin>>roll_no;
                for(auto i:vsp1){
                    if(i.first==roll_no){flag=1;id=i.second;break;}
                }
                if(flag==1){cout<<"ENTER PASSWORD"<<endl;
                cin>>password;
                for(auto it:vsp2){if(it.first==id){if(it.second==password){cout<<"LOGIN SUCCESSFULLY"<<endl;}
                else{cout<<"INCORRECT PASSWORD"<<endl;}}
                }
                }
                break;
            }
        }
    }
}