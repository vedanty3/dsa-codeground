#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> pr;
    pair<pair<int, int>, int> pr = {{1, 2}, 2};
    cout << pr.first.first << endl;

    pair<pair<int, int>, pair<int, int>> pr1 = {{1, 1}, {2, 2}};

    cout << pr1.first.first << endl;
    cout << pr1.first.second << endl;
    cout << pr1.second.first << endl;
    cout << pr1.second.second << endl;

    vector<pair<int, int>> v;
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(2, 2));
    v.push_back(make_pair(3, 2));

    for (auto it : v)
        cout << it.first << ": " << it.second << endl;

    return 0;
}