#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int n=A.size();
   // cout<<"here";
    vector<int>vl(n),vr(n);
    vl[0]=0,vr[n-1]=0;
    for(int i=1;i<n;i++){
      vl[i]=max(vl[i-1],A[i-1]);
    }
   // for(auto i:vl){cout<<i<<" ";}
   // cout<<endl;
    for(int i=n-2;i>=0;i--){
       vr[i]=max(A[i+1],vr[i+1]);
    }
   // for(auto i:vr){cout<<i<<" ";}
    int a,b,c,res=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        a=vl[i];
        b=A[i];
        c=vr[i];
        if(a<b and b<c){
            sum=a+b+c;
            res=max(sum,res);
        }
    }
    return res;
}
int main(){
   // int n;
    //cin>>n;
  //  cout<<1<<"////";
    vector<int>v{2,5,3,1,4,9};
    //for(auto &i:v){cin>>i;}
  //  cout<<"here";
    cout<<solve(v);
}
