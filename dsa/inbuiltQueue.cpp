#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    cout << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}