int columnWithMaxZeros(vector<vector<int>> arr, int n)
{
    int maxi = 0;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == 0)
            {
                cnt++;
            }
        }
        if (cnt > maxi)
        {
            idx = i;
            maxi = cnt;
        }
    }
    if (maxi == 0)
    {
        return -1;
    }
    return idx;
}