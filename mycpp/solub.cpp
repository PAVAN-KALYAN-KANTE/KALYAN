#include<iostream>
using namespace std;
class value{
    public:
    int a;
    int x;
    int b;
    
    void getvalues(){
        cin>>x;
        cin>>a;
        cin>>b;
    }
    
    void getresult(){
        int c=(a+(100-x)*b)*10;
        cout<<c<<endl;
    }
};
int main(){
    int t;
    cin>>t;
    value v;
    int i=1;
    while(i<=t){
        v.getvalues();
        v.getresult();
        i++;
      
        
    }
    return 0;
}