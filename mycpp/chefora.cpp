#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
        ll l,r,power,base;
        const int N=1e5;
        const ll mod=1e9+7;
        
        void getvalues(){
            cin>>l>>r;
            //v1.assign(N,0);
        }
     /*   ll getpalindromes(ll n){
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
                v1[i] =getpalindromes(i); 
                v2[i]=v2[i-1]+v1[i];
            }
        }*/
        void getche(vector<ll>v1){
            v1.resize(100001);
            v1.at(0) =-1;
            ll rem,num,d;
            for(ll i=1;i<20;i++){
                num=i/10;
                d=i;
                while(num>0){
                 rem=num%10;
                d=d*10+rem;
                num=num/10;
                }
               // cout<<d<<" "<<v1[i-1]<<" ";
                v1.push_back(d+v1.at(i-1));
            }
            //for(ll j=1;j<20;j++){cout<<v1[j]<<" ";}cout<<endl;
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
          vector<ll>v1;
            getche(v1);
            for(ll x = 0; x <20;x++){cout <<v1[x]<<" ";}cout<<endl;
            power=v1[r]-v1[l];
            base=v1[l]-v1[l-1];
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
     // getchefora();
      getresult();

    }
}