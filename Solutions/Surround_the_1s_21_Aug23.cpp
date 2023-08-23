class Solution
{
public:
    bool isValid(int rr, int cc, int r, int c)
    {
        return rr >= 0 && rr < r && cc >= 0 && cc < c;
    }
    int Count(vector<vector<int>> &matrix)
    {
        // Code here
        int ans = 0;
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int temp = 0;
                if (matrix[i][j] == 1)
                {
                    // int dx=-1, dy=-1;
                    for (int dx = -1; dx <= 1; dx++)
                    {
                        for (int dy = -1; dy <= 1; dy++)
                        {
                            if (dx == 0 && dy == 0)
                                continue;
                            int rr = i + dx;
                            int cc = j + dy;
                            if (isValid(rr, cc, r, c) && !(dx == 0 && dy == 0) && matrix[rr][cc] == 0)
                            {
                                if (matrix[rr][cc] == 0)
                                    temp++;
                            }
                        }
                    }
                }
                if (temp > 0 && (temp & 1) == 0)
                    ans++;
            }
        }
        return ans;
    }
};