int minValue(string s, int k)
{
    priority_queue<int> pq;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        pq.push(it.second);
    }
    int ans = 0;
    while (k--)
    {
        int a = pq.top();
        pq.pop();
        a--;
        pq.push(a);
    }
    while (pq.size())
    {
        int a = pq.top();
        ans += (a * a);
        pq.pop();
    }
    return ans;
}