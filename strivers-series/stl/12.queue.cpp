#include <bits/stdc++.h>
using namespace std;

int main()
{
    // all operations has TC: O(1) except deletion O(N).

    queue<int> q;
    q.emplace(1);
    q.emplace(2);
    q.emplace(3);
    q.emplace(4);
    q.push(5);

    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    cout << "\n";

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}