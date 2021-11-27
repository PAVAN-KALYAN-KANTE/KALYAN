#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n,m;
        cin>>n>>m;
        ll ans=0,res=0;
        for(ll k=0;k<pow(2,m);k++){
            for(ll j=k+1;j<pow(2,m);j++){
                ans=i&j;
                if(ans==0){
                    res++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}