class solution
{
public:
    static bool compare(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.second == b.second)
            return a.first > b.first;
        else
            return a.second > b.second;
    }
    vector<int> topK(vector<int> &nums, int k)
    {
        // Code here
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> elem_freq;

        for (auto &it : mp)
        {
            elem_freq.push_back(it);
        }

        sort(elem_freq.begin(), elem_freq.end(), compare);

        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            ans.push_back(elem_freq[i].first);
        }

        return ans;
    }
};