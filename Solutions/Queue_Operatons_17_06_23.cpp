class Solution
{
public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k)
    {
        // Your code here
        q.push(k);
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k)
    {
        // Your code here
        int n = q.size();
        int count = 0;
        queue<int> tempQueue = q; // Creating a temporary queue to preserve the original queue
        while (!tempQueue.empty())
        {
            if (tempQueue.front() == k)
            {
                count++;
            }
            tempQueue.pop();
        }

        return count;
    }
};