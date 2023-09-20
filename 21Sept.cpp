
public:
    // Function to find the maximum money the thief can get.
    int FindMaxSum(int nums[], int n)
    {
        // nt n = nums.size();
        int prev2 = 0;
        int prev = nums[0];
        for (int i = 1; i < n; i++)
        {
            int pick = nums[i] + prev2;
            int notpick = prev;
            int curr = max(pick, notpick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
        // Your code here
    }
