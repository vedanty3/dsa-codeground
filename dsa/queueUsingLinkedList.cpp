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

class Queue
{
public:
    Node *head;
    Node *tail;
    int size;
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int element)
    {
        Node *n = new Node(element);
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
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return -1;
        }
        return head->data;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.isEmpty() << endl;
    cout << q.getSize() << endl;

    return 0;
}