int countOccurence(int arr[], int n, int k)
{
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int cnt = 0;
    for (auto it : mp)
    {
        if (it.second > (n / k))
        {
            cnt++;
        }
    }
    return cnt;
}