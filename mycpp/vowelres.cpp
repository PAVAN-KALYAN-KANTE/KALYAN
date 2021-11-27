#include<bits/stdc++.h>
using namespace std;
bool vowel(char x){
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
      return true;
  }
  else{
      return false;
  }
}
signed main(){
  int n;
  cin >> n;
  string a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  string res="";
  for(int i=0;i<n;i++){
   string k=a[i];
   if(vowel(k[0])&&vowel(k[k.length()-1])){
       res+=k;
   }   
  }
  if(res.length()==0){
      cout<<"No words found";
  }
  cout<<res<<endl;
}