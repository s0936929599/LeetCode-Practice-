class Solution:
    def climbStairs(self, n: int) -> int:
        dp=[0]*(n+1)         
        for i in range(1,n+1):
            if i==1:
                dp[i]=i       
            elif i==2:
                dp[i]=i      
            else :
                dp[i]=dp[i-1]+dp[i-2]  
        return(max(dp))
