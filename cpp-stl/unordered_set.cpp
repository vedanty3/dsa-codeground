#include <iostream>
#include <unordered_set>
using namespace std;

// implemented using hash table

/*
void print(unordered_set<string> s)
{
    for (auto &x : s)
    {
        cout << x << endl;
    }
    cout << endl;
}

int main()
{
    unordered_set<string> s;
    s.insert("hello"); // O(1)
    s.insert("world");
    s.insert("vedant");
    // s.insert("hello");
    auto it = s.find("hello"); // O(1)
    s.erase("vedant");
    if (it != s.end()) // O(log(n))

    {
        s.erase(it);
    }
    print(s);
    return 0;
}
*/

// check if the key is present in set

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;

    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end())
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }

    return 0;
}