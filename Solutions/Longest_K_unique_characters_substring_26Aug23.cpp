class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int l = 0, r = 0;
        int maxi = 0;
        int n = s.size();
        if (k > s.size())
            return -1;
        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;

            while (mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }

            int temp = i - l + 1;
            maxi = max(maxi, temp);
        }

        return maxi;
    }
};