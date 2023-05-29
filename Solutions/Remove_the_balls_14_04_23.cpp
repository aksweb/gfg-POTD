//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int finLength(int N, vector<int> color, vector<int> radius)
    {

        int count = 0;
        for (int i = 0; i < N - 1;)
        {
            if ((color[i] == color[i + 1]) && (radius[i] == radius[i + 1]))
            {
                count++;
                color.erase(color.begin() + i, color.begin() + i + 2);
                radius.erase(radius.begin() + i, radius.begin() + i + 2);
                N -= 2;
                if ((i - 1) < 0)
                    i = 0;
                else
                    i--;
            }
            else
                i++;
        }
        // cout<<"count: "<<count<<endl;
        // for(int i=0; i<color.size(); i++){
        //     cout<<color[i]<<" ";
        // }
        return color.size();
    }
};

//{ Driver Code Starts.
int main()
{

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--)
    {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++)
            cin >> color[i];
        for (int i = 0; i < n; i++)
            cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends