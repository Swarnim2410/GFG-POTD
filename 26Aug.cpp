#include<bits/stdc++.h>
using namespace std;
int main()
{

}
class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        map<char,int>m;
        int i=0;
        int j=0;
        int maxi  = INT_MIN;
        int n = s.length();
        while(j<n)
        {
            m[s[j]]++;
            if(m.size()<k)
            {
                j++;
            }
            else if(m.size()==k)
            {
                maxi = max(maxi,j-i+1);
                j++;
            }
            else
            {
                while(m.size()>k)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
                if(m.size()==k)
                {
                    maxi = max(maxi,j-i+1);
                }
                j++;
            }
        }
        if(maxi==INT_MIN)
        {
            return -1;
        }
        return maxi;
    }
};