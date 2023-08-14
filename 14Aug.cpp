vector<int> singleNumber(vector<int> nums)
{
    int n = nums.size();
    int xr = nums[0];
    for (int i = 1; i < n; i++)
    {
        xr = xr ^ nums[i];
    }
    int right_bit = xr & ~(xr - 1);
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] & right_bit)
        {
            x = x ^ nums[i];
        }
        else
        {
            y = y ^ nums[i];
        }
    }
    vector<int> ans;
    ans.push_back(min(x, y));
    ans.push_back(max(x, y));
    return ans;
}