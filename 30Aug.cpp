/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    int count=0;
        struct Node* temp = head;
        struct Node* pre = NULL;
        struct Node* pre2 = head;
        struct Node* temp2 = head;
        int c=0;
        while(temp2)
        {
            c++;
            temp2 = temp2 -> next;
        }
        if(x==1)
        {
            head = head -> next;

        }
        else if(x==c)
        {
            int d = x-2;
            while(d)
            {
                pre2 = pre2 -> next;
                d--;
            }
            pre2 -> next = NULL;
            
        }
        else
        {
            while(x-1)
            {
                pre = temp;
                temp = temp -> next;
                x--;
            }
            pre -> next = temp -> next;
            


        }
        return head;
}
