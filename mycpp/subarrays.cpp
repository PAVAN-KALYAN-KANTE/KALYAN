#include<bits/stdc++.h>
using namespace std;
int q=queries.size();
vector<long>results;
int p=0;
 while(q--) {
        int l,r,x;
        l=queries[0][1];
        r=queries[0][2];
        x=queries[0][3];
        p++
        int res=0;;
        for(int i=l-1;i<r;i++) {
            if(numbers[i]!=0){
             res+=numbers[i];}
             else{
                 res+=x;
             }
        }
        results.push_back(res);
        
    }
    return results;
signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) {
        cin>>i;
    }
    int q;
    cin>>q;
    while(q--) {
        int l,r,x;
        cin>>l>>r>>x;
        int res=0;;
        for(int i=l-1;i<r;i++) {
            if(v[i]!=0){
             res+=v[i];}
             else{
                 res+=x;
             }
        }
        cout<<res<<endl;
    }
}