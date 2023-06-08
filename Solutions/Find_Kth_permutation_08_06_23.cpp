class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        vector<int> nums;
        for (int i = 1; i <= n; ++i)
        {
            nums.push_back(i);
        }

        // Find the kth permutation
        for (int i = 1; i < k; ++i)
        {
            next_permutation(nums.begin(), nums.end());
        }

        // Convert the permutation to a string
        string per;
        for (int num : nums)
        {
            per += to_string(num);
        }

        return per;
    }
};