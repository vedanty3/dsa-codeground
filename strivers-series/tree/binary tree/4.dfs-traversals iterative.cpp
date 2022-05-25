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

vector<int> preOrder(Node *root, vector<int> &ds)
{
    if (root == NULL)
    {
        return ds;
    }

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        Node *n = st.top();
        st.pop();

        ds.push_back(n->data);

        if (n->right != NULL)
        {
            st.push(n->right);
        }

        if (n->left != NULL)
        {
            st.push(n->left);
        }
    }

    return ds;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    vector<int> ds;

    preOrder(root, ds);

    for (auto i : ds)
    {
        cout << i << " ";
    }

    return 0;
}