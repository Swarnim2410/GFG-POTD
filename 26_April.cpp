class Solution{
    public :
        vector<int>
            FindExitPoint(int m, int n, vector<vector<int>> &mat){
                int x = 0;
int i = 0;
int j = 0;
int prex = 0;
int prey = 0;
while (i >= 0 && j >= 0 && i < m && j < n)
{
    prex = i;
    prey = j;
    if (mat[i][j] == 0)
    {
        if (x == 0)
        {
            j++;
        }
        else if (x == 1)
        {
            i++;
        }
        else if (x == 2)
        {
            j--;
        }
        else
        {
            i--;
        }
    }
    else
    {
        mat[i][j] = 0;
        if (x == 0)
        {
            i++;
            x = 1;
        }
        else if (x == 1)
        {
            j--;
            x = 2;
        }
        else if (x == 2)
        {
            i--;
            x = 3;
        }
        else
        {
            j++;
            x = 0;
        }
    }
}
return {prex, prey};
}
}
;