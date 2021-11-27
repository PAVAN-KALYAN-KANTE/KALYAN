#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&length,vector<int>&price,int n,int l){
    if(l==0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    if(length[n-1]>l){
        return getresult(length,price,n-1,l);
    }
    else{
        return max(getresult(length,price,n-1,l),price[n-1]+getresult(length,price,n,l-length[n-1]));
    }
}
signed main(){
    int n;
    vector<int>length,price;
    length={1,2,3,4,5,6,7,8};
    price={3 ,  5  , 8  , 9 , 10 , 17 , 17 , 20};
    n=length.size();
    int l=8;
    int result=getresult(length,price,n,l);
    cout<<result<<endl;
}