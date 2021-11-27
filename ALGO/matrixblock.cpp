#include<bits/stdc++.h>
using namespace std;
int result(vector<int>&Arr,int n,vector<int>&l,vector<int>&r,int x,int y,int Q){
    while(Q--){
        for(int i=0;i<n;i++){
            if(Arr[i]==x[Q] and Arr[i]>=l[Q] and Arr[i]<=r[Q]){
                Arr[i]=y[Q];
            }
            else if(Arr[i]==y[Q] and Arr[i]>=l[Q] and Arr[i]<=r[Q]){
                Arr[i]=x[Q];
            }
        }
    }
    int lis[n]; 

	lis[0] = 1; 
    
    for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( Arr[i] > Arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 

	return *max_element(lis, lis+n);
    
}
int main(){
    int n,Q,x,y;
    cin>>n;
    vector<int>Arr(n);
    Arr={4,3,5,7};
    cin>>Q;
    vector<int>l(Q);
    vector<int>r(Q);
    for(int i=0;i<Q;i++){
        cin>>l[i];
    }
    for(int i=0;i<Q;i++){
        cin>>r[i];
    }
    cin>>x>>y;
    cout<<result(Arr,n,l,r,x,y,Q)<<endl;
}