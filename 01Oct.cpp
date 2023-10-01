class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > mat, int m, int n) 
    {
        vector<int>ans;
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(mat[0][i]);
                
            }
            return ans;
        }
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                ans.push_back(mat[i][0]);
            }
            return ans;
        }
        for(int j=0;j<n;j++)
        {
            ans.push_back(mat[0][j]);
        }
        ans.pop_back();
        for(int i=0;i<m;i++)
        {
            ans.push_back(mat[i][n-1]);
        }
        ans.pop_back();
        for(int j=n-1;j>=0;j--)
        {
            ans.push_back(mat[m-1][j]);
        }
        ans.pop_back();
        for(int i=m-1;i>=0;i--)
        {
            ans.push_back(mat[i][0]);
        }
        ans.pop_back();
        return ans;
    }
};