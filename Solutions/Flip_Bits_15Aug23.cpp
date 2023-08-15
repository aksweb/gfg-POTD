// HAPPY INDEPENDENCE DAY: JAI HIND! 🇮🇳
class Solution
{
public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here

        int maxProfit = 0;
        int zc = 0; // zero count
        int oc = 0; // ones count
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                zc++;
            else
            {
                oc++;
                zc--;
            }
            if (zc < 0)
                zc = 0;
            maxProfit = max(zc, maxProfit);
        }
        return maxProfit + oc;
    }
};