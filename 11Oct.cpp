struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int func(Node *root,bool &flag)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = func(root->left,flag);
        int right = func(root->right,flag);
        if(abs(left-right)>1)
        {
            flag=false;
        }
        return max(left,right)+1;
    }
    bool isBalanced(Node *root)
    {
        bool flag = true;
        func(root,flag);
        return flag;
    }
};