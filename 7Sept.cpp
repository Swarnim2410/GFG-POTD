class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) 
    {
        int n = arr.size();
        vector<int>dist(100000,1e9);
        queue<pair<int,int>>q;
        q.push({0,start});
        dist[start] = 0;
        while(q.size())
        {
            int dis = q.front().first;
            int node = q.front().second;
            if(node == end)
            {
                return dis;
            }
            q.pop();
            for(int i=0;i<n;i++)
            {
                int val = (node * arr[i])%100000;
                if(1 + dis < dist[val])
                {
                    dist[val] = 1 + dis;
                    if(val==end)
                    {
                        return dist[val];
                    }
                    q.push({dist[val],val});
                }
            }
        }
        return -1;
        // code here
    }
};