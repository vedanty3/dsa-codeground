#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str, int idx, int n)
{
    if (idx > (n - idx - 1))
        return str;

    swap(str[idx], str[n - idx - 1]);
    return reverseString(str, idx + 1, n);
}

int main()
{
    string str = "VEDANT";
    cout << str << endl;
    reverseString(str, 0, str.length());
    cout << str << endl;

    return 0;
}