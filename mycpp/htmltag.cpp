#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s[0]!='<' and s[1]!='/' and s[s.length()-1]!='>'){
        cout<<"Error"<<endl;
        return;
    }
    for(int i=2;i<s.length()-2;i++){
        if(s[i]-'0'>9 and s[i]-'0'<49){
            cout<<"Error"<<endl;
            return;
        }
        if(s[i]-'0'>57 and s[i]-'0'<97){
            cout<<"Error"<<endl;
            return;
        }
        else{
             cout<<"Success"<<endl;
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
      solve();
    }
}