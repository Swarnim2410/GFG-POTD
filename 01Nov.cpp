void frequencyCount(vector<int> &arr, int n, int p)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i] % p;
        if (x == 0)
        {
            x = p;
        }
        if (x - 1 < n)
        {
            arr[x - 1] += p;
        }
    }
    for (int i = 0; i < n; i++)
    {
        double x = p;
        double y = arr[i];
        double ans = ceil(y / x) - 1;
        arr[i] = (int)ans;
    }
}