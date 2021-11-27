#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll L,h,c=0;
        cin>>L>>h;
        string s;
        cin>>s;
        int k=-1;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='0'){c++;}
            else{
                if(c==h){k=1;}
                else{
                    ll j=2*(h-c);
                    if(j<h){h=j;}
                    c=0;
                }
            }
        }
        if(k==1){cout<<"yes"<<endl;}
        else{h=2*(h-c);
        if(h<=0){cout<<"yes"<<endl;}else{
            cout<<"no"<<endl;}}
    }
}