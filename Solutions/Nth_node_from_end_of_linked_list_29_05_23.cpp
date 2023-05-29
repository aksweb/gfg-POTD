int getNthFromLast(Node *head, int n)
{
    // Your code here
    struct Node *curr = head;
    struct Node *temp = head;

    int count = 0;

    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    if (n > count)
        return -1;
    for (int i = 0; i < count - n; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}