#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int wt[],int pf[],int w){
    if(n==-1 or w==0){return 0;}
    if(wt[n-1]>w){
        return knapsack(n-1,wt,pf,w);
    }
    else{
        return max(knapsack(n-1,wt,pf,w),(pf[n-1]+knapsack(n-1,wt,pf,w-wt[n-1])));
    }
}
signed main(){
    int n=3;
    int wt[]={10,20,30};
    int pf[]={60,100,120};
    int w=50;
    int result=knapsack(n, wt, pf,w);
    cout<<result<<endl;
}