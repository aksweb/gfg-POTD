class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {
        // Code here
        if (head == NULL || head->data >= data)
        {
            Node *temp = new Node(data);
            temp->next = head;
            return temp;
        }
        Node *curr = head;
        Node *prev = NULL;
        // finding the correct position of the new value to be inseerted
        while (curr && curr->data < data)
        {
            prev = curr;
            curr = curr->next;
        }

        Node *temp = new Node(data);
        prev->next = temp;
        temp->next = curr;

        return head;
    }
};
