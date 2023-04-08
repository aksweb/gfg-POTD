//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> makeBeautiful(vector<int> arr)
    {

        // using stack
        stack<int> st;
        for (auto no : arr)
        {
            if (st.size())
            {
                if (st.top() >= 0 and no < 0 || (st.top() < 0 and no >= 0))
                {
                    st.pop();
                }
                else
                {
                    st.push(no);
                }
            }
            else
            {
                st.push(no);
            }
        }
        vector<int> ans;
        while (st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;

        //  for (auto it = arr.begin(); it < arr.end() - 2;) {
        //     if ((*it) * (*(it + 1)) < 0 ) {
        //         if (it == arr.begin()) {
        //             it = arr.erase(it, it + 2);
        //         } else {
        //             it = arr.erase(it, it + 2);
        //             --it;
        //             // --it;
        //         }
        //     }
        //     if((*it) * (*(it + 1)) == 0){
        //         cout<<*it -1<<" "<< *(it+1)-1<<endl;
        //     }
        //     else {
        //         ++it;
        //     }
        // }
        // return arr;
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

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends