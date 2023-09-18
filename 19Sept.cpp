class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int c = 0;
        while(n)
        {
            c++;
            if(n%2==1) 
            {
                return c;
            }
            n/=2;
        }
        return 0;
    }
};