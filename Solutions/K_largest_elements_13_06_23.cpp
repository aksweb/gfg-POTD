//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
private:
    void max_heapify(int arr[], int n, int i)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;

        if (l < n && arr[l] > arr[largest])
            largest = l;
        if (r < n && arr[r] > arr[largest])
            largest = r;

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            max_heapify(arr, n, largest);
        }
    }

public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> ans;
        for (int i = (n / 2) - 1; i >= 0; i--)
        {
            max_heapify(arr, n, i);
        }
        // for(int i=0; i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;

        for (int i = n - 1; i >= n - k; i--)
        {
            ans.push_back(arr[0]); // Add the current maximum element to the answer

            swap(arr[0], arr[i]);   // Move the last element to the root
            max_heapify(arr, i, 0); // Heapify the reduced heap
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends