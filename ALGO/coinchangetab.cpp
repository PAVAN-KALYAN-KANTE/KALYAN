#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&v,int n,int amount){
    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int j=1;j<=amount;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(j-v[i-1]>=0){
            dp[i][j]=dp[i-1][j]+dp[i][j-v[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }
    return dp[n][amount];
}
signed main(){
    int n;
    vector<int>v;
    v={1,2,5,10};
    n=v.size();
    int amount=12;
    int result=getresult(v,n,amount);
    cout<<result<<endl;
}