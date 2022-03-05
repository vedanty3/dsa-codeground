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

BTNode *takeInputRecursively()
{
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }

    BTNode *root = new BTNode(rootData);
    BTNode *leftChild = takeInputRecursively();
    BTNode *rightChild = takeInputRecursively();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    BTNode *root = takeInputRecursively();
    cout << "Binary Tree : " << endl;
    printTreeRecursively(root);
    delete root;
    return 0;
}