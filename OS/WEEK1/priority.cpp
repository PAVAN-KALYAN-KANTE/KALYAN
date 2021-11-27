#include<bits/stdc++.h>
using namespace std;
class process{
    public:
    int at,bt,pr,pno;
};
bool cmp(process a,process b){
    if(a.at == b.at){
        return a.pr < b.pr;
    }
    else{
        return a.at < b.at;
    }
}
signed main(){
    int n;
    cin>>n;
     process p[]=new process[n];
    vector<int>arrivaltimes(n);
    for(auto &i:arrivaltimes){cin>>i;}
    vector<int>burstTimes(n);
    for(auto &i:burstTimes){cin>>i;}
    vector<int>priority(n);
    for(auto &i:priority){cin>>i;}
    for(int i=0;i<n;i++){
        p[i].at=arrivaltimes[i];
        p[i].bt =burstTimes[i];
        p[i].pr=priority[i];
        p[i].pno=i+1;
    }
    sort(p,p+n,cmp);
    vector<int>wt(n);
    wt[0]=0;
    for(int i=0;i<n;i++){
        wt[i]=wt[i-1]+p.bt[i-1];
    }
    int totwt=0;
    for(int i=0;i<n;i++){totwt+=wt[i];}
    int avgwt=totwt/n;
}