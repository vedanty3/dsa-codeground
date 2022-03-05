#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

bool containsCycle(Node *head)
{
    unordered_map<Node *, bool> hashtable;
    Node *temp = head;
    while (temp != NULL)
    {
        if (hashtable.count(temp) != 0)
        {
            return true;
        }
        hashtable[temp] = true;
        temp = temp->next;
    }
    return false;
}

void insertAthead(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

int main()
{
    Node *A = NULL;
    insertAthead(A, 1);
    insertAthead(A, 2);
    insertAthead(A, 3);
    insertAthead(A, 3);
    insertAthead(A, 3);

    Node *temp = A->next->next->next->next;
    temp->next = A->next->next;
    if (containsCycle(A))
    {
        cout << "Cycle found" << endl;
    }
    else
    {
        cout << "Cycle not found" << endl;
    }

    return 0;
}