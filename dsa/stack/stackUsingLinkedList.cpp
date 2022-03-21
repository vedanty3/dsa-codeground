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

class Stack
{
public:
    Node *head;
    int size;
    Stack()
    {
        head = NULL;
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
        cout << element << " Inserted" << endl;
        n->next = head;
        head = n;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        cout << temp->data << " Deleted" << endl;
        delete temp;
        size--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return head->data;
    }
};

int main()
{
    Stack s;
    s.push(20);
    s.push(21);
    s.push(22);
    s.push(23);
    s.pop();
    s.pop();
    s.pop();
    string str = s.isEmpty() == 1 ? "Stack Empty!" : "Stack is not empty!";
    cout << str << endl;
    cout << "size -> " << s.getSize() << endl;
    cout << "top element -> " << s.top() << endl;

    return 0;
}