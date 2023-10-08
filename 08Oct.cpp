class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) 
    {
        Node *temp = new Node(data);
        if(data<=head->data)
        {
            temp->next=head;
            return temp;
        }
        Node *ptr = head;
        Node *prev = NULL;
        while(ptr)
        {
            if(ptr->data>data)
            {
                Node *x = prev->next;
                prev->next=temp;
                temp->next=x;
                break;
            }
            prev=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            prev->next=temp;
        }
        return head;
        // Code here
    }
};