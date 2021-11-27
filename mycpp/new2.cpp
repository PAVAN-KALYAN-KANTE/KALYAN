#include <bits/stdc++.h> 
#include<list>
#include<iterator>
using namespace std;

int main() {
    unsigned long long int n;
    cin>>n;
    unsigned long long int arr[n];
    for(unsigned long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    std::list<unsigned long long int> l1;
    for (unsigned long long int i: arr) {
        l1.push_back(i);
    }
    l1.sort();
    list<unsigned long long int>l2;
    while(!l1.empty()){
    l2.push_front(l1.front()+l1.back());
    l1.pop_front();
    l1.pop_back();
    }
    l2.unique();
    l2.sort();
    
    /*list <int> :: iterator it;
    for(it = l2.begin(); it != l2.end(); ++it)
        cout << *it<<"  ";
    cout<<endl;*/
    
    
    //for (auto const &i: l2) {
      //  std::cout << i <<"   ";
    //}
      //cout<<endl;

    unsigned long long int k;

    if(l2.size()==1){

         k=0;
     }
    else{
    int a[l2.size()];
    int j = 0;
    for (int const &i: l2) {
        a[j++] = i;
    }
    
     k=abs(a[1]-a[0]);
    for(int i=2;i<n;i++)
    {
      if(abs(a[i]-a[i-1]) < k)
        k = abs(a[i]-a[i-1]);
    }
    cout<<k<<endl;
	return 0;
 }
}