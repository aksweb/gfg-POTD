class Solution
{
public:
    struct Node *modifyTheList(struct Node *head)
    {
        struct Node *curr = head;
        struct Node *cur = head;
        struct Node *cnt = head;

        int count = 0;
        while (cnt != NULL)
        {
            // a[p]=curr->data;
            count++;
            // p++;
            cnt = cnt->next;
        }
        int a[count];

        for (int i = 0; i < count; i++)
        {
            a[i] = cur->data;
            cur = cur->next;
        }

        // changing first half
        int mid = count / 2;
        int p = 0;
        while (p != mid)
        {
            curr->data = a[count - p - 1] - a[p];
            curr = curr->next;
            p++;
        }

        // changing second half
        if (count % 2 != 0)
        {
            curr = curr->next;
            p = 0;
            for (int i = mid + 1; i < count; i++)
            {
                curr->data = a[mid - 1 - p];
                curr = curr->next;
                p++;
            }
        }
        else
        {
            p = 0;
            for (int i = mid; i < count; i++)
            {
                curr->data = a[mid - 1 - p];
                curr = curr->next;
                p++;
            }
        }
        return head;
    }
};