//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int solve(int a, int b, int c)
    {
        int maxi = max(a, max(b, c));
        int mini = min(a, min(b, c));
        int n = a + b + c;
        int mid = n - maxi - mini;

        if (maxi > (mini + mid + 1) * 2)
            return -1;
        else
            return n;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends