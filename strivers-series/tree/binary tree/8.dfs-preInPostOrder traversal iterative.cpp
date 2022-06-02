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
    void preInPostOrder(TreeNode *root, vector<int> &preOrder, vector<int> &inOrder, vector<int> &postOrder)
    {
        if (root == NULL)
        {
            return;
        }

        stack<pair<TreeNode *, int>> st;
        st.push({root, 1});

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
                    st.push({p.first->left, 1});
                }
            }
            else if (p.second == 2)
            {
                inOrder.push_back(p.first->val);
                p.second++;
                st.push(p);

                if (p.first->right != NULL)
                {
                    st.push({p.first->right, 1});
                }
            }
            else
            {
                postOrder.push_back(p.first->val);
            }
        }
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> preOrder;
        vector<int> inOrder;
        vector<int> postOrder;

        preInPostOrder(root, preOrder, inOrder, postOrder);

        return postOrder;
    }
};