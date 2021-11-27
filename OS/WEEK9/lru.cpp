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
    unordered_set<int>s;
    unordered_map<int,int>indexes;
    for(int i=0;i<n;i++){
        if(s.size()<f){
           if(s.find(v[i])==s.end()){
               s.insert(v[i]);
               faults++;
           }
          indexes[v[i]]=i;
        }
        else{
            if(s.find(v[i])==s.end()){
                int lru=INT_MAX,val;
                for(auto p:s){
                    if(indexes[p]<lru){
                        lru=indexes[p];
                        val=p;
                    }
                }
                s.erase(val);
                s.insert(v[i]);
                faults++;
            }
            indexes[v[i]]=i;
        }

    }
    cout<<" faults "<<faults<<endl;
}