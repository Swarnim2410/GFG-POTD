class DisjointSet
{

public:
    vector<int> rank, parent, size;
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution
{
public:
    int largestIsland(vector<vector<int>> &grid)
    {
        int onecount = 0;
        int n = grid.size();
        int ans = 0;
        DisjointSet ds(n * n);
        // connecting all islands (i.e. 1s with unionBySize as it will give the sizes also)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    continue;
                }
                else
                {
                    onecount++;
                }
                int dr[] = {-1, 0, 1, 0};
                int dc[] = {0, -1, 0, 1};
                for (int x = 0; x < 4; x++)
                {
                    int nrow = i + dr[x];
                    int ncol = j + dc[x];
                    if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < n)
                    {
                        if (grid[nrow][ncol] == 1)
                        {
                            int currnode = i * n + j;
                            int adjnode = nrow * n + ncol;
                            ds.unionBySize(currnode, adjnode);
                        }
                    }
                }
            }
        }
        if (onecount == n * n)
        {
            return n * n;
        }
        // for each 0, check four direction -> find its uPar -> insert in set
        // so that it is not repeated -> find max then..
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    continue;
                }
                int dr[] = {-1, 0, 1, 0};
                int dc[] = {0, -1, 0, 1};
                unordered_set<int> s;
                for (int x = 0; x < 4; x++)
                {
                    int nrow = i + dr[x];
                    int ncol = j + dc[x];
                    if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < n)
                    {
                        if (grid[nrow][ncol] == 1)
                        {
                            int adjnode = nrow * n + ncol;
                            s.insert(ds.findUPar(adjnode));
                        }
                    }
                }
                int size = 1;
                for (auto it : s)
                {
                    size += ds.size[it];
                }
                ans = max(ans, size);
            }
        }
        return ans;
        // Your code goes here.
    }
};