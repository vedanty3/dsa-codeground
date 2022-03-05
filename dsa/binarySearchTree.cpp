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

class Pair
{
public:
    BTNode *head;
    BTNode *tail;
};

class BSTNode
{
private:
    BTNode *root;
    void printTreeLevelWise(BTNode *root)
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
        printTreeLevelWise(root->left);
        printTreeLevelWise(root->right);
    }

    bool hasData(BTNode *root, int data)
    {
        if (root == NULL)
        {
            return false;
        }

        if (root->data == data)
        {
            return true;
        }

        if (root->data > data)
        {
            return hasData(root->left, data);
        }
        else
        {
            return hasData(root->right, data);
        }
    }

    BTNode *insert(BTNode *root, int data)
    {
        if (root == NULL)
        {
            BTNode *n = new BTNode(data);
            return n;
        }
        if (data < root->data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
        return root;
    }

    BTNode *deleteData(BTNode *root, int data)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->data > data)
        {
            root->left = deleteData(root->left, data);
        }
        else if (root->data < data)
        {
            root->right = deleteData(root->right, data);
        }
        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }

            else if (root->left == NULL)
            {
                BTNode *n = root->right;
                root->right = NULL;
                delete root;
                return n;
            }
            else if (root->right == NULL)
            {
                BTNode *n = root->left;
                root->left = NULL;
                delete root;
                return n;
            }
            else
            {
                BTNode *minNode = root->right;
                while (minNode->left != NULL)
                {
                    minNode = minNode->left;
                }
                int rightMin = minNode->data;
                root->data = rightMin;
                root->right = deleteData(root->right, rightMin);
            }
        }
        return root;
    }

    Pair convertToLL(BTNode *root)
    {
        if (root == NULL)
        {
            Pair n;
            n.head = NULL;
            n.tail = NULL;
            return n;
        }

        if (root->left == NULL && root->right == NULL)
        {
            Pair p;
            p.head = root;
            p.tail = root;
            return p;
        }

        else if (root->left != NULL && root->right == NULL)
        {
            Pair leftLL = convertToLL(root->left);
            leftLL.tail->right = root;
            Pair n;
            n.head = leftLL.head;
            n.tail = root;
            return n;
        }

        else if (root->left == NULL && root->right != NULL)
        {
            Pair rightLL = convertToLL(root->right);
            root->right = rightLL.head;
            Pair n;
            n.head = root;
            n.tail = rightLL.tail;
            return n;
        }
        else
        {
            Pair leftLL = convertToLL(root->left);
            Pair rightLL = convertToLL(root->right);
            leftLL.tail->right = root;
            root->right = rightLL.head;
            Pair n;
            n.head = leftLL.head;
            n.tail = rightLL.tail;
            return n;
        }
    }

public:
    BSTNode()
    {
        root = NULL;
    }
    ~BSTNode()
    {
        delete root;
    }

    void print()
    {
        return printTreeLevelWise(root);
    }
    bool hasData(int data)
    {
        return hasData(root, data);
    }

    void insert(int data)
    {
        root = insert(root, data);
    }
    void deleteData(int data)
    {
        root = deleteData(root, data);
    }
    BTNode *convertToLL()
    {
        Pair p = convertToLL(root);
        return p.head;
    }
};

int main()
{
    system("CLS");
    cout << endl;
    BSTNode b;
    // cout << "hasData : " << b.hasData(70);
    cout << "Binary Search Tree : " << endl;
    b.insert(50);
    b.insert(10);
    b.insert(20);
    b.insert(60);
    b.insert(70);
    b.insert(64);
    b.insert(100);
    b.print();
    cout << endl;

    /*
    cout << endl;
    b.deleteData(70);
    cout << "Binary Search Tree : " << endl;
    b.print();
    cout << endl;
    */

    cout << "Linked List : " << endl;
    BTNode *head = b.convertToLL();
    BTNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->right;
    }

    cout << "NULL" << endl;

    return 0;
}