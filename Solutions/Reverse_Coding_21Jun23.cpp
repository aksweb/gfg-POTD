class Solution
{
public:
    int sumOfNaturals(int n)
    {
        // code here
        const int mod = pow(10, 9) + 7;

        long long sum = (static_cast<long long>(n) * (n + 1)) / 2;
        sum %= mod;

        return static_cast<int>(sum);
    }
};