#include <iostream>
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
    cout << "NULL" << endl;
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
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

Node *deleteIthNode(Node *head, int i)
{
    if (i < 0)
    {
        return head;
    }
    if (i == 0 && head != NULL)
    {
        return head->next;
    }
    int count = 1;
    Node *curr = head;
    while (count <= (i - 1) && curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    if (curr != NULL && curr->next != NULL)
    {
        curr->next = curr->next->next;
        return head;
    }
    return head;
}

int main()
{
    cout << "Input values of linked list : ";
    Node *head = takeInput();
    cout << "Your linked list is : " << endl;
    print(head);
    int i;
    cout << "Enter the index of value you want to delete : " << endl;
    cin >> i;
    head = deleteIthNode(head, i);
    cout << "Your linked list after deletion is : ";
    print(head);
    cout << endl;
    return 0;
}
