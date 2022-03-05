#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(q.front());
        q.pop();
    }
    for (int i = 0; i < 5; i++)
    {
        q.push(s.top());
        s.pop();
    }
}

void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    cout << "Queue before : ";
    print(q);
    cout << endl;
    reverse(q);

    cout << "Queue after : ";
    print(q);

    return 0;
}
