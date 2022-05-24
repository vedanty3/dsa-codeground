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

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

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