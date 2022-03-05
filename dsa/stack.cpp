#include <iostream>
using namespace std;

class Stack
{
private:
    int *array;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        capacity = 4;
        array = new int[capacity];
        nextIndex = 0;
    }

    Stack(int cap)
    {
        capacity = cap;
        array = new int[capacity];
        nextIndex = 0;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        ///   return nextIndex==0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack is full" << endl;
            return;
        }
        array[nextIndex] = element;
        nextIndex++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        nextIndex--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return array[nextIndex - 1];
    }
};

int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    Stack s2(10);

    for (int i = 1; i <= 10; i++)
    {
        s2.push(i);
    }

    while (!s2.isEmpty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
    cout << s2.size() << endl;

    return 0;
}
