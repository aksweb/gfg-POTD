//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> lexicographicallyLargest(vector<int> &a, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            long long sum = a[i] + a[i + 1];
            if (sum % 2 == 0)
            {
                if (a[i + 1] > a[i])
                {
                    swap(a[i + 1], a[i]);
                    if (i > 0)
                    {
                        int temp = i;
                        while (temp > 0 && (a[temp] > a[temp - 1]) && (a[temp] + a[temp - 1]) % 2 == 0)
                        {
                            swap(a[temp], a[temp - 1]);
                            temp--;
                        }
                    }
                }
            }
        }
        return a;
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
        vector<int> a(n);
        for (auto &j : a)
            cin >> j;
        Solution s;
        vector<int> b = s.lexicographicallyLargest(a, n);
        for (auto i : b)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends