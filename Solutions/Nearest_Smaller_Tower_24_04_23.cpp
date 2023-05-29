class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n = arr.size();
        stack<int> left_stack, right_stack;
        int left[n], right[n];
        vector<int> answer(n);

        // Find the index of the nearest tower with a smaller height to the left of the current tower
        for (int i = 0; i < n; i++)
        {
            while (left_stack.size() && arr[left_stack.top()] >= arr[i])
            {
                left_stack.pop();
            }
            if (left_stack.size())
            {
                left[i] = left_stack.top();
            }
            else
            {
                left[i] = -1;
            }
            left_stack.push(i);
        }

        // Find the index of the nearest tower with a smaller height to the right of the current tower
        for (int i = n - 1; i >= 0; i--)
        {
            while (right_stack.size() && arr[right_stack.top()] >= arr[i])
            {
                right_stack.pop();
            }
            if (right_stack.size())
            {
                right[i] = right_stack.top();
            }
            else
            {
                right[i] = -1;
            }
            right_stack.push(i);
        }

        // Find the nearest tower with a smaller height and update the answer vector
        for (int i = 0; i < n; i++)
        {
            if (left[i] == right[i])
            {
                answer[i] = -1;
            }
            else if (left[i] == -1)
            {
                answer[i] = right[i];
            }
            else if (right[i] == -1)
            {
                answer[i] = left[i];
            }
            else if (i - left[i] < right[i] - i)
            {
                answer[i] = left[i];
            }
            else if (i - left[i] > right[i] - i)
            {
                answer[i] = right[i];
            }
            else if (arr[right[i]] < arr[left[i]])
            {
                answer[i] = right[i];
            }
            else
            {
                answer[i] = left[i];
            }
        }
        return answer;
    }
};