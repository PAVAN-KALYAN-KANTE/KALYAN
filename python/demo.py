class Solution:
 

    def ExtractNumber(self,S):
           n=[int(i) for i in S.split() if i.isdigit()]
           if len(n)==0:
               return -1
           else:
               return max(n,key=lambda x:x if not "9" in str(x) else -1)
#{ 
#  Driver Code Starts
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        S=input()
        ob=Solution()
        ans=ob.ExtractNumber(S)
        print(ans)   
# } Driver Code Ends
