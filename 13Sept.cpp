
class Solution{
public:
    string findLargest(int n, int sum)
    {
        if(sum==0 && n==1)
        {
            return "0";
        }
        if(n*9<sum || sum==0)
        {
            return "-1";
        }
        string s = "";
        int i=0;
        while(i<n)
        {
            int f=0;
            int val=0;
            if(sum>=9)
            {
                val=9;
                sum-=9;
                f=1;
            }
            else
            {
                val=sum; 
            }
            char ch = val + '0';
            s.push_back(ch);
            i++;
            if(f==0)
            {
                break;
            }
        }
        while(i<n)
        {
            s.push_back('0');
            i++;
        }
        return s;
        // code here
    }
};