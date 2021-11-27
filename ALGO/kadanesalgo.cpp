#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&v,int n){
    int meh=0,msf=INT_MIN;
    int left=0,right=0;
    for(int i=0;i<n;i++){
        meh+=v[i];
        if(meh<v[i]){
            meh=v[i];
            left=i;
        }
        if(meh>msf){
            msf=meh;
            right=i;
        }        
    }
    cout<<left<<" "<<right<<" "<<endl;
    return msf;
}
signed main(){
    int n;
    vector<int>v;
    v={1,3,-2,-4,5,2};
    n=v.size();
    int result=getresult(v,n);
    cout<<result<<endl;
}