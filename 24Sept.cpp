  public:
    vector<int> duplicates(int nums[], int n) 
    {
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int x = nums[i]%n;
            nums[x]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=2*n)
            {
                ans.push_back(i);
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
        }
        return ans;
    }
