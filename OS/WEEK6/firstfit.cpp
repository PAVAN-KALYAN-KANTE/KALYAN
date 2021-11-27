#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,m;
    cout<<"no.of blocks ";
    cin>>m;
    cout<<"no.of processes";
    cin>>n;
    vector<int>blocksizes(m);
    vector<int>processes(n);
    for(auto &i:blocksizes){cin>>i;}
    for(auto &i:processes){cin>>i;}
    vector<bool>visited(m,true);
    vector<int>allocation(n,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(blocksizes[j]>=processes[i] and visited[j] ){
                 allocation[i]=j;
                // blocksizes[j]=blocksizes[j]-processes[i];
                visited[j]=false;
                 break;
             }
        }
    }
    cout<<"process no. \tprocess size \tblock no. "<<endl;
    for(int i=0;i<n;i++){
       cout<<"\t"<<i+1<<"\t "<<processes[i]<<"\t\t";
       if(allocation[i]!=-1){
           cout<<allocation[i]+1<<endl;
       }
       else{
           cout<<"mem not alloc"<<endl;
       }
    }
}