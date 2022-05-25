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

vector<int> inOrder(TreeNode *root, vector<int> &ds)
{
    stack<TreeNode *> st;
    TreeNode *node = root;

    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty())
            {
                break;
            }

            node = st.top();
            st.pop();
            ds.push_back(node->data);
            node = node->right;
        }
    }

    return ds;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<int> ds;

    inOrder(root, ds);

    for (auto i : ds)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}