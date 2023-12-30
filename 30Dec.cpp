// Function to return the name of candidate that received maximum votes.
vector<string> winner(string arr[], int n)
{
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int x = 0;
    string s = "";
    for (auto it : mp)
    {
        if (it.second > x)
        {
            s = it.first;
            x = it.second;
        }
        else if (it.second == x)
        {
            s = min(s, it.first);
        }
    }
    vector<string> ans;
    ans.push_back(s);
    ans.push_back(to_string(x));
    return ans;
    // Your code here
    // Return the string containing the name and an integer
    // representing the number of votes the winning candidate got
}