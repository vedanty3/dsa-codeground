#include <bits/stdc++.h>
using namespace std;

void print(vector<string> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// v.size();  O(1)

int main()
{
    /*
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // O(1)
    }

    vector<int> v(10, 3);
    v.push_back(7); // O(1)
    print(v);
    v.pop_back(); // O(1)
    print(v);
    vector<int> &v2 = v; // O(n)
    v2.push_back(100);
    print(v);
    print(v2);
    */

    vector<string> s;
    for (int i = 0; i < 4; i++)
    {
        string s1;
        cin >> s1;
        s.push_back(s1);
    }
    print(s);
    return 0;
}