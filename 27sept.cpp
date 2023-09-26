class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) 
    {
        int i=0;
        int j=m-1;
        int mini = 1e8;
        int a = -1;
        int b = -1;
        while(i<n && j>=0)
        {
            if(arr[i]+brr[j]==x)
            {
                vector<int>v;
                v.push_back(arr[i]);
                v.push_back(brr[j]);
                return v;
            }
            else if(arr[i]+brr[j]<x)
            {
                mini = min(mini,x-arr[i]-brr[j]);
                if(mini == x - arr[i] - brr[j])
                {
                    a=arr[i];
                    b=brr[j];
                }
                i++;
            }
            else
            {
                mini = min(mini,arr[i]+brr[j]-x);
                if(mini == arr[i]+brr[j]-x)
                {
                    a=arr[i];
                    b=brr[j];
                }
                j--;
            }
            
        }
        //cout << mini << endl;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        return v;
        //code here
    }
};