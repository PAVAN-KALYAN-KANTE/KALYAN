#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
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

        l1.sort();
        list<ll>l2;
        while(n!=2){
            l2.push_back(l1.back());
            l1.pop_back();
            l1.pop_back();
            n=n-2;
        }
        ll sum=0;
        for (std::list<ll>::iterator it=l2.begin(); it != l2.end(); ++it){ 
         sum+=*it;
        }
        cout<<sum<<endl;

        l1.clear();
        l2.clear();
    }
return 0;
}