#include<bits/stdc++.h>
using namespace std;
signed main(){
    cout<<"ENTER NO.OF ROOMS IN HOUSE: ";
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
    cout<<"TOTAL DIRTY ROOMS IN HOUSE "<<count1<<endl;
    cout<<"VACCUM CLEANER ENTER ROOM ONLY IF ROOM IS DIRTY "<<endl;
    int k,x,y;
    bool flag=true;
    cout<<"ENTER STARTING POSITION OF CLEANER ";
    cin>>x;k=x-1;y=k;
    while(true){
    if(house[k].second==-1){break;}
    else{k++;}
    }
    if(k!=y){cout<<"STARTING ROOM IS NOT DIRTY SO "<<endl;}
    while(flag){
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