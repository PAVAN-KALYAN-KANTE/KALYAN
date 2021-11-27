#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long maxTip(int a[], int b[], int n, int x, int y) {
        int c[n],sum=0;
        for(int i=0; i<n; i++){c[i]=abs(a[i]-b[i]);}
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++){v[i]=make_pair(c[i],i);}
        sort(v.rbegin(),v.rend());
        for(auto i:v){int k;
        k=a[i.second]>b[i.second]?a[i.second]:b[i.second];
        if(k==a[i.second]){
        if(x>0){
            sum=sum+k;
            x--;
        }
        else{sum=sum+b[i.second];y--;}
        }
        else{
             if(y>0){
            sum=sum+k;
            y--;
        }
        else{sum=sum+a[i.second];x--;}
        }
        }
       return sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        Solution obj;
        auto ans = obj.maxTip(a, b, n, x, y);
        cout << ans << "\n";
    }
    return 0;
}

  