class Solution
{
public:
    bool lemonadeChange(int N, vector<int> &bills)
    {
        // code here
        int arr[3] = {0};
        // unordered_map<int, int> mp

        for (int i = 0; i < N; i++)
        {
            int t = bills[i];

            if (t == 5)
                arr[0]++;
            else if (t == 10)
            {
                if (arr[0] == 0)
                    return false;
                arr[0]--;
                arr[1]++;
            }
            else if (t == 20)
            {
                // cout <<"ret f ";
                if (arr[0] == 0)
                    return false;
                if (arr[1] == 0 && (t - (arr[0] * 5)) > 5)
                    return false;
                if ((arr[0] * 5 + arr[1] * 10) < t - 5)
                    return false;
                if (arr[1] == 0)
                {
                    arr[0] -= 3;
                    arr[2]++;
                }
                else
                {
                    arr[0]--;
                    arr[1]--;
                    arr[2]++;
                }
            }
        }
        return true;
    }
};