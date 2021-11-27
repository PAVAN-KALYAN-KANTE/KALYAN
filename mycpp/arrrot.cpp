#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v){cin>>i;}
    k = k%n;
    int r = __gcd(k, n);
    for (int i = 0; i < r; i++) {
        int temp = v[i];
        int j = i;
        while (1) {
            int p = j + k;
            if (p >= n)
                p = p - n;
            if (p == i)
                break;
            v[j] = v[p];
            j = p;
        }
        v[j] = temp;
    }
    for(auto i:v){cout<<i<<" ";}
    
}