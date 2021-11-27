#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
        ll l,r,power,base;
        const int N=1e5;
        const ll mod=1e9+7;
        vector<ll>v1(N),v2(N);
        
        void getvalues(){
            cin>>l>>r;
            v1.assign(N,0);
            v2.assign(N,0);
        }
        ll getpalindromes(ll n){
            ll remainder, temp;
            temp = n;
            n=n/10;
          while (n != 0) {
            remainder = n % 10;
            temp = temp * 10 + remainder;
            n /= 10;
            }
            return temp;
        }
        void getchefora(){
            for(ll i=1;i<N;i++){
                ll x =getpalindromes(i); 
                v2[i]=v2[i-1]+x;
            }
        }
        ll exponentMod(ll A, ll B, ll C){
           if (A == 0)
             return 0;
           if (B == 0)
            return 1;
         long y;
          if (B % 2 == 0) {
           y = exponentMod(A, B / 2, C);
           y = (y * y) % C;
          }
          else {
          y = A % C;
          y = (y * exponentMod(A, B - 1, C) % C) % C;
          }
         return (int)((y + C) % C);
        }
       ll mde(ll x, ll y, ll p){
          ll res = 1;  
         x = x % p;
         if (x == 0) return 0; 
         while (y > 0){
            if (y & 1)
            res = (res*x) % p;
            y = y>>1;
            x = (x*x) % p;
            }
          return res;
        }
        void getresult(){
            power=v2[r]-v2[l];
            base=v2[l]-v2[l-1];
           // cout<<base<<"  "<<power<<endl;
           // cout<<v2[r]<<"  "<<v2[l]<<endl;
            //ll k=exponentMod(9,power,1000000007);
            //cout<<k<<endl;
            ll p=mde(base,power,1000000007);
            cout<<p<<endl;
            //cout<<v2[r]<<"  "<<v2[l]<<endl;
            //cout<<v1[l]<<endl;
           // cout<<v1[9]<<" "<<v1[10]<<" "<<v1[11]<<endl;
           // for(ll i=0;i<15;i++){cout<<v1[i]<<" ";}cout<<endl;
            //for(ll i=0;i<15;i++){cout<<v2[i]<<" ";}cout<<endl;
        }

int main(){
    ll t;
    cin>>t;
    while(t--){
      getvalues();
      getchefora();
      getresult();

    }
}