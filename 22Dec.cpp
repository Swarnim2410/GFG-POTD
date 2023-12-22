class Solution
{
public:
    vector<int> maxMeetings(int n, vector<int> &s, vector<int> &f)
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({f[i], i + 1});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        ans.push_back(v[0].second);
        int x = v[0].first;
        for (int i = 1; i < n; i++)
        {
            if (s[v[i].second - 1] > x)
            {
                ans.push_back(v[i].second);
                x = v[i].first;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};