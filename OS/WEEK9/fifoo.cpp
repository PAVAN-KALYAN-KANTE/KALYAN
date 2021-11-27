#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,c=0;
    cout<<"length of string ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter string  ";
    for(auto &i:v){cin>>i;}
    int f,faults=0;
    cout<<"number of frames ";cin>>f;
    vector<int>page(f,-1);
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<f;j++){
            if(v[i]==page[j]){break;}
        }
        if(j==f){
           page[c]=v[i];
           faults++;
           c++;
        }
        if(c==f){
            c=0;
        }
        for(auto p:page){cout<<p<<" ";}
        if(j==f){cout<<"fault no. "<<faults;}cout<<endl;

    }
}