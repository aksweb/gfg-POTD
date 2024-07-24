class Solution
{
private:
    bool isValid(Node *root, int mn, int mx)
    {
        if (root == nullptr)
            return true;
        if (root->data <= mn || root->data >= mx)
            return false;
        return (isValid(root->left, mn, root->data) && isValid(root->right, root->data, mx));
    }

public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node *root)
    {
        // Your code here
        return isValid(root, INT_MIN, INT_MAX);
    }
};