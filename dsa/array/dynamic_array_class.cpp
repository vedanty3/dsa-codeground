#include <iostream>
using namespace std;

class DynamicArray
{
private:
    int *data;
    int nextIndex;
    int capacity; /// total size...
public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(int c)
    {
        data = new int[c];
        nextIndex = 0;
        capacity = c;
    }

    void operator=(DynamicArray const &d) /// Written for copy assignment operator...
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        /// this->data=d.data;                This was happening inside default constructor(shallow copy)...

        /// Deep Copy...
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        /// this->data=d.data;                This was happening inside default constructor...

        /// Deep Copy...
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data; /// if we do not delete the old data (i.e the data[]) then it will be called as memory leak...
            data = newData;
            capacity = capacity * 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i) /// for adding new element at 'i'th position...
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else
        {
            if (i == nextIndex)
            {
                add(element);
            }
        }
    }

    int getElement(int i) const
    {
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }

        else
        {
            return -1;
        }
    }

    void print(void) const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getCapacity() const
    {
        return capacity;
    }
};

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    cout << d1.getCapacity() << endl;

    DynamicArray d2(d1); /// copy constructor called...
    DynamicArray d3;
    d3 = d1; /// copy assignment operator called...
    d1.add(100, 0);
    d1.print(); /// But the problem is both copy constructor and copy assignment operator uses shallow copy...
    d2.print();
    d3.print();
    DynamicArray d4(100); /// parameterized constructor...
    cout << d4.getCapacity() << endl;
    cout << d1.getElement(4) << endl;
    return 0;
}
