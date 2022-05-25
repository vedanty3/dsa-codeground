// https://leetcode.com/problems/binary-tree-postorder-traversal/

/* Recursive
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
public:
    void postOrder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }
        postOrder(root->left, v);
        postOrder(root->right, v);
        v.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;
        postOrder(root, v);
        return v;
    }
};

/** Iterative
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
public:
    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> ds;

        if (root == NULL)
        {
            return ds;
        }

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
            ds.push_back(st2.top()->val);
            st2.pop();
        }

        return ds;
    }
};