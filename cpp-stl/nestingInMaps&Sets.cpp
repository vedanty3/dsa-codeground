#include <bits/stdc++.h>
using namespace std;

// any data structure which can be compared can be the key inside a map

/*
int main()
{
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p1 = {3, 4};
    cout << (p1 > p2);

    map<set<int>, int> m;
    set<int> s1 = {100, 101, 102, 104};
    set<int> s2 = {13, 12, 11, 10};
    cout << (s1 < s2) << endl;
    for (auto &x : s2)
    {
        cout << x << " ";
    }

    set<int>::iterator it = s2.begin();
    while (it != s2.end())
    {
        cout << (*it) << " ";
        it++;
    }
    cout << endl;

    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        cin >> fn >> ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; j < ct; i++)
        {
            int x;
            cin >> x;
            m[make_pair(fn, ln)].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second;
        for (int i = 0; i < list.size(); i++)
        {
            cout << list[i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

*/

int main()
{
    map<int, multiset<string>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn;
        int x;
        cin >> fn >> x;
        m[-1 * x].insert(fn);
    }
    for (auto &marks_student : m)
    {
        auto it = marks_student.second;
        auto marks = marks_student.first;
        for (auto &x : it)
        {
            cout << x << " " << (-1 * marks) << endl;
        }
    }

    return 0;
}