class Solution
{
public:
    int minDist(int arr[], int n, int x, int y)
    {
        int f1 = 0, f2 = 0;
        int idx1 = -1, idx2 = -1;
        int mini = 1e9;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                f1 = 1;
                idx1 = i;
            }
            else if (arr[i] == y)
            {
                f2 = 2;
                idx2 = i;
            }
            if (f1 == 1 && f2 == 2)
            {
                mini = min(mini, abs(idx2 - idx1));
            }
        }
        if (mini == 1e9)
            return -1;
        return mini;
        // code here
    }
};