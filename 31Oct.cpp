class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        int x = 0;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                x++;
            }
            else
            {
                arr[idx] = arr[i];
                idx++;
            }
        }
        for (int i = idx; i < n; i++)
        {
            arr[i] = 0;
        }
        // code here
    }
};