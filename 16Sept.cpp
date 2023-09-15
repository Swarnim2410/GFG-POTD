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
        
        long long prev3 = 1;
        long long prev2 = 1;
        long long prev1 = 2;
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        for(int i=3;i<=n;i++)
        {
            int curr = (prev1 + prev2 + prev3)%mod; 
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1%mod;
    }
};