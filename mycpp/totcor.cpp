#include<bits/stdc++.h>
using namespace std;

bool sortbyinc(pair<string,int>&a,pair<string,int>&b){
    return a.second<b.second;
}

int main(){
    int t;
    cin>>t;
    while(t--){
          int n;
          cin>>n;
          map<string,int>p1;
           vector<pair<string,int>>p2;
          for(int i=1;i<=n*3;i++){ 
              string c; int d;
              cin>>s>>x;
              auto it=p1.find(c);
              if(it!=p1.end()){p1[s]=it->second+d;}
              else{p1[c]=d;}}
        for(auto & it:p1){ p2.push_back(it);}
        sort(p2.begin(),p2.end(),sortbyinc);
          for(auto&it:p2){cout<<it.second<<" ";}
          cout<<endl;
    }
    return 0;
}