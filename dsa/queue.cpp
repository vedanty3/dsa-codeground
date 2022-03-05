#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *array;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    Queue(int cap)
    {
        capacity = cap;
        array = new int[capacity];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }

    Queue()
    {
        capacity = 5;
        array = new int[capacity];
        nextIndex = 0;
        firstIndex = -1;
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
        if (size == capacity)
        {
            cout << "Queue full" << endl;
            return;
        }
        array[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return 0;
        }
        return array[firstIndex];
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return;
        }
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.front() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;
    q.pop();
    cout << q.getSize() << endl;
    return 0;
}