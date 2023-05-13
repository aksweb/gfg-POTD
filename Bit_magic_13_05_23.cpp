class Solution
{
public:
    int bitMagic(int n, vector<int> &arr)
    {
        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - 1 - i])
                ans++;
        }
        if (ans % 2 == 0)
            return ans / 2;
        else
            return (ans / 2) + 1;
    }
};