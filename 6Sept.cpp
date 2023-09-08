class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    
    void dfs(int idx,vector<int>&vis,stack<int>&st,vector<int>adj[])
    {
        vis[idx]=1;
        for(auto it : adj[idx])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,st,adj);
            }
        }
        st.push(idx);
    }
	int findMotherVertex(int v, vector<int>adj[])
	{
	    stack<int>st;
	    vector<int>vis(v,0);
	    for(int i=0;i<v;i++)
	    {
	        if(vis[i]==0)
	        {
	            dfs(i,vis,st,adj);
	        }
	    }
	    int node = st.top();
	    vector<int>vis2(v,0);
	    dfs(node,vis2,st,adj);
	    for(int i=0;i<v;i++)
	    {
	        if(vis2[i]==0)
	        {
	            return -1;
	        }
	    }
	    return node;
	}

};