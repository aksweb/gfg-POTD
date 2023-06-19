class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    // with O(1) extra space.
    void arrange(long long arr[], int n)
    {
        // Your code here
        for (int i = 0; i < n; i++)
        {
            long long temp = arr[arr[i]] % n;

            arr[i] = (temp * n) + arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / n;
        }
    }
};