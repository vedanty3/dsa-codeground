#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int idx, string &s)
{
    if (idx >= s.size() / 2)
    {
        return true;
    }

    if (s[idx] != s[s.size() - idx - 1])
    {
        return false;
    }

    return isPalindrome(idx + 1, s);
}

int main()
{
    string s = "NAYAM";
    cout << isPalindrome(0, s) << "\n";

    return 0;
}