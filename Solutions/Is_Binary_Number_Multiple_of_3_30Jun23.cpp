class Solution
{
public:
    int isDivisible(string s)
    {
        // complete the function here
        int n = s.length();
        int ec = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] == '1')
                ec++;
            else if (i % 2 != 0 && s[i] == '1')
                oc++;
        }
        if (abs(oc - ec) % 3 == 0)
            return 1;
        else
            return 0;
    }
};