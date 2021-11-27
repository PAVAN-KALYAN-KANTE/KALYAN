#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>>dp;
void printv(vector<int>&v){
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
}
void subset(int arr[],int i,int sum,vector<int>&v){
    if(i==0 and sum!=0 and dp[0][sum]){
        v.push_back(arr[i]);
        if(arr[i]==sum){
            printv(v);
        }
        return;
    }
    if(i==0 and sum==0){
        printv(v);
        return;
    }
    if (dp[i-1][sum]){
        vector<int> b = v;
        subset(arr, i-1, sum, b);
    }
    if (sum >= arr[i] && dp[i-1][sum-arr[i]]){
        v.push_back(arr[i]);
        subset(arr, i-1, sum-arr[i], v);
    }
    
}
void subarraysum(int arr[],int sum,int n){
     dp.resize(n+1);
     for (int i = 0; i <= n; ++i){
     dp[i].resize(sum+1);}
   // bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<sum+1;i++){
        dp[0][i]=false;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(j<arr[i-1]){
                dp[i][j] = dp[i-1][j];
            }
            if(j>=arr[i-1]){
                dp[i][j]=(dp[i-1][j] or dp[i-1][j-arr[i-1]]); 
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j]<<"  ";
        }
        cout<<endl;
    }
     vector<int>v;
    subset(arr,n-1,sum,v);
    //return dp[n][sum];
}
signed main(){
    int sum;
    int arr[]={7,11,24,13};
    sum =31;
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    //bool result=
    subarraysum(arr,sum,n);
   // cout<<result<<endl;
}