//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends
class Solution
{
public:
    vector<int> getDistinctDifference(int N, vector<int> &A)
    {

        vector<int> ans;

        set<int> lft;
        set<int> rt;
        int larr[N];
        int rarr[N];

        for (int i = 0; i < N; i++)
        {
            if (i - 1 >= 0)
            {
                lft.insert(A[i - 1]);
            }

            larr[i] = lft.size();
        }

        for (int i = N - 1; i >= 0; i--)
        {
            if (i + 1 < N)
            {
                rt.insert(A[i + 1]);
            }
            rarr[i] = rt.size();
        }

        for (int i = 0; i < N; i++)
        {
            ans.push_back(larr[i] - rarr[i]);
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int N;
        scanf("%d", &N);

        vector<int> A(N);
        Array::input(A, N);

        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);

        Array::print(res);
    }
}

// } Driver Code Ends