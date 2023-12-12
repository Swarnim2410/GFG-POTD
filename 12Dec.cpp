class Solution
{
public:
    // int func(int idx1,int idx2,int m, int n, vector<vector<int>>&dp, vector<vector<int>>& arr)
    // {
    //     if(idx2==0)
    //     {
    //         int maxi = 0;
    //         for(int i=0;i<m;i++)
    //         {
    //             idx1 = i;
    //             int up = -1e8,right = -1e8,down = -1e8;
    //             if(idx2+1<n && idx1-1>=0)
    //             {
    //                 up = arr[idx1][idx2] + func(idx1-1,idx2+1,m,n,dp,arr);
    //             }
    //             if(idx2+1<n)
    //             {
    //                 right = arr[idx1][idx2] + func(idx1,idx2+1,m,n,dp,arr);
    //             }
    //             if(idx2+1<n && idx1+1<m)
    //             {
    //                 down = arr[idx1][idx2] + func(idx1+1,idx2+1,m,n,dp,arr);
    //             }
    //             maxi = max(maxi,max(up,max(down,right)));
    //         }
    //         return maxi;
    //     }
    //     if(idx2==n-1)
    //     {
    //         return arr[idx1][idx2];
    //     }
    //     if(dp[idx1][idx2]!=-1)
    //     {
    //         return dp[idx1][idx2];
    //     }
    //     int maxi=0;
    //     int up = -1e8,right = -1e8,down = -1e8;
    //     if(idx2+1<n && idx1-1>=0)
    //     {
    //         up = arr[idx1][idx2] + func(idx1-1,idx2+1,m,n,dp,arr);
    //     }
    //     if(idx2+1<n)
    //     {
    //         right = arr[idx1][idx2] + func(idx1,idx2+1,m,n,dp,arr);
    //     }
    //     if(idx2+1<n && idx1+1<m)
    //     {
    //         down = arr[idx1][idx2] + func(idx1+1,idx2+1,m,n,dp,arr);
    //     }
    //     maxi = max(maxi,max(up,max(down,right)));
    //     return dp[idx1][idx2] = maxi;
    // }
    int maxGold(int m, int n, vector<vector<int>> arr)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        // return func(0,0,m,n,dp,arr);
        for (int i = 0; i < m; i++)
        {
            dp[i][n - 1] = arr[i][n - 1];
        }
        for (int j = n - 2; j >= 0; j--)
        {
            for (int i = 0; i < m; i++)
            {
                int up = -1e8, right = -1e8, down = -1e8;
                if (i - 1 >= 0)
                {
                    up = arr[i][j] + dp[i - 1][j + 1];
                }
                right = arr[i][j] + dp[i][j + 1];
                if (i + 1 < m)
                {
                    down = arr[i][j] + dp[i + 1][j + 1];
                }
                dp[i][j] = max(up, max(down, right));
            }
        }
        int maxi = 0;
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < m; i++)
        {
            maxi = max(maxi, dp[i][0]);
        }

        return maxi;
    }
};