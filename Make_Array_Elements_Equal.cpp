//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long int minOperations(int N)
    {
        long long int sum = 0;
        if (N % 2 != 0)
        {
            long long int mid = N / 2;
            long long int midNo = 1 + (mid)*2;
            sum = (mid * (2 + (mid - 1) * 2)) / 2;
            sum = mid * midNo - sum;
        }
        else
        {
            long long int mid = N / 2;
            long long int midNo = 1 + mid * 2;
            sum = ((mid - 1) * (2 + (mid - 2) * 2)) / 2;
            sum = (midNo - 1) * (mid - 1) - sum + 1;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
// } Driver Code Ends