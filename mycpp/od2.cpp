#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
inline ll gcd(int a, int b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &i:v){cin>>i;}
        if(n==1){cout<<1<<endl;}else{
        ll res1[n],res2[n],res[n],x,sum=0;
        //sort(v.begin(),v.end());
        res1[0]=v[0];res2[n-1]=v[n-1];x=0;
        for(ll i=0;i<n;i++){res1[i]=x;if(x==0){x=v[i];}else{x=gcd(x,v[i]);}}x=0;
        for(ll i=n-1;i>=0;i--){res2[i]=x;if(x==0){x=v[i];}else{x=gcd(x,v[i]);}}
        for(ll i=0;i<n;i++){if(res1[i]==0){res[i]=res2[i];}else if(res2[i]==0){res[i]=res1[i];}else{res[i]=gcd(res1[i],res2[i]);}}
        for(auto i:res1){cout<<i<<" ";}cout<<endl;
        for(auto i:res2){cout<<i<<" ";}cout<<endl;
       for(auto i:res){cout<<i<<" ";}
        ll null=0,ref=0;
        for(ll i=0;i<n;i++){
            if(res[i]>null){
                null=res[i];
                ref=v[i];
            }
            else if(res[i]==null){
                if(v[i]>ref){
                    ref=v[i];
                }
            }
        }
        ll key=0;
        for(ll i=0;i<n;i++){
            if(res[i]==null and v[i]==ref){
                x=i;
                key=res[i];
            }
        }
        v[x]=key;
        for(int i=0;i<n;i++){sum+=v[i];}
        cout<<sum/null<<endl;}
    }
}