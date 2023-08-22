
class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int maxi=0;
        int tsum=0;
        for(int i=0;i<n;i++)
        {
            int row=0;
            int col=0;
            for(int j=0;j<n;j++)
            {
                row+=matrix[i][j];
                col+=matrix[j][i];
            }
            tsum+=row;
            maxi = max(maxi,max(row,col));
        }
        return n*maxi - tsum;
    } 
};