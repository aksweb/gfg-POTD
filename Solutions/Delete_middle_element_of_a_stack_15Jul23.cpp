class Solution
{
public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        // code here..
        if (sizeOfStack <= 1)
            return;
        int arr[(sizeOfStack / 2)] = {0};
        for (int i = 0; i < (sizeOfStack / 2); i++)
        {
            int t = s.top();
            arr[i] = t;
            s.pop();
        }
        s.pop();
        for (int i = (sizeOfStack / 2) - 1; i >= 0; i--)
        {
            s.push(arr[i]);
        }
    }
};