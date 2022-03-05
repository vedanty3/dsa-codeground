#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    for (auto &x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    auto a = 10;
    cout << a << endl;
    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}, {5, 6}};
    for (auto &x : v2)
    {
        cout << x.first << " " << x.second << endl;
        ;
    }
    cout << endl;
    return 0;
}