#include <iostream>
using namespace std;

template <typename T>

class Stack
{
private:
    T *array;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        capacity = 5;
        array = new T[capacity];
        nextIndex = 0;
    }

    Stack(int cap)
    {
        capacity = cap;
        array = new T[capacity];
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

    void push(T element)
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

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return array[nextIndex - 1];
    }
};

int main()
{
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();

    return 0;
}
