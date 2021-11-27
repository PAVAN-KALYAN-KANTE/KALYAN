#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
typedef long long int ll;
using namespace std;
class kalyan{
    public:
    ll k;
     vector<char>v1;
     vector<char>v2;
     vector<string>v;
      
      void getsets(){
          /*for(int i='a';i<='m';i++){
              v1.emplace_back(i);
          }
          for(int i='N';i<='Z';i++){
              v2.emplace_back(i);
          }*/
          cin>>k;

          for(int i=0;i<k;i++){
              cin>>v[i];
          }
      }
     void result(){
         ll x=0;
         ll m=0,res;
         for(int i=0;i<k;i++){
           for(int j=0;i<v[i].size();j++){
              if(v[i][j]>='a' and v[i][j]<='m'){
                  x++;
              }
              else if(v[i][j]>='N' and v[i][j]<='Z'){
                  m++;
              }
            }

          if(x==v[i].size() or m==v[i].size()){
               res=1;
          }
          else{
              res=0;
          }
         }
          if(res==1){
              cout<<"yes"<<endl;
          }
          else if(res==0){
              cout<<"no"<<endl;
          }
        }

};
int main(){
    ll t;
    cin>>t;
    kalyan k;
    for(int y=0;y<t;y++){
        k.getsets();
        k.result();
    }
    return 0;
}