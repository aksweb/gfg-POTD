class Solution
{

public:
    struct Node *makeUnion(struct Node *head1, struct Node *head2)
    {
        // code here
        // joining the linked list
        struct Node *curr = head1;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = head2;

        std::set<int> ms;
        struct Node *temp = head1;
        while (temp)
        {
            ms.insert(temp->data);
            temp = temp->next;
        }

        struct Node *finalHead = new Node(0);
        struct Node *tf = finalHead;

        for (const auto &element : ms)
        {
            tf->data = element;

            struct Node *nfinal = new Node(0);
            nfinal->next = NULL;
            tf->next = nfinal;
            tf = nfinal;
        }
        struct Node *fnode = finalHead;
        while (fnode->next->next)
        {
            fnode = fnode->next;
        }
        fnode->next = NULL;
        // delete(fnode);

        return finalHead;
    }
};