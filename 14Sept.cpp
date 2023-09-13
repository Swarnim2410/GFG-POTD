
public:
int mod = 1e9+7;
int helper(int n,int arr[],int sum,vector<vector<int>>& dp)
{
    if(n==-1)
    {
        if(sum==0)
        {
            return 1;
        }
        return 0;
    }
    
    if(dp[n][sum]!=-1) 
    {
        return dp[n][sum];
    }
    
    if(arr[n]<=sum) 
    {
        return dp[n][sum] = (helper(n-1,arr,sum-arr[n],dp)%mod + helper(n-1,arr,sum,dp)%mod)%mod;
    }
    else 
    {
        return dp[n][sum] = helper(n-1,arr,sum,dp)%mod;
    }
    
}
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return helper(n-1,arr,sum,dp);
	}
	  