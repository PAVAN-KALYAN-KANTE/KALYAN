#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            sum=sum+a;
        }
        ll p=sum/k+1;
        p++;
        ll q=p-n;
        if(q<0){cout<<0<<endl;}
        else{cout<<q<<endl;}
        
    }
}