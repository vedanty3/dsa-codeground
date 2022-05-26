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
    if (root == NULL)
    {
        return ds;
    }

    stack<TreeNode *> st;

    while (root != NULL or !st.empty())
    {
        if (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            TreeNode *n = st.top()->right;

            if (n == NULL)
            {
                n = st.top();
                st.pop();
                ds.push_back(n->data);

                while (!st.empty() and st.top()->right == n)
                {
                    n = st.top();
                    st.pop();
                    ds.push_back(n->data);
                }
            }
            else
            {
                root = n;
            }
        }
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