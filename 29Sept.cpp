class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &board) 
    {
        queue<pair<int,int>>q;
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            if(vis[i][0]==0 && board[i][0]==1)
            {
                vis[i][0] = 1;
                q.push({i,0});
            }
        }
        for(int j=0;j<n;j++)
        {
            if(vis[0][j]==0 && board[0][j]==1)
            {
                vis[0][j] = 1;
                q.push({0,j});
            }
        }
        for(int i=0;i<m;i++)
        {
            if(vis[i][n-1]==0 && board[i][n-1]==1)
            {
                vis[i][n-1] = 1;
                q.push({i,n-1});
            }
        }
        for(int j=0;j<n;j++)
        {
            if(vis[m-1][j]==0 && board[m-1][j]==1)
            {
                vis[m-1][j] = 1;
                q.push({m-1,j});
            }
        }
        while(q.size())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int row = -1;row<=1;row++)
            {
                for(int col=-1;col<=1;col++)
                {
                    if(abs(row)+abs(col)==2)
                    {
                        continue;
                    }
                    int i = x + row;
                    int j = y + col;
                    if(i>=0 && j>=0 && i<m && j<n)
                    {
                        if(vis[i][j]==0 && board[i][j]==1)
                        {
                            vis[i][j] = 1;
                            q.push({i,j});
                        }
                    }
                }
            }
        } 
        int cnt = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 && board[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        return cnt;

        // Code here
    }
};