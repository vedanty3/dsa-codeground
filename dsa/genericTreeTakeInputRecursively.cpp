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

TreeNode *takeInput()
{
    int rootData;
    cout << "Enter Data : ";
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);
    int n;
    cout << "Enter number of children of " << rootData << " : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        TreeNode *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

int main()
{
    TreeNode *root = takeInput();
    printTree(root);
    return 0;
}