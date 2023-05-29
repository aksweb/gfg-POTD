class Solution
{
public:
    vector<long long> smallerSum(int n, vector<int> &arr)
    {

        vector<int> cpy = arr;
        sort(arr.begin(), arr.end());

        long long sum = 0;
        long long nxtSum = 0;

        vector<long long> ans(n);
        long long sumArr[1000010] = {0};
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1])
            {
                ans[i] = sumArr[arr[i]];
            }
            else
            {
                ans[i] = nxtSum;
                sumArr[arr[i]] = nxtSum;
                sum = nxtSum;
            }
            nxtSum += arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            ans[i] = sumArr[cpy[i]];
        }
        return ans;
    }
};