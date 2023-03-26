//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int unvisitedLeaves(int N, int leaves, int frogs[])
    {
        int count = 0;
        vector<int> freq(leaves + 1, 0);
        set<int> myset;
        for (int i = 0; i < N; i++)
        {
            myset.insert(frogs[i]);
        }

        for (auto i : myset)
        {
            for (int j = i; j <= leaves; j += i)
            {
                // myset.erase(j);
                freq[j] = 1;
            }
        }

        for (int i = 1; i <= leaves; i++)
        {
            if (freq[i] == 0)
            {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++)
        {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends
