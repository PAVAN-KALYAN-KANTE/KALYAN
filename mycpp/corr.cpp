#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Substr(string s2, string s1)
{
    ll counter = 0; // pointing s2
    ll i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?-1:i-counter;
}
int main(){
    string m="abcdefghijklmNOPQRSTUVWXYZ";
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        string s;
        ll l=0;
        list<ll>l1;
        for(ll i=0;i<k;i++){
            cin>>s;
            if(Substr(s,m)==-1){
                l=0;
                l1.push_back(l);
            }
            else{
                l++;
                l1.push_back(l);
            }
        }
        l1.sort();
        int b=l1.front();
        if(b==0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
    return 0;
}