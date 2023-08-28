/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct Node *temp = head->next;
    struct Node *pre = head;
    while (temp)
    {
        if (pre->data == temp->data)
        {
            struct Node *temp2 = pre;
            temp2->next = temp->next;
            temp = temp->next;
        }
        else
        {
            pre = temp;
            temp = temp->next;
        }
    }
    return head;
}