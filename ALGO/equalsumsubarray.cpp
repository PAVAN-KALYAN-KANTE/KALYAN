#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2!=0){return false;}
    else{
        sum=sum/2;
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=sum;i++){
            dp[0][i]=false;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j<arr[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else if(j>=arr[i-1]){
                    dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]];
                }
            }
        }
        for(int i=0; i<=n;i++){
            for(int j=0; j<=sum;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[n][sum];
    }
}

signed main(){
    int n;
    int arr[]={1,7,11,17};
    n =sizeof(arr)/sizeof(arr[0]);
    bool result=solve(arr,n);
    cout<<result<<endl;
}