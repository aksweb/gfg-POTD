class Solution
{
private:
    long long modInverse(long long a, long long m)
    {
        long long m0 = m;
        long long y = 0, x = 1;

        if (m == 1)
        {
            return 0;
        }

        while (a > 1)
        {
            long long q = a / m;
            long long t = m;

            m = a % m;
            a = t;
            t = y;

            y = x - q * y;
            x = t;
        }

        if (x < 0)
        {
            x += m0;
        }

        return x;
    }

public:
    int nCr(int n, int r)
    {
        // code here
        if (n < r)
            return 0;
        if (n == r)
            return 1;
        long long mod = 1000000007;
        long long nf = 1, nmr = 1, rf = 1;
        for (int i = 1; i <= n; i++)
        {
            nf = (nf * i) % mod;
        }
        for (int i = 1; i <= r; i++)
        {
            rf = (rf * i) % mod;
        }
        for (int i = 1; i <= n - r; i++)
        {
            nmr = (nmr * i) % mod;
        }
        // cout<< nf<<" "<<rf<<" "<<nmr<<endl;
        long long inverse = modInverse((nmr * rf) % mod, mod);
        long long res = (nf * inverse) % mod;

        return static_cast<int>(res);
    }
};