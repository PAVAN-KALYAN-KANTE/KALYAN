#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
class kalyan{
    public:
    ll D,d,p,q;
    ll c=0,sum=0;
    vector<ll> v;
         
         void getvalues(){
             cin>>D>>d>>p>>q;
             v.assign(D,0);
         }
         void setvalues(){
           for(ll i=0;i<=D;i++){
              /* if(i%d==0){
                  sum+=p+c*q;
                  c++; 
               }
               else{
                   sum+=p+c*q;
               }*/
               if(i%d==0){v[i]=1;v[0]=p;}
           }
           for (ll i = 1; i < D; i++)
           {
               if(v[i]==1){c++;v[i]=v[i-1]+p+c*q;}
               else{
                   v[i]=v[i-1]+p+c*q;
               }
           }
        }
         void result(){
             ll res=v.back();
             cout<<res<<endl;
         }
         void neutral(){
             c=0;
             sum=0;
             v.clear();
         }
};
int main(){
    ll t;
    cin>>t;
    kalyan k;
    for(ll i=0;i<t;i++){
        k.getvalues();
        k.setvalues();
        k.result();
        k.neutral();
    }
    return 0;
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll D,d,p,q;
        cin>>D>>d>>p>>q;
        ll a=D/d;
        ll b=D%d;
        ll sum=0,res=0;
        sum=d*a*(2*p+(a-1)*q)/2;
       //cout<<sum<<endl;
        res=b*(p+a*q);
      //  cout<<res<<endl;
        res=res+sum;
        cout<<res<<endl;
    }
    return 0;
}