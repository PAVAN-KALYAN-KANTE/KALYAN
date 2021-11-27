#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>&events){
    int n=events.size();
    int A=INT_MIN,B=INT_MIN,C=INT_MIN;
    int st1=events[0][0];
    int et1=events[0][1];
    int st2=0,et2=0;
    A=events[0][2];
    for(int i=1; i<n; i++){
        if(events[i][0]>st1 and events[i][1]>et1){
            if(B<events[i][2] and A>=events[i][2]){
                B=events[i][2];
            }
            else{
                C=max(C,events[i][2]);
            }
            st2=events[i][0];
            et2=events[i][1];
        }
        else if(events[i][0]>st2 and events[i][1]>et2){
             if(A<events[i][2] and B>=events[i][2]){
                A=events[i][2];
            }
            else{
                C=max(C,events[i][2]);
            }
            st2=events[i][0];
            et2=events[i][1];
        }
        else{
            C=max(C,events[i][2]);
        }
    }
    return max((A+B),C);
}
signed main(){
    vector<vector<int> > events;
    events={{1,5,3},{1,5,1},{6,6,5}};
    cout<<solve(events)<<endl;
}