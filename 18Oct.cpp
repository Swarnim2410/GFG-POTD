
class Solution
{
public:
    bool dfs(int curr, vector<int> &vis, vector<int> graph[], vector<int> &valid)
    {

        vis[curr] = 1;
        for (auto it : graph[curr])
        {
            if (vis[it] == 0)
            {
                bool res = dfs(it, vis, graph, valid);
                if (res == 0)
                {
                    return false;
                }
            }
            else if (valid[it] == 1)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        valid[curr] = 1;
        return true;
    }
    vector<int> eventualSafeNodes(int n, vector<int> graph[])
    {

        vector<int> vis(n, 0);
        vector<int> ans;
        vector<int> valid(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, vis, graph, valid);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (valid[i])
            {
                ans.push_back(i);
            }
        }
        return ans; // code here
    }
};