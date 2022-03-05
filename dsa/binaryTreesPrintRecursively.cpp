#include <iostream>
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

void printTree(BTNode *root)
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
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BTNode *root = new BTNode(1);
    BTNode *n1 = new BTNode(2);
    BTNode *n2 = new BTNode(3);

    root->left = n1;
    root->right = n2;

    cout << "Binary Tree : " << endl;
    printTree(root);
    delete root;
    return 0;
}