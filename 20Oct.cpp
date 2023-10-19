class Solution
{
public:
    int isPossible(int n, int arr[])
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s = to_string(arr[i]);
            for (auto it : s)
            {
                ans += (it - '0');
            }
        }
        return ans % 3 == 0;
        // code here
    }
};