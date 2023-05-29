//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int dominantPairs(int n, vector<int> &arr)
    {
        int ans = 0;
        int mid = n / 2;
        auto itr = arr.begin() + n / 2;
        sort(arr.begin(), arr.begin() + mid);
        sort(arr.begin() + mid, arr.end());

        // for(int i=0 ;i<n; i++){
        //     // if(arr[i]>=5*arr[n-i]){
        //     //     ans++;
        //     // }
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        int i = 0, j = mid;
        while (i < mid && j < n)
        {
            if (arr[i] >= 5 * arr[j])
            {
                ans += mid - i;
                j++;
            }
            else
            {
                i++;
            }
        }

        return ans;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.dominantPairs(n, arr) << endl;
    }
}
// } Driver Code Ends