int transitionPoint(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == 0)
        {
            start++;
        }
        else
        {
            ans = mid;
            end--;
        }
    }
    return ans;
    // code here
}