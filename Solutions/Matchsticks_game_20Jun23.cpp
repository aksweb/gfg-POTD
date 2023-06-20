class Solution
{
public:
    int matchGame(long long N)
    {
        // code here
        if (N <= 4)
        {
            return N;
        }
        if (N % 5 == 0)
        {
            return -1;
        }
        else
            return N % 5;
    }
};