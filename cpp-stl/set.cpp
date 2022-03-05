#include <iostream>
#include <set>
using namespace std;

// implemented using red black trees O(log(n))

/*

void print(set<string> s)
{
    for (auto &x : s)
    {
        cout << x << endl;
    }
    cout << endl;
}

int main()
{
    set<string> s;
    s.insert("hello"); // O(log(n))
    s.insert("world");
    s.insert("vedant");
    // s.insert("hello");
    auto it = s.find("hello");
    s.erase("vedant");
    if (it != s.end()) // O(log(n))

    {
        s.erase(it);
    }
    print(s);
    return 0;
}

*/

// print unique strings
int main()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    for (auto value : s)
    {
        cout << value << endl;
    }
}