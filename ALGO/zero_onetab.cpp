#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int wt[],int pf[],int w){
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 or j==0){dp[i][j] =0;}
            else if(wt[i-1]>j){dp[i][j] =dp[i-1][j];}
            else{
                dp[i][j] =max(dp[i-1][j],pf[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
    }
    return dp[n][w];
}
signed main(){
    int n=3;
    int wt[]={10,30,20};
    int pf[]={60,120,100};
    int w=50;
    int result=knapsack(n, wt, pf,w);
    cout<<result<<endl;
}