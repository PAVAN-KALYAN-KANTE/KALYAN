#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
      ll n,k;
      cin>>n>>k;
      vector<ll>v(n+1);
      for (ll i = 1; i <v.size(); i++)
      {
            cin>>v[i];
      }
      ll res=1;
     // for(auto &i : v){cin>>i;}
     // for(auto i : v){cout<<i<<" ";}
      stack<pair<ll, ll>>s;
      for (ll i = 1; i < v.size(); i++)
      {
            while(!s.empty() and s.top().first>v[i]){
                  std::pair<ll, ll>k=s.top();
                  ll p=i-k.second+1;
                  res=res*p;
                 // cout<<res<<endl;
                  res=res%1000000007;
                  s.pop();
            }
            s.push(make_pair(v[i],i));
      }
      cout<<res<<endl;
      
      return 0;
}