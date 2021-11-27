#include <bits/stdc++.h>
using namespace std;
signed  main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int>v(n);
    for(auto &i:v){cin>>i;}
    int head;
    cin>>head;

     int seek_count = 0;
     int distance, cur_track;
 
    for (int i = 0; i <n; i++) {
        cur_track = v[i];
 
        distance = abs(cur_track - head);
 
        seek_count += distance;
 
        head = cur_track;
    }
 
    cout << "Total number of seek operations = "
         << seek_count << endl;
 
    cout << "Seek Sequence is" << endl;
 
    for(auto i:v){cout<<i<<endl;}

    return 0;
}