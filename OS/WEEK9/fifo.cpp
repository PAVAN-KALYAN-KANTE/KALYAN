#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cout<<"length of string ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter string  ";
    for(auto &i:v){cin>>i;}
    int f;
    cout<<"number of frames ";cin>>f;
    list<int>page;
    int faults=0;
    cout<<"FILLING TAKES AS "<<endl;
    for(auto i:v){
        int flag=-1,x;
        for(auto a:page){
            if(a==i){
                flag=1;
            }
        }
       // cout<<flag<<endl;
        if(flag==-1){
           if(page.size()<f){
              page.push_back(i); 
           }
           else if(page.size()==f){
             page.pop_front();
             page.push_back(i); 
           }
         //  cout<<"inserted "<<i<<endl;
           faults++;
         //  cout<<"       fault----"<<faults<<endl;
        }
        for(auto p:page){cout<<p<<"  ";}cout<<endl;
    }
    cout<<"faults "<<faults<<endl;
}