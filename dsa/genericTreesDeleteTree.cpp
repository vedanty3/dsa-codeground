#include <iostream>
#include <vector>
#include <queue>
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

TreeNode *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        int n;
        cout << "Enter number of children of " << f->data << " : ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << f->data << " : ";
            cin >> childData;
            TreeNode *child = new TreeNode(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

void printTreeLevelWise(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *f = q.front();
        q.pop();
        cout << f->data << " : ";
        for (int i = 0; i < f->children.size(); i++)
        {
            cout << f->children[i]->data << ", ";
        }
        cout << endl;
        for (int i = 0; i < f->children.size(); i++)
        {
            q.push(f->children[i]);
        }
    }
}

void deleteTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
}

int main()
{
    TreeNode *root = takeInputLevelWise();
    cout << "Tree is : " << endl;
    cout << "Level wise print : " << endl;
    printTreeLevelWise(root);
    cout << "Deleting tree..." << endl;
    deleteTree(root);
    printTreeLevelWise(root);
    return 0;
}