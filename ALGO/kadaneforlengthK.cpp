#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&v,int n,int k){
    int msf=0,max=INT_MIN;
    for(int i=0;i<k;i++){
        msf+=v[i];
    }
    max=msf;
    for(int i=k;i<n;i++){
        msf+=v[i]-v[i-k];
        if(msf>max){max=msf;}
    }
    return max;
}
signed main(){
    int n;
    vector<int>v;
    v={1,6,-1,99,-88,789,-22};
    n=v.size();
    int k=4;
    int result=getresult(v,n,k);
    cout<<result<<endl;
}