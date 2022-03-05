#include <iostream>
using namespace std;

class Queue
{
private:
    int *array;
    int firstIndex;
    int nextIndex;
    int capacity;
    int size;

public:
    Queue()
    {
        capacity = 5;
        array = new int[capacity];
        firstIndex = -1;
        nextIndex = 0;
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
            int j = 0;
            int *newArray = new int[2 * capacity];
            for (int i = firstIndex; i < capacity; i++)
            {
                newArray[j] = array[i];
                j++;
            }
            for (int i = 0; i < firstIndex; i++)
            {
                newArray[j] = array[i];
                j++;
            }
            firstIndex = 0;
            nextIndex = capacity;
            capacity = capacity * 2;
            delete[] array;
            array = newArray;
        }
        array[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        size++;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return -1;
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
            firstIndex == -1;
            nextIndex == 0;
        }
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
    q.push(100);
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
    cout << q.front() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << q.front() << endl;

    return 0;
}