#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const N=1e4+2;
vector<vector<ll>>v(N,vector<ll>(N,-1));
ll find(ll n,ll r){
    if(r>n){
        return 0;
    }
    else if(n==r||r==0){
        return 1;
    }
    if(v[n][r]!=-1){
       return v[n][r];
    }
    v[n][r]=(find(n-1,r-1)+find(n-1,r));
    return v[n][r];
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,q;
         cin>>n>>q;
         vector<int>v(n);
    }
}