#include<bits/stdc++.h>
using namespace std;
pair<int,int> getresult(vector<int>&v,int n,int k){
    int p=1,x=1;
    int sum1=0,sum2=INT_MIN;
    vector<int>res2;
    vector<int>res;
    pair<int,int>indexes;
    int a=-1,b=-1;
    for(int i=0;i<n-k+1;i++){
      for(int l=i;l<i+k;l++){res2.push_back(v[l]);}
      a=i;b=i+k-1;
     // for(auto i:res2){cout<<i<<" ";}cout<<endl;
      sort(res2.begin(),res2.end());
       for(int j=1;j<k;j++){
           if(res2[j]-res2[j-1]==x){
               p++;
           }
           sum1+=res2[j];
       }
       sum1+=res2[0];
       if(p==k){
           res=res2;
           if(sum1>sum2){
               sum2=sum1;
               indexes.first=a;
               indexes.second=b;
           }
           res2.clear();
       }
       p=1;
       sum1=0;
       res2.clear();
    }
    // for(auto i:res){ 
    //     cout<<i<<" ";
    // }cout<<endl;
    return indexes;
}
signed main(){
    int n;
    vector<int>v;
    v={15,4,9,8,10,11,12,22,25,28,33,27,26,30,44};
    n=v.size();
    int k=4;
    pair<int,int>indexes;
    indexes=getresult(v,n,k);
    cout<<indexes.first<<"  "<<indexes.second<<endl;
}