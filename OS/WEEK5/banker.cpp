#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,r;
    cout<<"Number of processes ";
    cin>>n;
    cout<<"Number of resources ";
    cin>>r;
    int **max=new int*[n];
    for(int i=0;i<n;i++){
        max[i]=new int[r];
    }
    cout<<"max matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            cin>>max[i][j];
        }
    }
    int **alloc=new int*[n];
    for(int i=0;i<n;i++){
        alloc[i]=new int[r];
    }
    cout<<"allocation matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            cin>>alloc[i][j];
        }
    }
    vector<int>mini(r);
    for(int j=0;j<r;j++){
        for(int i=0;i<n;i++){
            mini[r]+=alloc[i][j];
        }
    }
    int **need=new int*[n];
    for(int i=0;i<n;i++){
        need[i]=new int[r];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    vector<int>avr(r);
    cout<<"available resources"<<endl;
    for(auto &i:avr){cin>>i;}
    vector<bool>finish(n,false);
    vector<int>safeseq(n);
    vector<int>available(r);
    for(int i=0;i<r;i++){
        available[i]=avr[i]-mini[i];
    }
    int count=0;
    while(count<n){
        for(int i=0;i<n;i++){
            int p=0;
            if(!finish[i]){
                for(int j=0;j<r;j++){
                   if(need[i][j]>available[j]){
                       p++;
                   }
                }
                 if(p==0){
                      for(int k=0;k<r;k++){
                          available[k]+=alloc[i][k];
                      }
                      safeseq[count]=i;
                      finish[i]=true;
                      count++;
                   }
                   else if(p!=0){
                       break;
                   }
            }
        }
    }
    for(auto i:safeseq){cout<<i<<" ";}
    
}