#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll c=0;
    vector<ll> v(n+1);
    vector<bool> b(n+1,true);
    bool key=true;
    ll k=n%6;
    ll p;
    ll res1=n/6;
   if(k==1){p=1;}
    else{p=2;}
    //int res=((res1*2)+p);
    cout<<((2*res1)+(p))<<endl;
}