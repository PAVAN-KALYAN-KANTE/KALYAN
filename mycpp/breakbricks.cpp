#include<bits/stdc++.h>
using namespace std;
signed main(){
   vector<int>v;
   v={3,2,5,4,6,7,9};
   int bh=4;
   vector<pair<int,int>>vp(v.size());
   for(int i=0; i<v.size();i++) {
       vp[i].first=v[i];
       vp[i].second=i;
   }
   vector<vector<int> >ans;
   vector<int>ans1,ans2,ans3;
   int ans4=0;
   sort(vp.rbegin(),vp.rend());
   for(int i=0;i<bh;i++) {
      ans2.push_back(vp[i].second+1);
      ans4++;
   }
   sort(ans2.begin(),ans2.end());
   for(int i=bh;i<v.size();i++) {
       ans3.push_back(vp[i].second+1);
       ans4=ans4+vp[i].first;
   }
   sort(ans3.begin(),ans3.end());
   if(ans2.size()==0){ans2.push_back(-1);}
   if(ans3.size()==0){ans3.push_back(-1);}
   ans1.push_back(ans4);
   ans.push_back(ans1);
   ans.push_back(ans2);
   ans.push_back(ans3);
   for(int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
    }
}