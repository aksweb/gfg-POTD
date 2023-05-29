//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string removeBrackets(string s)
    {
        // code here
        vector<char> stk(s.begin(), s.end());

        int n = s.length();

        vector<int> nxta(n + 1);

        vector<int> lasta(n + 1);

        vector<int> ans(n + 1, 1);

        int l = -1;
        for (int i = 0; i < n; i++)
        {
            lasta[i] = l;
            if (stk[i] == '*' || stk[i] == '+' || stk[i] == '-' || stk[i] == '/')
                l = stk[i];
        }

        l = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            nxta[i] = l;
            if (stk[i] == '*' || stk[i] == '+' || stk[i] == '-' || stk[i] == '/')
                l = stk[i];
        }

        stack<int> st;
        vector<int> sign(256, -1);
        vector<char> operand = {'*', '+', '-', '/'};
        vector<int> mp(256);

        for (int p = 0; p < n; p++)
        {
            for (char x : operand)
            {
                if (x == stk[p])
                    sign[x] = p;
            }
            if (stk[p] == '(')
                st.push(p);

            else if (stk[p] == ')')
            {
                int i = st.top();
                st.pop();
                int j = p;

                int nxt = nxta[j];
                int last = lasta[i];

                for (char x : operand)
                {
                    if (sign[x] >= i)
                    {
                        mp[x] = 1;
                    }
                }
                int ok = 0;

                if (i > 0 && j + 1 < n && stk[i - 1] == '(' && stk[j + 1] == ')')
                    ok = 1;
                if (mp['+'] == 0 && mp['*'] == 0 && mp['-'] == 0 && mp['/'] == 0)
                    ok = 1;
                if (last == -1 && nxt == -1)
                    ok = 1;
                if (last == '/')
                {
                }
                else if (last == '-' && (mp['+'] == 1 || mp['-'] == 1))
                {
                }
                else if (mp['-'] == 0 && mp['+'] == 0)
                {
                    ok = 1;
                }
                else
                {
                    if ((last == -1 || last == '+' || last == '-') && (nxt == -1 || nxt == '+' || nxt == '-'))
                        ok = 1;
                }
                if (ok == 1)
                {
                    ans[i] = 0;
                    ans[j] = 0;
                }
            }
        }
        string res = "";
        for (int i = 0; i < n; i++)
        {
            if (ans[i] > 0)
            {
                res.push_back(stk[i]);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string Exp;
        cin >> Exp;

        Solution ob;
        cout << ob.removeBrackets(Exp) << endl;
    }
    return 0;
}

// } Driver Code Ends