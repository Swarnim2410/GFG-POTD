class Solution{
public:

        bool isSubsetSum(int arr[],int sum,int n)
    {
        //int n = arr.size();
        vector<bool>prev(sum+1,0);
        vector<bool>curr(sum+1,0);
        //first base case..
        prev[0] = curr[0] = 1;
        //second base case...
        if(arr[0]<=sum)
        {
            prev[arr[0]] = 1;
        }
        for(int idx = 1;idx<n;idx++)
        {
            for(int target = 1;target<=sum;target++)
            {
                bool notpick = prev[target];
                bool pick = false;
                if(target>=arr[idx])
                {
                    pick = prev[target-arr[idx]];
                }
                curr[target] = (pick || notpick);
            }
            prev = curr;
        }
        return prev[sum];
    }
    int equalPartition(int n, int nums[])
    {
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }   
        if(sum%2)
        {
            return false;
        }
        return isSubsetSum(nums,sum/2,n);
        // code here
    }
};