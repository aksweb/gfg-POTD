class Solution
{
public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        int n = q.size();
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[i] = q.front();
            q.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            q.push(arr[i]);
        }
        return q;
    }
};