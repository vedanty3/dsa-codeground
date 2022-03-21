#include <iostream>  // T =O(N)
using namespace std; // S = O(N)

class Node // if we do it iteratively then T = O(1)
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

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

/*
    bool isPresent(Node *head, int data)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == data)
        {
            return true;
        }
        curr = curr->next;
    }
    return false;
}
*/

// recursive approach

bool isPresent(Node *head, int data)
{
    if (head == NULL)
    {
        return false;
    }
    if (head->data == data)
    {
        return true;
    }
    return isPresent(head->next, data);
}

int main()
{
    Node *head = takeInput();
    int data;
    cin >> data;
    if (isPresent(head, data))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}