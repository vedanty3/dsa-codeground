#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> preOrder(Node *root)
{
    vector<int> dfs_preorder;

    Node *curr = root;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            dfs_preorder.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            Node *prev = curr->left;

            while (prev->right != NULL and prev->right != curr)
            {
                prev = prev->right;
            }

            if (prev->right == NULL)
            {
                prev->right = curr;
                dfs_preorder.push_back(curr->data);
                curr = curr->left;
            }
            else
            {
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }

    return dfs_preorder;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    vector<int> dfs_preorder = preOrder(root);

    for (auto i : dfs_preorder)
    {
        cout << i << " ";
    }

    return 0;
}