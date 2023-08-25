class Solution
{
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        long long n = S.length();
        for (long long i = 0; i < n; i++)
        {
            if (S[i] != S[n - 1 - i])
                return 0;
        }
        return 1;
    }
};