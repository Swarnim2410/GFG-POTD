class Solution{
    public: 
    int equilibriumPoint(long long nums[], int n) 
    {
        //int n = nums.size();
        vector<long long>presum(n);
        vector<long long>sufsum(n);
        presum[0] = 0;
        for(long long i=1;i<n;i++)
        {
            presum[i] = presum[i-1] + nums[i-1]; 
        }
        sufsum[n-1] = 0;
        for(long long i=n-2;i>=0;i--)
        {
            sufsum[i] = sufsum[i+1] + nums[i+1];
        }
        for(long long i=0;i<n;i++)
        {
            if(presum[i]==sufsum[i])
            {
                return i+1;
            }
        }    
        return -1;
        // Your code here
    }

};