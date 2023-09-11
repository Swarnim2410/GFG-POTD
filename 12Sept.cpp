public:
    int isPerfectNumber(long long n) 
    {
        long long ans = 0;
        if(n==1)
        {
            return 0;
        }
        for(long long i=1;i<=sqrt(n);i++)
        {
            if(i==1)
            {
                ans += i;
            }
            else
            {
                if(n%i==0)
                {
                    ans += i;
                    ans += (n/i);
                    if(ans>n)
                    {
                        return false;
                    }
                }
            }
        }
        return ans == n;
        // code here
    }