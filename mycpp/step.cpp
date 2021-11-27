#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
inline ll Calc(int x,int y)
{
if(abs(x)>=abs(y)) return abs(x);
int z=(abs(x)+abs(y))/2;
return z+abs(abs(x)-z);
 }
ll minSteps(int x1,int y1, int x2, int y2)
{
    int ret=0;
    if(((x1+y1)&1)!=((x2+y2)&1))y1++,ret++;
    return ret+Calc(x2-x1,y2-y1);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
     ll step=abs(c-a)+abs(d-b);
     if(k==step){
         cout<<"yes"<<endl;
     }
     else if((step-k)>k){
         cout<<"no"<<endl;
     }
     else if((step-k)%2 and k>step){
         cout<<"no"<<endl;
     }
     else if((step-k)%2 and k>step){
         cout<<"yes"<<endl;
     }
    }
    return 0;
}