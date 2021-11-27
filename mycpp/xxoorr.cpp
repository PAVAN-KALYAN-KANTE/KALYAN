#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k,c=0,res=0;
        cin>>n>>k;
        vector<int>v1(n),v2(32);
        for(int j=0; j<n; j++){int d;cin>>d;v1.push_back(d);}
        for(int u=0; u<v2.size();u++){
            c=0;
            for(auto i:v1){
                if(i%2!=0){
                   c++;
                }
                i=i/2;
            }
            v2[u]=c;
        }
         for(int u=0; u<v2.size();u++){
           if(v2[u]%k==0){
               res=res+v2[u]/k;
           }else{
               res=res+v2[u]/k+1;
           }
        }
        cout<<res<<endl;
    }
}