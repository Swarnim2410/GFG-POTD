    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i=0;
        int j=0;
        long long sum = 0;
        while(j<n)
        {
            sum+=arr[j];
            if(sum==s)
            {
                vector<int>ans;
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(sum<s)
            {
                j++;
            }
            else
            {
                while(i<j && sum>s)
                {
                    sum-=arr[i];
                    i++;
                    if(sum==s)
                    {
                        vector<int>ans;
                        ans.push_back(i+1);
                        ans.push_back(j+1);
                        return ans;
                    }
                }
                j++;
            }
        }
        return {-1};
    }