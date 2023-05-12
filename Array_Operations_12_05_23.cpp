class Solution
{
public:
    int arrayOperations(int n, vector<int> &arr)
    {
        long long sum = 0;
        int zc = 0;
        if (n == 1 && arr[0] != 0)
            return -1;
        if (n == 1 && arr[0] == 0)
            return 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
            if (arr[i] == 0 && arr[i + 1] != 0)
                zc++;
        }
        if (sum == 0)
            return 0;
        if (zc == 0 && arr[n - 1] == 0)
            return 1;
        if (zc == 0)
            return -1;
        if (zc == 1 && arr[0] == 0)
            return 1;
        if (zc == 1 && arr[0] != 0)
            return 2;

        if (zc > 1)
        {
            if (arr[0] == 0)
                zc--;
        }
        if (zc == 0)
            return 1;
        else
            return zc + 1;
    }
};