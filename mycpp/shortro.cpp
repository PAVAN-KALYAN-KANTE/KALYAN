#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
using namespace std::chrono;
ll get_index(ll y,vector<ll>v1){
    ll index=-1;
 for(int round=y; round < v1.size(); round++)
    {
       if(v1[round]==2)
       {
           index = round;
           break;
       }
    }
    return index;
}
ll get_value(ll y,vector<ll>v1){
    ll index=-1;
    for (int i =y - 1; i >= 0; --i) {
        if (v1.at(i) == 1) {
          index = i;
            break;
        }
    }
    return index;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        //auto start = high_resolution_clock::now();
        ll n,m;
        cin>>n>>m;
        vector<ll>v1(n);
        vector<ll>v2(m);
        for(ll j=0;j<n;j++){cin>>v1[j];}
        for(ll j=0;j<m;j++){ll d;cin>>d;v2[j]=--d;}
       //for(auto &i:v1){cout<<i<<"  ";}
        //cout<<endl;
       // for(auto &i:v2){cout<<i<<"  ";}
        //cout<<endl;
        vector<pair<ll,ll>>v3,v4;
        for(ll j=0;j<n;j++){if(v1[j]!=0){v3.push_back(make_pair(j,v1[j]));}}
      //  for(ll j=0;j<m;j++){v4.push_back(make_pair(v2[j],j));}
        ll count=-1;
        ll res1=LONG_MAX,res2=LONG_MAX;
        for(auto& k:v2){
            //cout<<"getin  "<<k<<endl;
            if(v1[k]!=0&&k!=0){count=0;}
            else if(k==0){count=0;}
            else{
              ll x=get_index(k,v1);
              ll b=get_value(k,v1);
             // cout<<x<<" x "<<b<<" b"<<endl;
              if(x==-1 && b==-1){count=-1;}
              else{
               for(auto a:v3){
                   if(a.first==x){
                       if(a.second==2){
                          res1=x-k;
                         // cout<<res1<<"????"<<endl;
                       }
                       //else
                       //res1=-1;
                   }
                  // continue;
                   if(a.first==b){
                       if(a.second==1){
                       res2=k-b;
                     // cout<<res2<<"?????"<<endl;
                       }
                   }
               
               }
               count=min(res1,res2);
              }
               
            }
            cout<<count<<" ";
        }
        cout<<endl;
        // auto stop = high_resolution_clock::now();
        //  auto duration = duration_cast<microseconds>(stop - start);
        //   cout << "Time taken by function: "
       //  << duration.count() << " microseconds" << endl;

    }
}