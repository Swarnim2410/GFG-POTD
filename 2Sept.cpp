struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    int getCount(Node *root, int k)
    {
        queue<Node*>q;
        q.push(root);
        int level = 0;
        int cnt = 0;
        while(q.size())
        {
            if(k<level)
            {
                break;
            }
            level++;
            int a = q.size();
            while(a)
            {
                if(k<level)
                {
                    break;
                }
                Node *front = q.front();
                q.pop();
                if(k>=level && front->left == NULL && front->right == NULL)
                {
                    cnt++;
                    k-=level;
                }
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                a--;
            }
            if(k<level)
            {
                break;
            }
        }
        return cnt;
        //code here
    }
};