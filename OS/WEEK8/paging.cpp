#include<bits/stdc++.h>
using namespace std;
signed main(){
    int ms,ps,nop,n,remp;
    cout<<"memory size ";
    cin>>ms;
    cout<<"page size ";
    cin>>ps;
    nop=ms/ps;
    cout<<"no.of pages available "<<nop<<endl;
    cout<<"no.of processes ";
    cin>>n;
    remp=nop;
    vector<int>s(10);
    int pt[10][20];
    int x,y,pa,offset;
    for(int i=0;i<n;i++){
        cout<<"enter no.of pages required for process "<<i+1<<"  ";
         cin>>s[i];

         if(s[i]>remp){
             cout<<"memory is full "<<endl;
             break;
         }
         
             remp=remp-s[i];
           cout<<"enter pagetable for process "<<i+1<<endl;
         for(int j=0;j<s[i];j++){
             cin>>pt[i][j];
         }
         cout<<"enter logical address "<<endl;
         cout<<"enter process number ";cin>>x;
         cout<<"enter page number ";cin>>y;
         cout<<"enter offset ";cin>>offset;

         if(x>n or y>s[i] or offset>=ps){
             cout<<"invalid"<<endl;
         }
         else{
             pa=offset+pt[x][y]*ps;
             cout<<"physical address is "<<pa<<endl;
         }

    }
    }
    