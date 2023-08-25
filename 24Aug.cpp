  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) 
    {
        if(s1=="0"||s2=="0")
        {
            return "0";
        }
        int f=0,g=0;
        if(s1[0]=='-')
        {
            f++;
        }
        if(s2[0]=='-')
        {
            g++;
        }
        int m = s1.length();
        int n = s2.length();
        vector<int>v(m+n,0);
        for(int i=n-1;i>=g;i--)
        {
            for(int j=m-1;j>=f;j--)
            {
                v[i+j+1]+=((s2[i]-'0')*(s1[j]-'0'));
            }
        }
        int carry=0;
        string s = "";
        for(int i=v.size()-1;i>=0;i--)
        {
            int val=v[i]+carry;
            carry=val/10;
            s.push_back((val%10)+'0');
        }
        reverse(s.begin(),s.end());
        while(1)
        {
            if(s[0]=='0')
            {
                s.erase(0,1);
            }
            else
            {
                break;
            }
        }
        if(f+g==1)
        {
            reverse(s.begin(),s.end());
            s.push_back('-');
            reverse(s.begin(),s.end());
        }
        return s;
    }
