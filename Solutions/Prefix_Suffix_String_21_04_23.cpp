class Solution
{
public:
    int prefixSuffixString(vector<string> &s1, vector<string> s2)
    {
        unordered_map<string, bool> avail;
        for (auto x : s1)
        {
            // storing prefixes
            string str = "";
            for (int i = 0; i < x.length(); i++)
            {
                str += x[i];
                avail[str] = true;
            }
            str = "";

            // storing suffixes
            for (int i = x.length() - 1; i >= 0; i--)
            {

                str = x[i] + str;
                avail[str] = true;
            }
        }

        int count = 0;
        for (auto x : s2)
        {
            if (avail[x])
            {
                count++;
            }
        }
        return count;
    }
};