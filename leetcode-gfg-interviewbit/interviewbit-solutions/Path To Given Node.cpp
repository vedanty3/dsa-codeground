/*
 * https://www.interviewbit.com/problems/path-to-given-node/
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool helper(TreeNode *A, int B, vector<int> &ans)
{
    if (A == NULL)
    {
        return false;
    }

    ans.push_back(A->val);

    if (A->val == B)
    {
        return true;
    }

    if (helper(A->left, B, ans) or helper(A->right, B, ans))
    {
        return true;
    }

    ans.pop_back();
    return false;
}

vector<int> Solution::solve(TreeNode *A, int B)
{

    vector<int> ans;

    if (A == NULL)
    {
        return ans;
    }

    helper(A, B, ans);

    return ans;
}
