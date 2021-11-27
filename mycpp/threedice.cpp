#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin>>x>>y;
        floatd=6-(x+y);
        if(d>=0){
            cout<<d/6<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}