class Solution
{
public:
    int minimumNumber(int n, vector<int> &arr)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int mini = min(arr[i], arr[i + 1]);
            int maxi = max(arr[i], arr[i + 1]);
            if (mini == 0)
            {
                arr[i + 1] = maxi;
                continue;
            }
            else if (mini == 1)
            {
                return 1;
            }
            int res = maxi % mini;
            if (res == 0)
                arr[i + 1] = mini;
            else
            {

                arr[i] = res;
                arr[i + 1] = mini;
                res = mini % arr[i];
                if (res == 0)
                {
                    arr[i + 1] = arr[i];
                }
                else
                {

                    arr[i + 1] = res;
                }
            }
        }
        return arr[n - 1];
    }
};