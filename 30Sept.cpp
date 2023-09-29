class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>>&mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>vis(m*n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    vis[i*n+j] = 1;
                }
            }
        }
        for(int i=0;i<m*n;i++)
        {
            if(vis[i]==1)
            {
                int row = i/n;
                int col = i%n;
                for(int k=0;k<n;k++)
                {
                    mat[row][k]=1;
                }
                for(int j=0;j<m;j++)
                {
                    mat[j][col]=1;
                }
            }
        }
        // code here 
    }
};