#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v1(3);
        vector<int>v2(3);
        for(auto &i:v1){
            cin>>i;
        }
        //  for(auto &i:v2){
        //     cin>>i;
        // }
        vector<int>p(3);
        vector<pair<int,int>>pairs(3);
        for(int i=0;i<3;i++){
            cin>>p[i];
            pairs[i]=make_pair(p[i],v1[i]);
        }
        sort(pairs.begin(),pairs.end());
        // for(int i=0;i<3;i++) {
        //     v2[i]=pairs[i].first;
        //     v1[i]=pairs[i].second;
        // }
        v1[0]=pairs[2].second;
        v2[0]=pairs[2].first;
        v1[1]=pairs[1].second;
        v2[1]=pairs[1].first;
        v1[2]=pairs[0].second;
        v2[2]=pairs[0].first;
        vector<int>v3(3);
        vector<int>v4(4);
        for(int i=0;i<3;i++){
            v3[i]=v1[i]*20;
        }
        int totime=0;
        for(auto i:v3){
            totime+=i;
        }
        cout<<totime<<" //"<<endl;
           while(1){
               if(v3[2]>0){
                   v3[2]-=(totime-240);
                    totime=v3[1]+v3[2]+v3[0];
                    if(totime==240){
                        break;
                    }
               }
               if(v3[2]==0 and v3[1]>0){
                    v3[2]-=(totime-240);
                     totime=v3[1]+v3[2]+v3[0];
                     if(totime==240){
                        break;
                    }
               }
               if(v3[2]==0 and v3[1]==0 and v3[0]!=0){
                   v3[1]-=(totime-240);
                    totime=v3[1]+v3[2]+v3[0];
                    if(totime==240){
                        break;
                    }
               }
           }
           if(v3[2]<0 and v3[1]>0){
              v3[2]+=__gcd(v1[2],v1[1]);
              v3[1]-=__gcd(v1[2],v1[1]);
           }
        for(int i=0;i<3;i++){
            v4[i]=(v3[i]/v1[i])*v2[i];
        }
        int result=0;
        for(auto i:v4){
            result+=i;
        }
        for(auto i:v1){cout<<i<<" ";}cout<<endl;
        for(auto i:v2){cout<<i<<" ";}cout<<endl;
        for(auto i:v3){cout<<i<<" ";}cout<<endl;
        for(auto i:v4){cout<<i<<" ";}cout<<endl;
        cout<<result<<endl;
    }
}