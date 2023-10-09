/*
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
    //Function to find the height of a binary tree.
    int height(struct Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int a = height(root->left);
        int b = height(root->right);
        int c = max(a,b) + 1;
        return c;
        // code here 
    }
};