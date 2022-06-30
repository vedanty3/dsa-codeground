/*
 * https://leetcode.com/problems/recover-binary-search-tree/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{

private:
    TreeNode *prev;
    TreeNode *first;
    TreeNode *middle;
    TreeNode *last;

public:
    void helper(TreeNode *root)
    {
        if (!root)
            return;

        helper(root->left);

        if (prev != NULL and prev->val > root->val)
        {
            if (!first)
            {
                first = prev;
                middle = root;
            }
            else
                last = root;
        }

        prev = root;

        helper(root->right);
    }

    void recoverTree(TreeNode *root)
    {
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);

        helper(root);

        if (first and last)
            swap(first->val, last->val);
        else
            swap(first->val, middle->val);
    }
};