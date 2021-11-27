#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    list<int>s;
    srand(time(NULL));
    for (auto i = 0; i<1000; i++)
    {
        s.push_back((rand()%100)+1);
        s.unique();
    }
    for(auto i:s){
        if(i>x and i<y)
        cout << i <<"  ";
    }
    
}