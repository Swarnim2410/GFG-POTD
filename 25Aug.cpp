
	int isPalindrome(string s)
	{
	    int size = s.length();
	    if(size==0)
	    {
	        return 1;
	    }
	    int i=0;
        int j=size-1;
        while(i<=size/2)
        {
            if(s[i]!=s[j])
            {
                return 0;
            }
            else
            {
                i++;
                j--;
            }
        }
        return 1;
	    // Your code goes here
	}