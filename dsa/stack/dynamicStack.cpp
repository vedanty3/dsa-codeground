#include<iostream>
using namespace std;

class Stack
{
private:
    int *array;
    int nextIndex;
public:
    int capacity;
    Stack()
    {
        capacity=4;
        array=new int [capacity];
        nextIndex=0;
    }
    int size()
    {
        return nextIndex;

    }

    bool isEmpty()
    {
        if(nextIndex==0)
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
        if(nextIndex==capacity)
        {
            int *newArray=new int[2*capacity];
            for(int i=0; i<capacity; i++)
            {
                newArray[i]=array[i];
            }
            delete []array;
            array=newArray;
            capacity*=2;
        }
        array[nextIndex]=element;
        nextIndex++;

    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        nextIndex--;
    }

    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return array[nextIndex-1];
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size()<<endl;
    return 0;
}
