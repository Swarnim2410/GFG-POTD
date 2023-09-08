/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node *root, vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    void inorder2(Node *root, vector<int> &v, int &i)
    {
        if (root == NULL)
        {
            return;
        }
        inorder2(root->left, v, i);
        root->data = v[i];
        i++;
        inorder2(root->right, v, i);
    }

    Node *binaryTreeToBST(Node *root)
    {
        vector<int> v;
        int i = 0;
        inorder(root, v);
        sort(v.begin(), v.end());
        inorder2(root, v, i);
        return root;
    }
};