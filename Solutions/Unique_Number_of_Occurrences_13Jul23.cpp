class Solution
{
public:
    bool isFrequencyUnique(int n, int arr[])
    {
        // using unordered map beacuse it takes O(log n) to insert and O(1) to access it.
        unordered_map<long long, long long> ump;
        for (int i = 0; i < n; i++)
        {
            ump[arr[i]]++;
        }
        set<long long> st;

        for (auto it = ump.begin(); it != ump.end(); it++)
        {
            st.insert(it->second);
        }

        if (st.size() < ump.size())
        {
            return false;
        }
        else
            return true;
    }
};