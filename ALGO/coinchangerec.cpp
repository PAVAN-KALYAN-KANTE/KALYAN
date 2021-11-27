#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&v,int n,int amount){
    if(amount==0){
        return 1;
    }
    if(amount<0){
        return 0;
    }
    if(amount>0 and n<=0){
        return 0;
    }
    else{
        return (getresult(v,n-1,amount)+getresult(v,n,amount-v[n-1]));
    }
}
signed main(){
    int n;
    vector<int>v;
    v={1,2,3};
    n=v.size();
    int amount=5;
    int result=getresult(v,n,amount);
    cout<<result<<endl;
}