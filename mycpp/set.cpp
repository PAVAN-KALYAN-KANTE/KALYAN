#include<iostream>
#include<list>
#include<set>
#include<iterator>
typedef long long int ull;
using namespace std;
int main(){
    ull t;
    cin>>t;
    while(t--){
    ull n,k;
    cin>>n>>k;
    ull a[n];
    for(ull i=0;i<n;i++){
        cin>>a[i];
    }
    set<ull>s;
    list<ull>ml;
    ull m,l;
  for(ull i=0;i<n;i++){
      l=0;
      for(ull j=i;j<n;j++){
          s.emplace(a[j]);
          if(s.size()<k){
              l++;
              ml.emplace_back(l);
          }
           if(s.size()==k){
            m=l;
            s.clear();
            ml.push_back(m);
           break;
           }
        }
    }
    ml.sort();
    m=ml.back();
  cout<<m<<endl;
    }
    return 0;
}