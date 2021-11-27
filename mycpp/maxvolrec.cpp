#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
//     as V = lbh, 
// => V = l (A/2-(lb+lh)) {from equation (ii)} 
// => V = lA/2 – l2(b+h) 
// => V = lA/2 – l2(P/4-l) {from equation (i)} 
// => V = lA/2 – l2P/4 + l3 —-(iii)
// Now differentiate V w.r.t l for finding maximum of volume. 
// dV/dl = A/2 – lP/2 + 3l2 
// After solving the quadratic in l we have l = (P – (P2-24A)1/2) / 12 
// Substituting value of l in (iii), we can easily find the maximum volume.
    float l = (n - sqrt(n * n - 24 * m)) / 12;
    float V = l * (m / 2.0 - l * (n / 4.0 - l));
    cout<<V<<endl;
}