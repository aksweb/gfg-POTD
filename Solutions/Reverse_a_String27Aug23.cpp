class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        long long int n = str.length();
        for (long long i = 0; i < n / 2; i++)
        {
            swap(str[i], str[n - i - 1]);
        }
        return str;
    }
};