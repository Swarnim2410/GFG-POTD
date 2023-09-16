

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long prev2 = 1;
        long long prev1 = 1;
        vector<long long>ans;
        if(n==1)
        {
            ans.push_back(1);
            return ans;
        }
        if(n==2)
        {
            ans.push_back(1);
            ans.push_back(1);
            return ans;   
        }
        ans.push_back(1);
        ans.push_back(1);
        for(int i=2;i<n;i++)
        {
            long long curr = prev2 + prev1;
            ans.push_back(curr);
            prev2 = prev1;
            prev1 = curr;
        }
        return ans;
    }
};