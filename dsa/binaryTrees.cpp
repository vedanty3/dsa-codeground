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

int main()
{
    BTNode *root = new BTNode(1);
    BTNode *n1 = new BTNode(1);
    BTNode *n2 = new BTNode(1);

    root->left = n1;
    root->right = n2;

    delete root;
    return 0;
}