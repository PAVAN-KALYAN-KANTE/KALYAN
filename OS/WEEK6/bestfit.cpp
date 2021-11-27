#include<bits/stdc++.h>
using namespace std;
signed main(){
    int m,n;
    cout<<"enter no.of blocks ";
    cin>>m;
    cout<<"enter no.of processses ";
    cin>>n;
    vector<int>blocksize(m);
    vector<int>processsize(n);
    for(auto &i:blocksize){cin>>i; }
    for(auto &i:processsize){cin>>i; }
    vector<int>allocations(n,-1);
    for(int i=0;i<n;i++){
        int bestidx=-1;
        for(int j=0;j<m;j++){
            if(blocksize[j]>=processsize[i]){
                if(bestidx==-1){
                    bestidx=j;
                }
                else if(blocksize[bestidx]>blocksize[j]){
                        bestidx=j;
                }
            }

        }
        if(bestidx!=-1){
            blocksize[bestidx]-=processsize[i];
            allocations[i]=bestidx;
        }
    }
    cout<<"process no. \tprocess size\tblock no."<<endl;
    for(int j=0;j<n;j++){
        cout<<"  "<<j+1<<"\t  "<<processsize[j]<<"\t ";
        if(allocations[j]!=-1){
            cout<<allocations[j]+1<<endl;
        }
        else{
            cout<<"mem not allocated"<<endl;
        }
    }
}    