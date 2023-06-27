class Solution
{
public:
    /*You are required to complete this method*/
    int maxDepth(Node *root)
    {
        // Your code here
        if (root == NULL)
            return 0;
        else
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};