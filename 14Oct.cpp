class Solution
{
public:
    // Function to find the nodes that are common in both BST.

    // MORRIS INORDER TRAVERSAL -->
    vector<int> inorderTraversal(Node *root)
    {
        vector<int> v;
        Node *pre;
        if (root == NULL)
        {
            return v;
        }
        Node *curr = root;
        while (curr)
        {
            int count = 0;
            pre = NULL;
            if (curr->left == NULL)
            {
                v.push_back(curr->data);
                curr = curr->right;
            }
            else
            {
                pre = curr->left;
                while (pre->right && pre->right != curr)
                {
                    pre = pre->right;
                }
                if (pre->right == NULL)
                {
                    pre->right = curr;
                    curr = curr->left;
                }
                else
                {
                    pre->right = NULL;
                    v.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return v;
    }
    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> x = inorderTraversal(root1);
        vector<int> y = inorderTraversal(root2);
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < x.size() && j < y.size())
        {
            if (x[i] == y[j])
            {
                ans.push_back(x[i]);
                i++;
                j++;
            }
            else if (x[i] > y[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};