#include<iostream>
using namespace std;
typedef long long int ll;
class kalyan{
    public:
       ll x,m,d;

       void getvalues(){
           cin>>x>>m>>d;
       }
       ll result(){
           ll m=min(x*m,x+d);
          return m;
       }
};
int main(){
    ll t;
    cin>>t;
    kalyan k;
    for(int i=1;i<=t;i++){
         k.getvalues();
        ll y= k.result();
        cout<<y<<endl;
    }
 return 0;
}