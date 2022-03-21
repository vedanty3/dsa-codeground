#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["vedant"] = 1;
    m["ram"] = 2;
    m["raj"] = 3;
    m["jonas"] = 4;
    cout << "size : " << m.size() << endl;

    cout << m["vedant"] << endl;
    cout << m.at("raj") << endl;

    cout << m["aaa"] << endl;
    cout << "size : " << m.size() << endl;
    // cout << m.at("ddd") << endl;

    if (m.count("ddd"))
    {
        cout << "found";
    }
    cout << "not found" << endl;

    m.erase("ram");
    cout << "size : " << m.size() << endl;

    return 0;
}