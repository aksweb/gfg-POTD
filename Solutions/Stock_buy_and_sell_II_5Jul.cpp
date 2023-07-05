class Solution
{
public:
    int stockBuyAndSell(int n, vector<int> &prices)
    {
        // code here
        int mp = 0;
        for (int i = 1; i < n; i++)
        {
            if (prices[i] > prices[i - 1])
                mp += prices[i] - prices[i - 1];
        }
        return mp;
    }
};