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
        cout << "Enter number of children of " << f->data << endl;
        ;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << f->data << endl;
            cin >> childData;

            TreeNode *child = new TreeNode(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

int main()
{
    system("CLS");
    TreeNode *root = takeInputLevelWise();
    cout << endl;
    cout << "Tree is : " << endl;
    cout << endl;
    printTree(root);

    return 0;
}