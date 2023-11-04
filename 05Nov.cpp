vector<int> topK(vector<int> &nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    vector<pair<int, int>> v;
    for (auto it : mp)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        ans.push_back(v[i].second);
    }
    reverse(ans.begin(), ans.end());
    vector<int> x;
    int i = 0;
    while (k--)
    {
        x.push_back(ans[i]);
        i++;
    }
    return x;
}