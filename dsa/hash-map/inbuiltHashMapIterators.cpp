#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["abc1"] = 1;
    m["abc2"] = 2;
    m["abc3"] = 3;
    m["abc4"] = 4;
    m["abc5"] = 5;
    m["abc6"] = 6;

    cout << "Size : " << m.size() << endl;
    // auto it = m.find("abc3");
    m.erase(m.begin(), m.end());
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << "Size : " << m.size() << endl;
    /*
    unordered_map<string, int>::iterator it = m.begin();

    for (it; it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

for (auto i : m)
{
    cout << i.first << " " << i.second << endl;
}

auto it = m.find("abc5");

cout << it->first << " " << it->second << endl;

map<string, int> m;
m["abc1"] = 1;
m["abc2"] = 2;
m["abc3"] = 3;
m["abc4"] = 4;
m["abc1"] = 5;
m["abc6"] = 6;

for (auto it : m)
{
    cout << it.first << " " << it.second << endl;
}
*/

    /*
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
        vector<int>::iterator it = v.begin();
        for (it; it != v.end(); it++)
        {
            cout << (*it) << " ";
        }

    auto it = m.find("abc6");

    if (it != m.end())
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    */

    return 0;
}