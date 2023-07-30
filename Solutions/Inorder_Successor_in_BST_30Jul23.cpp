class Solution
{
public:
    Node *inOrd(Node *root, Node *x, int &fg)
    {
        if (root)
        {
            Node *lr = inOrd(root->left, x, fg);
            if (lr) // if the result is found in the left subtree- propagate it upward
                return lr;

            if (fg == 1)
            {
                return root;
            }

            if (root == x)
                fg = 1;

            Node *rr = inOrd(root->right, x, fg);
            if (rr) // if the result is found in the right subtree- propagate it upward
                return rr;
        }
        return nullptr;
    }

    Node *inOrderSuccessor(Node *root, Node *x)
    {
        int fg = 0;
        return inOrd(root, x, fg);
    }
};