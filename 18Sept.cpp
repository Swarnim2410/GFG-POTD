class Solution
{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {
        return __builtin_popcountll(n) == 1;
        /*if(n==0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        if(n%2)
        {
            return false;
        }
        return isPowerofTwo(n/2);*/
    }
};