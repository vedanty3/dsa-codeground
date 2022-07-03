#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(11);
    dq.push_front(12);
    dq.push_front(13);

    cout << dq.size() << endl;
    cout << dq.at(0) << endl;

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";

    for (auto it = dq.rbegin(); it != dq.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
        // dq.pop_back();
    }

    dq.clear();

    return 0;
}