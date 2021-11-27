#include<bits/stdc++.h>
using namespace std;
signed main(){
    int 
    int n;
    //cin>>n;
    n=2;
    vector<pair<int,int> >house(n);
    int count1=0;
    for(int i=0; i<2; i++){
        cout<<"ENTER 1 IF ROOM "<<i+1<<" IS DIRTY ELSE 0 ";
        int temp;
        cin>>temp;
        if(temp==1){house[i].first=1;house[i].second=-1;count1++;}
        else{house[i].first=0;house[i].second=0;}
    }
    int k;
    bool flag=true;
    while(flag){
        cout<<"ENTER STARTING POSITION OF CLEANER ";
        cin>>k;
        if(house[k].second==-1){
            cout<<"ENTERED ROOM NUMBER "<<k+1<<endl;
            cout<<"CLEANING ROOM "<<k+1<<endl;
            count1--;
            house[k].second=0;
            if(count1==0){cout<<"CLEANED ALL ROOMS "<<endl;flag=false;}
            else{cout<<"\nMOVING TO NEXT DIRTY ROOM "<<endl;
            if(k!=n-1){k++;}
            else{k=0;}
            }
        }
        else{
          if(k!=n-1){k++;}
          else{k=0;}
        }
    }
    for(int i=0; i<n; i++){
        cout<<house[i].first<<" "<<house[i].second<<"  "<<endl;
    }cout<<endl;
}