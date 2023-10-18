class Solution
{
public:
    // Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int x)
    {
        // code here
        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<int> vis(V, 0);
        vis[0] = 0;
        while (q.size())
        {
            int node = q.front().first;
            int level = q.front().second;
            q.pop();
            for (auto it : adj[node])
            {
                if (it == x)
                {
                    return level + 1;
                }
                if (vis[it] == 0)
                {
                    vis[it] = 1;
                    q.push({it, level + 1});
                }
            }
        }
        return -1;
    }
};