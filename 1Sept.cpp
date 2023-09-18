/* Function to print corner node at each level */

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root)
{
    queue<Node *>q;
    q.push(root);
    //cout << root->data << " ";
    while(q.size())
    {
        int a = q.size();
        if(a==1)
        {
            cout << q.front()->data << " ";
        }
        else
        {
            cout << q.front()->data << " " << q.back()->data << " ";
        }
        while(a)
        {
            Node *front = q.front();
            q.pop();
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
    }
}
//Sepetember begins..
