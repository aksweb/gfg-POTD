//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    long long solve(int X, int Y, string S)
    {
        // code here
        stack<char> st;
        long long ans = 0;

        if (X > Y)
        {
            int n = S.size();

            // removing pr first will give the maximum value
            for (int i = 0; i < n; i++)
            {
                if (st.empty())
                {
                    st.push(S[i]);
                }
                else if (S[i] == 'r' && st.top() == 'p')
                {
                    st.pop();
                    ans = ans + X;
                }
                else
                {
                    st.push(S[i]);
                }
            }

            // then removing rp
            S = "";
            while (!st.empty())
            {
                S += st.top();
                st.pop();
            }
            reverse(S.begin(), S.end());
            n = S.size();
            for (int i = 0; i < n; i++)
            {
                if (st.empty())
                {
                    st.push(S[i]);
                }
                else if (S[i] == 'p' && st.top() == 'r')
                {
                    st.pop();
                    ans = ans + Y;
                }
                else
                {
                    st.push(S[i]);
                }
            }
            return ans;
        }

        // if(Y>X): removing rp first will give maximum value
        else
        {
            int n = S.size();

            // removing rp
            for (int i = 0; i < n; i++)
            {
                if (st.empty())
                {
                    st.push(S[i]);
                }
                else if (S[i] == 'p' && st.top() == 'r')
                {
                    st.pop();
                    ans = ans + Y;
                }
                else
                {
                    st.push(S[i]);
                }
            }

            // then removing pr
            S = "";
            while (!st.empty())
            {
                S += st.top();
                st.pop();
            }
            reverse(S.begin(), S.end());
            n = S.size();
            for (int i = 0; i < n; i++)
            {
                if (st.empty())
                {
                    st.push(S[i]);
                }
                else if (S[i] == 'r' && st.top() == 'p')
                {
                    st.pop();
                    ans = ans + X;
                }
                else
                {
                    st.push(S[i]);
                }
            }
            return ans;
        }
    }
};

//{ Driver Code Starts.
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        string S;
        cin >> S;
        Solution obj;
        long long answer = obj.solve(X, Y, S);
        cout << answer << endl;
    }
}
// } Driver Code Ends