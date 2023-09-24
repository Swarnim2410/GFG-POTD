  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) 
    {
        vector<int>ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        priority_queue<pair<int,pair<int,int>>> pq;
        map<pair<int,int>,int>mp;
        pq.push({a[n-1]+b[n-1],{n-1,n-1}});
        mp[{n-1,n-1}] = 1;
        while(k--)
        {
            auto it = pq.top();
            pq.pop();
            int sum = it.first;
            int i = it.second.first;
            int j = it.second.second;
            ans.push_back(sum);
            if(mp[{i-1,j}] == 0)
            {
                pq.push({a[i-1]+b[j],{i-1,j}});
                mp[{i-1,j}] = 1;
            }
            if(mp[{i,j-1}] == 0)
            {
                pq.push({a[i]+b[j-1],{i,j-1}});
                mp[{i,j-1}] = 1;
            }
        }
        return ans;
        // code here
    }
