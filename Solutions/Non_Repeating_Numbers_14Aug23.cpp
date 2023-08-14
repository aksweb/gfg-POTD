class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        int n = nums.size();
        int sum = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res ^= nums[i];
        }
        int num1 = 0, num2 = 0;
        int rmb = res & (-res);
        for (int i = 0; i < n; i++)
        {
            if ((rmb & nums[i]) != 0)
            {
                num1 ^= nums[i];
            }
            else
                num2 ^= nums[i];
        }
        vector<int> ans;
        if (num1 > num2)
            swap(num1, num2);
        ans.push_back(num1);
        ans.push_back(num2);
        return ans;
    }
};