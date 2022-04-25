#include <bits/stdc++.h>
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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

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
            tail->next = n; // inserting at tail...
            tail = n;
        }
        cin >> data;
    }
    return head;
}

/*
Node *takeInput2()
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
            n->next = head; // inserting at tail...
            head = n;
        }
        cin >> data;
    }
    return head;
}
*/

int main()
{
    // Node *head = takeInput();
    Node *head = takeInput();
    print(head);

    return 0;
}