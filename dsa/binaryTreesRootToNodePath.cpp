#include <iostream>
#include <queue>
using namespace std;

class BTNode
{
public:
    int data;
    BTNode *left;
    BTNode *right;
    BTNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BTNode()
    {
        delete left;
        delete right;
    }
};

void printTreeRecursively(BTNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    if (root->left != NULL)
    {
        cout << "L : " << root->left->data << ", ";
    }

    if (root->right != NULL)
    {
        cout << "R : " << root->right->data << ", ";
    }
    cout << endl;

    printTreeRecursively(root->left);
    printTreeRecursively(root->right);
}

BTNode *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;

    BTNode *root = new BTNode(rootData);
    queue<BTNode *> q;
    q.push(root);

    while (!q.empty())
    {
        BTNode *f = q.front();
        q.pop();

        int leftChildData;
        cout << "Enter the left child of " << f->data << " : ";
        cin >> leftChildData;

        if (leftChildData != -1)
        {
            BTNode *child = new BTNode(leftChildData);
            q.push(child);
            f->left = child;
        }

        int rightChildData;
        cout << "Enter the right child of " << f->data << " : ";
        cin >> rightChildData;

        if (rightChildData != -1)
        {
            BTNode *child = new BTNode(rightChildData);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}

bool getPath(BTNode *root, int k, vector<int> &v)
{
    if (root == NULL)
    {
        return false;
    }
    v.push_back(root->data);
    if (root->data == k)
    {
        return true;
    }

    bool left = getPath(root->left, k, v);
    bool right = getPath(root->right, k, v);
    if (left || right)
    {
        return true;
    }
    else
    {
        v.pop_back();
        return false;
    }
}

int main()
{
    BTNode *root = takeInputLevelWise();
    cout << "Binary Tree : " << endl;
    printTreeRecursively(root);
    cout << "Enter the node you are looking for : ";
    int k;
    cin >> k;
    vector<int> v;
    if (getPath(root, k, v))
    {
        cout << "Root to node path is ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}