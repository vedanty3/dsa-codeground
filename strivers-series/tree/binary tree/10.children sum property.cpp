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

vector<vector<int>> levelOrder(Node *root, vector<vector<int>> &ds)
{
    if (root == NULL)
    {
        return ds;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Node *n = q.front();
            q.pop();

            if (n->left != NULL)
            {
                q.push(n->left);
            }

            if (n->right != NULL)
            {
                q.push(n->right);
            }

            level.push_back(n->data);
        }

        ds.push_back(level);
    }

    return ds;
}

void childrenSumProperty(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    int child = 0;

    if (root->left != NULL)
    {
        child += root->left->data;
    }

    if (root->right != NULL)
    {
        child += root->right->data;
    }

    if (root->data <= child)
    {
        root->data = child;
    }
    else
    {
        if (root->left != NULL)
        {
            root->left->data = root->data;
        }

        if (root->right != NULL)
        {
            root->right->data = root->data;
        }
    }

    childrenSumProperty(root->left);
    childrenSumProperty(root->right);

    int total = 0;

    if (root->left != NULL)
    {
        total += root->left->data;
    }

    if (root->right != NULL)
    {
        total += root->right->data;
    }

    if (root->left or root->right)
    {
        root->data = total;
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    childrenSumProperty(root);

    vector<vector<int>> ds;
    levelOrder(root, ds);

    for (int i = 0; i < ds.size(); i++)
    {
        for (int j = 0; j < ds[i].size(); j++)
        {
            cout << ds[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}