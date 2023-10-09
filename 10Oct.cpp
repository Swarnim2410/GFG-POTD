class Solution
{
private:

public:

    void makeParent(map<Node*,Node*>&mp,Node *root,Node *prev,Node *&x,int target)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->data == target)
        {
            if(x==NULL)
            {
                x = root;
            }
        }
        mp[root]=prev;
        makeParent(mp,root->left,root,x,target);
        makeParent(mp,root->right,root,x,target);
    }

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        map<Node*,Node*>par;
        Node *tar = NULL;
        makeParent(par,root,NULL,tar,target);
        queue<Node *>q;
        q.push(tar);
        vector<int>ans;
        map<Node *,int>vis;
        vis[tar]=1;
        while(q.size())
        {
            //cout << q.front()->data;
            if(k==0)
            {
                while(q.size())
                {
                    ans.push_back(q.front()->data);
                    q.pop();
                }
            }
            if(q.size()==0)
            {
                break;
            }
            int a = q.size();
            while(a--)
            {
                Node *front = q.front();
                q.pop();
                if(front->left && vis[front->left]==0)
                {
                    q.push(front->left);
                    vis[front->left]=1;
                }
                if(front->right && vis[front->right]==0)
                {
                    q.push(front->right);
                    vis[front->right]=1;
                }
                if(par[front] && vis[par[front]]==0)
                {
                    q.push(par[front]);
                    vis[par[front]]=1;
                }
            }
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};