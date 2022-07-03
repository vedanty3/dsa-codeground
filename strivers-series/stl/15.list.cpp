#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_front(30);
    ls.push_front(20);
    ls.emplace_front(10);
    ls.push_back(40);
    ls.push_back(50);
    ls.emplace_back(60);

    cout << ls.size() << endl;
    cout << ls.empty() << endl;

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = ls.rbegin(); it != ls.rend(); it++)
    {
        cout << *it << " ";
    }

    ls.clear();

    return 0;
}