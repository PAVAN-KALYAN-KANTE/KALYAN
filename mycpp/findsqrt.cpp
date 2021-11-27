#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double p=1;
    int i=0;
    while (1)
    {
        i = i + 1;
        p = (n / p + p) / 2;
        if (i == n + 1) { break; }
    }
    cout<<p<<endl;
}