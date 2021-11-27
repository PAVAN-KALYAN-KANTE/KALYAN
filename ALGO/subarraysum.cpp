#include<bits/stdc++.h>
using namespace std;
bool subarraysum(int arr[],int sum){
    int n=sizeof(arr)/sizeof(arr[0])+1;
    bool dp[n+1][sum+1];
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
    return dp[n][sum];
}
signed main(){
    int sum;
    int arr[]={7,11,13,24};
    sum =31;
    bool result=subarraysum(arr,sum);
    cout<<result<<endl;
}