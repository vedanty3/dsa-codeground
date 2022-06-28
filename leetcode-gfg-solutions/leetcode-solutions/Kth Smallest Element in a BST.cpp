// https : // leetcode.com/problems/kth-smallest-element-in-a-bst/

/**
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
    int kthSmallest(TreeNode *root, int &k)
    {

        stack<TreeNode *> st;

        while (true)
        {
            while (root != NULL)
            {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            st.pop();
            k--;

            if (k == 0)
            {
                return root->val;
            }

            root = root->right;
        }
    }
};

/*
 * TC: O(N) & SC: O(1)
 * Definition for a binary tree node.
 * struct TreeNode
{
    *int val;
    *TreeNode *left;
    *TreeNode *right;
    *TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
                                                                                                                                                                                                   *
};
 */

class Solution
{
public:
    int kthSmallest(TreeNode *root, int k)
    {
        int find_k = k;
        int kth_smallest;

        TreeNode *curr = root;

        while (curr != NULL)
        {
            if (curr->left == NULL)
            {
                find_k--;

                if (find_k == 0)
                {
                    kth_smallest = curr->val;
                }

                curr = curr->right;
            }
            else
            {
                TreeNode *prev = curr->left;

                while (prev->right != NULL and prev->right != curr)
                {
                    prev = prev->right;
                }

                if (prev->right == NULL)
                {
                    prev->right = curr;
                    curr = curr->left;
                }
                else
                {
                    find_k--;

                    if (find_k == 0)
                    {
                        kth_smallest = curr->val;
                    }

                    prev->right = NULL;
                    curr = curr->right;
                }
            }
        }

        return kth_smallest;
    }
};