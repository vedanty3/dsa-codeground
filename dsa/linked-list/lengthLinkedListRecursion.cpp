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

int listLength(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    return (1 + listLength(head->next));
}

int main()
{
    Node *head = takeInput();

    cout << "The length of your linked list is " << listLength(head) << endl;

    return 0;
}