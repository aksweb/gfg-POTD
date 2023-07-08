class Solution
{
public:
    // Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        // sort the array and appply 2 pointer approach calculating zero sum
        sort(arr, arr + n);
        for (int i = 0; i < n - 2; i++)
        {
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (arr[i] + arr[l] + arr[r] == 0)
                    return 1;
                else if ((arr[i] + arr[l] + arr[r]) > 0)
                {
                    r--;
                }
                else
                    l++;
            }
        }
        return 0;
    }
};