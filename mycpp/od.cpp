#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 ll gcd(int a, int b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
int main(){
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll n;
        cin>>n;
        vector<ll>l1;
        //bool flag = true;
        ll res=0,res1=0,res2=0,ans=0,req=0,p=0;
        for(ll j=0; j<n; j++){ll d;cin>>d;l1.push_back(d);}
        sort(l1.begin(), l1.end());
        for(ll j=1; j<n; j++){
          res2=gcd(res2,l1[j]);
        }
        res1=gcd(res2,l1[0]);
       cout<<res1<<" "<<res2<<endl;
        if(res1<res2){l1[0]=res2;}else if(res1>res2){l1[n-1]=res1;}
        if(res1==res2){for(ll i=0;i<n;i++){req=max(req,l1[i]/res1);if(res1!=1){if(req%res1!=0){p=max(p,i);}l1[p]=l1[0];}else if(res1==1){
          if(req%l1[0]!=0 and l1[0]!=1){p=max(p,i);}l1[p]=1;else if(req%l1[0]==0 and l1[0]!=1){{p=max(p,i);}l1[p]=l1[0];}}}
           if(l1[0]==1 ){l1[n-1]=l1[0];res=l1[0];}
       // cout<<req<<"///// "<<p<<endl;
        for(ll k=0;k<n;k++){cout<<l1[k]<<" ";}cout<<endl;
        for(ll j=1; j<n; j++){
          res=gcd(res,l1[j]);
        }
        for(ll j=0; j<n; j++){
           ans+=l1[j];
        //   cout<<ans<<"????"<<endl;
           //ans/=res;
        }
        cout<<ans/res<<endl;
    }
}