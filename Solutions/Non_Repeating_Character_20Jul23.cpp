class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        // Your code here
        unordered_map<int, int> mp;
        long long n = S.length();
        for (int i = 0; i < n; i++)
        {
            mp[S[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[S[i]] == 1)
                return S[i];
        }

        return '$';
    }
};