#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    normal maps stores key - value pair in sorted order(implemented using red - black trees)
                                 map<int, string>
                                     m;
    m[100] = "abc"; // O(logn)
    m[5] = "cdc";
    m[3] = "acd";
    m[100] = "vedant";
    m.insert(make_pair(10, "hello"));
    m.clear();
    auto it = m.find(55);
    m.erase(3); // O(log(n)
    if (it != m.end())
    {
        m.erase(it);
    }
    if (it == m.end())
    {
        cout << "No value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        // cout <<(*it).first<<" "<<(*it).second<<endl;
        cout << it->first << " " << it->second << endl;
    }

    for (auto &x : m)
    {
        cout << "Size : " << m.size() << endl;
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    return 0;
}
*/

// Q. Lexographical order
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
    }
    for (auto &x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}