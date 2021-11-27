#include<iostream>
#include<math.h>
using namespace std;
unsigned long long int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
unsigned long long int getresult(int n){
    unsigned long long int k,l,x,y,m;
    k=n/5; 
    l=n%5;
    x=fact(k);
    y=fact(l);
    m=pow(2,k)*x*y;
    return m;
}
int main(){
    int n;
    cin>>n;
    unsigned long long int i=getresult(n);
    cout<<i%10<<endl;
    return 0;
}