#include<bits/stdc++.h>
using namespace std;
int getresult(vector<int>&v,int n,int amount){
    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int j=1;j<=amount;j++){
        dp[0][j]=1e5;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(v[i-1]<=j){
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-v[i-1]]);
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
    v={1,2,5,10,12};
    n=v.size();
    int amount=17;
    int result=getresult(v,n,amount);
    cout<<result<<endl;
}