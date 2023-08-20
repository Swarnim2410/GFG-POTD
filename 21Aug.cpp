class Solution {
public:
    int Count(vector<vector<int>>&matrix) 
    {
        int m = matrix.size();
        int c=0;
        int n = matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int cnt = 0;
                if(matrix[i][j]==0)
                {
                    continue;
                }
                for(int row=-1;row<=1;row++)
                {
                    for(int col=-1;col<=1;col++)
                    {
                        int nrow = i+row;
                        int ncol = j+col;
                        if(nrow>=0 && ncol>=0 && nrow<m && ncol<n)
                        {
                            if(matrix[nrow][ncol]==0)
                            {
                                cnt++;
                            }
                        }
                    }
                }
                if(cnt > 0 && cnt%2==0)
                {
                    c++;
                }
            }
        }
        return c;
        // Code here
    }
};