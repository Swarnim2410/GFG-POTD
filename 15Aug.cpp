class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int maxi=0;
        int ptr1 = 0;
        int ptr2 = n-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                ptr1++;
            }
            else
            {
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                ptr2--;
            }
            else
            {
                break;
            }
        }
        if(ptr1==ptr2 || ptr1==n)
        {
            return n;
        }
        int cnt1 = 0;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                cnt++;
            }
        }
        while(ptr1<=ptr2)
        {
            if(a[ptr1]==0)
            {
                cnt1++;
            }
            else
            {
                cnt1--;
            }
            maxi = max(maxi,cnt1);
            if(cnt1<=0)
            {
                cnt1=0;
            }
            ptr1++;
        }
        int newcount = maxi + cnt;
        return newcount;
    }
};