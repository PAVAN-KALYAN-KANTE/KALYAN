#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>processes(n);
    for(auto &i: processes){cin>>i;}
    vector<int>arrival(n);
    for(auto &i: arrival){cin>>i;}
    vector<int>burstTimes(n);
    for(auto &i: burstTimes){cin>>i;}
    vector<pair<int,int> >vp(n);
    for(int i=0;i<n;i++){vp[i]=(make_pair(burstTimes[i],i));}
    for(int i=0;i<n;i++){
       sort(vp.begin(),vp.end());
    }
    vector<int>wt(n),tat(n);
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=0;
        for(int j=0;j<i;j++){
            wt[i]+=vp[j].first;
        }
    }
    int totalwttime=0,turntime=0;
    for(auto i:wt){totalwttime+=i;}
    for(int i=0;i<n;i++){tat[i]=vp[i].first+wt[i];}
    for(auto i:tat){turntime+=i;}
    cout<<totalwttime/n<<endl;
    cout<<turntime/n<<endl;
}