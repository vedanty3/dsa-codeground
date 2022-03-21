#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int data;
    vector<TreeNode *> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};

void printTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n3c1 = new TreeNode(23);
    TreeNode *n3c2 = new TreeNode(24);

    root->children.push_back(n1);
    root->children.push_back(n2);
    root->children.push_back(n3);
    n3->children.push_back(n3c1);
    n3->children.push_back(n3c2);

    printTree(root);

    return 0;
}