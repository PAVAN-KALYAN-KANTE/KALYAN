#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0; 
 
    bool hashmap[MAX] = {false};
 
    for (int i = 0; i < n; i++)
        hashmap[arr[i]] = true;
 
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        if (x - k >= 0 && hashmap[x - k])
            count++;
        if (x + k < MAX && hashmap[x + k])
            count++;
        hashmap[x] = false;
    }
    return count;
}
int main()
{
    int arr[] = {1, 1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    cout << "Count of pairs with given diff is "
        << countPairsWithDiffK(arr, n, k);
    return 0;
}