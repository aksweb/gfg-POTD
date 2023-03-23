//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *right;
    Node *left;

    Node(int x)
    {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val)
{
    Node *temp = NULL;
    if (tree == NULL)
        return new Node(val);

    if (val < tree->data)
    {
        tree->left = insert(tree->left, val);
    }
    else if (val > tree->data)
    {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    Node *search(Node *root, int key, int &s1)
    {
        if (root == NULL)
            return NULL;

        s1 += root->data;

        if (root->data == key)
        {
            return root;
        }

        if (root->data < key)
        {
            return search(root->right, key, s1);
        }

        else
        {
            return search(root->left, key, s1);
        }
    }
    int leaf(Node *rt)
    {
        if (rt->left == NULL && rt->right == NULL)
        {
            return rt->data;
        }
        int mn = INT_MAX;
        if (rt->left)
        {

            mn = min(mn, leaf(rt->left));
        }
        if (rt->right)
        {
            mn = min(mn, leaf(rt->right));
        }
        return mn + (rt->data);
    }
    int maxDifferenceBST(Node *root, int target)
    {
        int s1 = 0;
        Node *tNode = search(root, target, s1);
        if (tNode == NULL)
        {
            return -1;
        }

        int s2 = leaf(tNode);
        return s1 - s2;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends