#include<iostream>
#include<vector>
#include<list>
typedef long long int ll;
using namespace std;
int main(){
    ll  t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n,k;
        cin>>n>>k;
        list<ll>l1;
        ll a[n];
        for(ll z=0;z<n;z++){
            cin>>a[z];
        }
        for (int i: a) {
        l1.push_back(i);
    }
        list<ll>l2;
        list<ll>l3;
        l1.sort();
        /*while(n!=1)
        for(ll a=0;a<k;a++){
            ll p=l1.back();
            l2.push_back(p);
            l1.pop_back();
        }
         for(ll a=0;a<k;a++){
            ll q=l1.back();
            l3.push_back(q);
            l1.pop_back();
        }*/
        ll r=l1.front();
       while(!l1.empty()){
          ll p=l1.back();
          l2.push_back(p);
          l1.pop_back();
          ll q=l1.back();
          l3.push_back(q);
          l1.pop_back();
          n=n-2;
       }
     ll sum=0;
        for (std::list<ll>::iterator it=l2.begin(); it != l2.end(); ++it){ 
         sum+=*it;
        }
     sum=sum-r;
     cout<<r<<endl;

    }
}