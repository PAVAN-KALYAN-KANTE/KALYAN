#include <bits/stdc++.h>
using namespace std;
int disk_size = 200;
signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v){cin>>i; }
    int head;
    cin>>head;
    string direction = "left";
    int seek_count = 0;
    int distance, cur_track;
    vector<int> left, right;
    vector<int> seek_sequence;
    if (direction == "left")
        left.push_back(0);
    else if (direction == "right")
        right.push_back(disk_size - 1);
 
    for (int i = 0; i < n; i++) {
        if (v[i] < head)
            left.push_back(v[i]);
        if (v[i] > head)
            right.push_back(v[i]);
    }
 
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
 
    int run = 2;
    while (run--) {
        if (direction == "left") {
            for (int i = left.size() - 1; i >= 0; i--) {
                cur_track = left[i];
 
                seek_sequence.push_back(cur_track);
 
                distance = abs(cur_track - head);
 
                seek_count += distance;
 
                head = cur_track;
            }
            direction = "right";
        }
        else if (direction == "right") {
            for (int i = 0; i < right.size(); i++) {
                cur_track = right[i];
                seek_sequence.push_back(cur_track);
 
                distance = abs(cur_track - head);
 
                seek_count += distance;
 
                head = cur_track;
            }
            direction = "left";
        }
    }
 
    cout << "Total number of seek operations = "
         << seek_count << endl;
 
    cout << "Seek Sequence is" << endl;
    for(auto i:seek_sequence) {cout << i<<endl;}
 
}