//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

public:
    int xmod11(string x)
    {
        int sum_odd = 0, sum_even = 0;
        for (int i = 0; i < x.length(); i++)
        {
            if (i % 2 == 0)
            {
                int num = int(x[i]) - '0';
                sum_even += num;
            }
            else
            {
                int num = x[i] - '0';
                sum_odd += num;
            }
        }

        int diff = (sum_odd - sum_even);
        diff = diff % 11;
        if (diff >= 0)
        {

            return diff;
        }

        else
        {
            return diff + 11;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends