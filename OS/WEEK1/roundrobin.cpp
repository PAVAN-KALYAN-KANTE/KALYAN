#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>process(n);
    for(auto &i:process){cin>>i;}
    vector<int>bursttimes(n);
    for(auto &i:bursttimes){cin>>i;}
    vector<int>bt_cp(n);
    bt_cp=bursttimes;
    int quantum;
    cin>>quantum;
    int t=0;
    vector<int>wt(n);
    while(1){
        bool done=true;
        for(int i=0; i<n; i++){
            if(bt_cp[i]>0){
                done=false;
                if(bt_cp[i]>quantum){
                    t+=quantum;
                    bt_cp[i]-=quantum;
            }
            else{
                t=t+bt_cp[i];
                wt[i]=t-bursttimes[i];
                bt_cp[i]=0;
            }
        }
     }
    if(done==true){
        break;
    }
    }
   // for(auto i:wt){cout<<i<<" ";}
    vector<int>tat(n);
    for(int i=0;i<n;i++){
        tat[i]=bursttimes[i]+wt[i];
    }
    int totalwt=0,totaltat=0;
    for(int i=0; i<n; i++){
        totalwt+=wt[i];
        totaltat+=tat[i];
    }
    cout<<totalwt/n<<"    "<<totaltat/n<<endl;
}