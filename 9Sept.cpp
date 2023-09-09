struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    
    void inorder(Node *root,vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int kthLargest(Node *root, int k)
    {
        vector<int>v;
        inorder(root,v);
        int n = v.size();
        return v[n-k];
        //Your code here
    }
};