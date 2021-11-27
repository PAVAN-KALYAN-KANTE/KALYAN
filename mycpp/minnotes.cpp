#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0,res=0,a[n];
        const int N=1e6;
        ll res1[N],res2[N];
        for(int i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        res1[0]=a[0];res2[n-1]=a[n-1];
        for(int i=0;i<n;i++){res1[i]=__gcd(res1[i-1],a[i]);}
        for(int i=n-1;i>=0;i--){res2[i]=__gcd(res2[i+1],a[i]);}
        for(int i=0;i<n;i++){sum+=a[i];}
        ll x=LLONG_MAX;
        for(int i=0;i<n;i++){
           res=(sum-a[i]+__gcd(res1[i-2],res2[i]))/__gcd(res1[i-2],res2[i]);
           if(res<x){x=res;}
        }
        cout<<x<<endl;


    }
}