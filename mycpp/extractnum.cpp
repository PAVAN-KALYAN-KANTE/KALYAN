// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isNumber(string s){
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
    }
    bool hasnine(string s){
        int flag=-1;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == '9'){flag = 1; break;}}
        if(flag == 1){return true;}
        else{return false;}
    }
    long long ExtractNumber(string S){
        int temp2=0,res=0;
        string temp1;
           string token = "";
           for (auto x : S) {
           if (x == ' '){
               token = "";
           }
          else{
              token=token+x;
          }
          if(isNumber(token)){
               temp1=token;
           }
          if(hasnine(temp1)){
             temp2=stoi(temp1);
          }
          res=max(res,temp2);
           }
        return res;
    }
};

// { Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends