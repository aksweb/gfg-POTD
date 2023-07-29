void inTrav(Node *root, vector<int> &nodes)
{
    if (root)
    {
        inTrav(root->left, nodes);
        nodes.push_back(root->data);
        inTrav(root->right, nodes);
    }
}

float findMedian(struct Node *root)
{
    // Code here
    if (!root)
        return 0.0;
    vector<int> nodes;
    inTrav(root, nodes);

    long long sz = nodes.size();
    float res = 0;
    if (sz % 2 == 0)
    {
        res = (nodes[sz / 2] + nodes[(sz / 2) - 1]) / 2.0;
        return res;
    }
    else
        return nodes[sz / 2];
}