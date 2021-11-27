#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&length,vector<int>&price,int n,int l){
    int dp[n+1][l+1];
    for(int i=0;i<=n;i++){
        dp[i][0] =0;
    }
    for(int j=1;j<=l;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=l;j++){
            if(j<length[i-1]){
                dp[i][j] =dp[i-1][j];
            }
            else{
                dp[i][j] =max(dp[i-1][j],price[i-1]+dp[i][j-length[i-1]]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=l;j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }
    return dp[n][l];
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