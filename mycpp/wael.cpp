#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,c=0;
    cin>>n;
    vector<int>v(n);
    list<int>l1;
   for(int i=0;i<n;i++) {
       cin>>v[i];
       if(v[i]!=1) {
           l1.push_back(i);
       }
   }
  //for(auto i:v) {cout<<i<<" ";}cout<<endl;
  //for(auto i:l1) {cout<<i<<" ";}cout<<endl;
   while(!l1.empty()) {
       int k=l1.front();
       cout<<k<<"K"<<endl;
       int j=k+v[k];
       v[k] =v[k]-1;
       if(v[k]==1){l1.remove(k);}
       while(j<n) {
          // cout<<"here1"<<endl;
           if(v[j]!=1) {
               int p=j;
               int q=v[p];
               v[j] =v[j]-1;
               if(v[j]==1) {l1.remove(j);}
               j=p+q;
           }
           if(v[j]==1) {
               j=j+v[j];
           }

       }
 // for(auto i:v) {cout<<i<<" ";}

       c++;
   }
  // for(auto i:v) {cout<<i<<" ";}
   cout<<c<<endl;
}