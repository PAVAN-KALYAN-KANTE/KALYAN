#include<bits/stdc++.h>
using namespace std;
void Max_heapify(vector<int>&v,int a){
    int i=a;
    int left=2*i+1;
    int right=2*i+2;
    if(v[i]<v[left] and v[i]<v[right]){
        if(v[left]>v[right]){
            swap(v[i],v[left]);
            Max_heapify(v,left);
        }
        else{
            swap(v[i],v[right]);
            Max_heapify(v,right);
        }
    }
}
signed main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v){
        cin>>i;
    }
    Max_heapify(v,0);
    for(auto i:v){cout<<i<<" ";}
}