#include<bits/stdc++.h>
using namespace std;
signed main(){
    int m,n;
    cout<<"enter no.of blocks ";
    cin>>m;
    cout<<"enter no.of processes ";
    cin>>n;
    vector<int>blocksize(m);
    vector<int>processes(n);
    for(auto &i:blocksize){cin>>i; }
    for(auto &i:processes){cin>>i; }
    vector<int>allocations(n,-1);
    for(int i=0;i<n;i++){
        int wrstidx=-1;
        for(int j=0;j<m;j++){
            if(blocksize[j]>=processes[i]){
                if(wrstidx==-1){
                    wrstidx=j;
                }
                else if(blocksize[wrstidx]<blocksize[j]){
                        wrstidx=j;
                }
            }

        }
        if(wrstidx!=-1){
            blocksize[wrstidx]-=processes[i];
            allocations[i]=wrstidx;
        }
    }
    cout<<"process no. \tprocess size\tblock no."<<endl;
    for(int j=0;j<n;j++){
        cout<<"  "<<j+1<<"\t  "<<processes[j]<<"\t ";
        if(allocations[j]!=-1){
            cout<<allocations[j]+1<<endl;
        }
        else{
            cout<<"mem not allocated"<<endl;
        }
    }
}    