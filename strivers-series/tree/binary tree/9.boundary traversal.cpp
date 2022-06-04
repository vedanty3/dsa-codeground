#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

bool isLeaf(TreeNode *root)
{
    if (root->left == NULL and root->right == NULL)
    {
        return true;
    }

    return false;
}

void addLeft(TreeNode *root, vector<int> &ans)
{
    TreeNode *curr = root->left;

    while (curr != NULL)
    {
        if (!isLeaf(curr))
        {
            ans.push_back(curr->val);
        }
        if (curr->left != NULL)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
}

void addLeaves(TreeNode *root, vector<int> &ans)
{
    if (isLeaf(root))
    {
        ans.push_back(root->val);
    }

    if (root->left != NULL)
    {
        addLeaves(root->left, ans);
    }

    if (root->right != NULL)
    {
        addLeaves(root->right, ans);
    }
}

void addRight(TreeNode *root, vector<int> &ans)
{
    TreeNode *curr = root->right;
    vector<int> tmp;

    while (curr != NULL)
    {
        if (!isLeaf(curr))
        {
            tmp.push_back(curr->val);
        }

        if (curr->right != NULL)
        {
            curr = curr->right;
        }

        else
        {
            curr = curr->left;
        }
    }

    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        ans.push_back(tmp[i]);
    }
}

vector<int> printBoundary(TreeNode *root)
{

    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    if (!isLeaf(root))
    {
        ans.push_back(root->val);
    }

    addLeft(root, ans);
    addLeaves(root, ans);
    addRight(root, ans);

    return ans;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(4);
    root->left->left->right->left = new TreeNode(5);
    root->left->left->right->right = new TreeNode(6);
    root->right = new TreeNode(7);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);
    root->right->right->left->left = new TreeNode(10);
    root->right->right->left->right = new TreeNode(11);

    vector<int> ans = printBoundary(root);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}