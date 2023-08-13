// User function Template for C++
class Solution {
  public:
    int mod = (int)1e9+7;
    int nthFibonacci(int n)
    {
        if(n==1 || n==2)
        {
            return 1;
        }
        long long  prev1 = 1;
        long long prev2 = 1;
        long long curr;
        for(int i=0;i<n-2;i++)
        {
            curr = (prev1 + prev2)%mod;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
        // code here
    }
};