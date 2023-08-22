public:

    bool dfs(int i,int j,vector<vector<char>>&grid, string word,int row,int col,int curlen)
    {
        if(curlen == word.size())
        {
            return true;
        }
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || word[curlen]!=grid[i][j])
        {
            return false;
        }
        return dfs(i+row,j+col,grid,word,row,col,curlen+1);
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word)
	{
	    // Code here
	    vector<vector<int>>ans;
	    int m = grid.size();
	    int n = grid[0].size();
	    int nr[8] = {0,-1,-1,-1,0,1,1,1};
	    int nc[8] = {-1,-1,0,1,1,1,0,-1};
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(word[0]==grid[i][j])
	            {
    	            for(int k=0;k<8;k++)
    	            {
    	                bool val =  dfs(i,j,grid,word,nr[k],nc[k],0);
    	                if(val)
    	                {
    	                    ans.push_back({i,j});
    	                    break;
    	                }
    	            }
	            }
	        }
	    }
	    return ans;
	}
};