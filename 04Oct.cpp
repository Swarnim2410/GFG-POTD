class Solution {
  public:
    int romanToDecimal(string &s) 
    {
        int i=0;
        int n = s.length();
        int ans = 0;
        while(i<n)
        {
            if(s[i]=='V' || s[i]=='L' || s[i]=='D' || s[i]=='M')
            {
                if(s[i]=='V')
                {
                    ans+=5;
                }
                else if(s[i]=='L')
                {
                    ans+=50;
                }
                else if(s[i]=='D')
                {
                    ans+=500;
                }
                else
                {
                    ans+=1000;
                }
                i++;
            }
            if(s[i]=='I')
            {
                if(i+1<n && s[i+1]=='V')
                {
                    ans+=4;
                    i=i+2;
                }
                else if(i+1<n && s[i+1]=='X')
                {
                    ans+=9;
                    i=i+2;
                }
                else
                {
                    ans+=1;
                    i++;
                }
            }
            if(s[i]=='X')
            {
                if(i+1<n && s[i+1]=='L')
                {
                    ans+=40;
                    i=i+2;
                }
                else if(i+1<n && s[i+1]=='C')
                {
                    ans+=90;
                    i=i+2;
                }
                else
                {
                    ans+=10;
                    i++;
                }
            }
            if(s[i]=='C')
            {
                if(i+1<n && s[i+1]=='D')
                {
                    ans+=400;
                    i=i+2;
                }
                else if(i+1<n && s[i+1]=='M')
                {
                    ans+=900;
                    i=i+2;
                }
                else
                {
                    ans+=100;
                    i++;
                }
            }
        } 
        return ans;
        // code here
    }
};