#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    struct TreeNode *left;
    struct TreeNode *right;
    int data;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> postOrder(TreeNode *root, vector<int> &ds)
{
    stack<TreeNode *> st1, st2;
    st1.push(root);

    while (!st1.empty())
    {
        TreeNode *node = st1.top();
        st1.pop();
        st2.push(node);

        if (node->left != NULL)
        {
            st1.push(node->left);
        }

        if (node->right != NULL)
        {
            st1.push(node->right);
        }
    }

    while (!st2.empty())
    {
        ds.push_back(st2.top()->data);
        st2.pop();
    }

    return ds;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<int> ds;

    postOrder(root, ds);

    for (auto i : ds)
    {
        cout << i << " ";
    }

    return 0;
}