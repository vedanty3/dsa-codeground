#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void preInPostOrderTraversal(TreeNode *root, vector<int> &preOrder, vector<int> &inOrder, vector<int> &postOrder)
{
    if (root == NULL)
    {
        return;
    }

    stack<pair<TreeNode *, int>> st;
    st.push(make_pair(root, 1));

    while (!st.empty())
    {
        pair<TreeNode *, int> p = st.top();
        st.pop();

        if (p.second == 1)
        {
            preOrder.push_back(p.first->val);
            p.second++;
            st.push(p);

            if (p.first->left != NULL)
            {
                st.push(make_pair(p.first->left, 1));
            }
        }
        else if (p.second == 2)
        {
            inOrder.push_back(p.first->val);
            p.second++;
            st.push(p);

            if (p.first->right != NULL)
            {
                st.push(make_pair(p.first->right, 1));
            }
        }
        else
        {
            postOrder.push_back(p.first->val);
        }
    }
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<int> preOrder;
    vector<int> inOrder;
    vector<int> postOrder;

    preInPostOrderTraversal(root, preOrder, inOrder, postOrder);

    cout << "PREORDER TRAVERSAL: ";
    for (auto i : preOrder)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "INORDER TRAVERSAL: ";
    for (auto i : inOrder)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "POSTORDER TRAVERSAL: ";
    for (auto i : postOrder)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}