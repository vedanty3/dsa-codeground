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
    cout << " NULL" << endl;
}

Node *takeInput()
{
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cin >> data;
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

int length(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

/*
void printIthNode(Node *head, int i)
{
    int n = length(head);
    if (i < 0 || i > n - 1)
    {
        cout << "-1" << endl;
        return;
    }
    int count = 1;
    while (count <= i)
    {
        head = head->next;
        count++;
    }
    cout << head->data << endl;
}
*/

void printIthNode(Node *head, int i)
{
    if (i < 0)
    {
        cout << "-1" << endl;
        return;
    }

    int count = 1;
    while (count <= i && head != NULL)
    {
        head = head->next;
        count++;
    }
    if (head != NULL)
    {
        cout << head->data << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int i;
    cout << "Enter the elements : ";
    Node *head = takeInput();
    cout << "Enter the index : ";
    cin >> i;
    cout << "Element at " << i << "th index is ";
    printIthNode(head, i);
    cout << endl;
}
