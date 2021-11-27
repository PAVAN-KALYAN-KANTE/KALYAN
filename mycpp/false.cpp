#include <bits/stdc++.h>
using namespace std;
int main(){
    /*char* s=new char[11];
    cin>>s;
    vector<int>v;
    for(int i=0;s[i]!='\0';i++){v.push_back(s[i]);}
    for(auto i:v){cout<<i-48<<endl;}*/
    string s;
    std::string::iterator p;
    cin>>s;
   // cout<<s<<endl;
    if(s[0]!='1'){p=s.insert(s.begin()+0,'1');}
    else{p=s.insert(s.begin()+1,'0');}
    cout<<s<<endl;
}