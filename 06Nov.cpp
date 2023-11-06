vector<int> matrixSum(int m, int n, vector<vector<int>> mat, int q, vector<int> que[])
{
    vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        int p = 0;
        vector<int> x = que[i];
        int a = x[1];
        int b = x[2];
        vector<int> temp1 = {0, 1, 1, 1, 0, -1, -1, -1};
        vector<int> temp2 = {1, 1, 0, -1, -1, -1, 0, 1};
        vector<int> temp3 = {0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1};
        vector<int> temp4 = {2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1, 0, 1, 2, 2};
        if (x[0] == 1)
        {
            for (int j = 0; j < 8; j++)
            {
                int x1 = a + temp1[j];
                int y1 = b + temp2[j];
                if (x1 >= 0 && y1 >= 0 && x1 < m && y1 < n)
                {
                    // cout << p << endl;
                    p += mat[x1][y1];
                }
            }
            ans.push_back(p);
        }
        else
        {
            for (int j = 0; j < 16; j++)
            {
                int x1 = a + temp3[j];
                int y1 = b + temp4[j];
                if (x1 >= 0 && y1 >= 0 && x1 < m && y1 < n)
                {
                    p += mat[x1][y1];
                }
            }
            ans.push_back(p);
        }
    }
    return ans;
}