class Solution
{
    public:
        int mod = 1e9+7;
    //Function to count the number of ways in which frog can reach the top.
    //TC - O(N) and SC - O(1)
    long long countWays(int n)
    {
        
        // if(n==0) 
        // {
        //     return 0;
        // }
        // if(n==1) 
        // {
        //     return 1;
        // }
        // if(n==2) 
        // {
        //     return 2;
        // }
        // if(n==3)
        // {
        //     return 4;
        // }
        
        // vector<long long>dp(n+1);
        // dp[0]=0,dp[1]=1,dp[2]=2,dp[3]=4;
        // for(int i=4;i<=n;i++)
        // {
        //     dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%mod;
        // }
        
        // return dp[n]%mod;
        
        vector<long long>dp(3,-1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<=n;i++)
        {
            dp[i%3] = (dp[(i-1)%3] + dp[(i-2)%3] + dp[(i-3)%3])%mod; 
        }
        return dp[n%3]%mod;
    }
};