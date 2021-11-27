#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>processes(n);
    for(auto &i:processes){cin>>i;}
    vector<int>burstTime(n);
    for(auto &i:burstTime){cin>>i;}
    vector<int>waitTime(n);
    waitTime[0]=0;
    for(int i=1; i<n; i++){
        waitTime[i]=burstTime[i-1]+waitTime[i-1];
    }
    vector<int>turnAroundTime(n);
    for(int i=0; i<n; i++){
        turnAroundTime[i]=burstTime[i]+waitTime[i];
    }
    int totalWaitTime=0,TotalturnAroundTime=0;
    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " << " Turn around time\n";
    for(int i=0; i<n; i++){
        totalWaitTime+=waitTime[i];
        TotalturnAroundTime+=turnAroundTime[i];
        cout << processes[i]<<"\t\t"<<burstTime[i]<<"\t\t"<<waitTime[i]<<"\t\t"<<turnAroundTime[i]<<endl;
    }
    cout<<"avgWaitTime  "<<(float)totalWaitTime/(float)n<<endl;
    cout<<"avgTurnATime "<<(float)TotalturnAroundTime/(float)n<<endl;
} 