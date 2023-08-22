/*
//python3
class Solution:
    def findMinOpeartion(self, matrix, n):
        # Code here
        cmax=0
        rmax=0
        sum=0
        for i in range(n):
            rt=0
            ct=0
            for j in range(n):
                sum+=matrix[i][j]
                rt+=matrix[i][j]
                ct+=matrix[j][i]
            rmax=max(rt, rmax)
            cmax=max(cmax, ct)
        fmax=max(rmax, cmax)
        return fmax*n - sum
*/

// C++
class Solution
{
public:
    // Function to find minimum number of operations that are required
    // to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int>> matrix, int n)
    {
        // code here
        long long sum = 0;
        long long rmax = 0, cmax = 0;
        for (int i = 0; i < n; i++)
        {
            long long rt = 0, ct = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
                rt = rt + matrix[i][j];
                ct = ct + matrix[j][i];
            }
            rmax = max(rt, rmax);
            cmax = max(ct, cmax);
        }
        long fmax = max(rmax, cmax);
        return fmax * n - sum;
    }
};