#include<bits/stdc++.h>
using namespace std;
struct type{
    char a;
    int b,c;
};
int main(){
    string s;
    cin>>s;
    vector<type>v(s.length());
    for(int i=0;i<s.length();i++){
       v[i].a =s[i];
       v[i].b =i;
       v[i].c =-1;
    }
    for(auto i:v) {cout<<i.a<<" "<<i.b<<" "<<i.c<<endl;}
   // for(auto i:v) {if(i.a)}
}