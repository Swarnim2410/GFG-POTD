class Solution{

public:
    int floor(Node* root, int x) 
    {
        Node *pre;
        int maxi = -1;
        Node *curr = root;
        while(curr)
        {
            int count = 0;
            pre = NULL;
            if(curr->left==NULL)
            {
                int val = curr->data;
                if(curr->data==x)
                {
                    return x;
                }
                if(curr->data<x)
                {
                    maxi = max(maxi,curr->data);
                }
                curr = curr ->right;
            }
            else
            {
                pre = curr->left;
                while(pre->right && pre->right!=curr)
                {
                    pre = pre->right;
                }
                if(pre->right==NULL)
                {
                    pre ->right = curr;
                    curr=curr->left;
                }
                else
                {
                    pre->right=NULL;
                    int val = curr->data;
                    if(curr->data==x)
                    {
                        return x;
                    }
                    if(curr->data<x)
                    {
                        maxi = max(maxi,curr->data);
                    }
                    curr=curr->right;
                }
            }
            
        }
        return maxi;
    }
};
