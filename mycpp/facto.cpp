#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    string name;

    void display(){
        cout<<"name: "<<name<<" roll: "<<roll<<endl;
    }
};
//returntype funcname(,)
int add(int a,int b,int d=0){
    int c=a+b+d;
    return c;
}
int main(){
    // int n;
    // cin>>n;
    // cout<<n<<endl;
    // cout<<"HELLO WORLD"<<endl;
    // cout<<"HELLO ";
     int array[5]={1,2,3};
    //n=5
    //0 1 2 3 4 <n
    // for(int i=0; i<n; i++){cin>>array[i];}
     for(int i=0; i<5; i++){cout<<array[i];}cout<<endl;
    // for(int i=n-1;i>=0;i--){cout<<array[i];}cout<<endl;
   // cout<<add(5,3);
    // student s1,s2,s3;
    // s1.roll=10;
    // s1.name="kalyan";
    // s1.display();
    vector<int>v;
    int temp;
    for(int i=0;i<5;i++){
        cin>>temp;
        v.push_back(temp);
    cout<<v.size()<<" "<<v.capacity();
    }
   // v.pop_back();
    for(int i:v){cout<<i;}cout<<endl;




    return 0;   
}