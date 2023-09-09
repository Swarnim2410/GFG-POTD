/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
        Node* insert(Node* root, int val) 
        {
            if(root==NULL)
        {
            Node *newnode = new Node(val);
            root = newnode;
            return root;
        }
        Node *temp = root;
        while(root)
        {
            if(val==root->data)
            {
                return temp;
            }
            if(val<root->data)
            {
                if(root->left)
                {
                    root = root->left;
                }
                else
                {
                    Node *newnode = new Node(val);
                    root->left = newnode;
                    break;
                }
            }
            else
            {
                if(root->right)
                {
                    root = root->right;
                }
                else
                {
                    Node *newnode = new Node(val);
                    root->right = newnode;
                    break;
                }
            }
        }
        return temp;
        
            // Your code goes here
    }

};