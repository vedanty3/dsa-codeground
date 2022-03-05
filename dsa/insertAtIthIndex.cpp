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

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *insertAtIthNode(Node *head, int data, int i)
{
    if (i < 0)
    {
        return head;
    }
    if (i == 0)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    int count = 1;
    Node *temp = head;
    while (count <= (i - 1) && head != NULL)
    {
        head = head->next;
        count++;
    }
    if (head != NULL)
    {
        Node *n = new Node(data);
        n->next = head->next;
        head->next = n;
        return temp;
    }
    return head;
}

int main()
{
    cout << "Insert the values in linked list : ";
    Node *head = takeInput();
    int i;
    int data;
    cout << "At what index you want to insert ?" << endl;
    cin >> i;
    cout << "What value you want to insert ?" << endl;
    cin >> data;
    head = insertAtIthNode(head, data, i);
    cout << "Updated linked list is : " << endl;
    print(head);

    return 0;
}