#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int i, int n)
{
    if (i > (n - i - 1))
        return true;

    else if (str[i] != str[n - i - 1])
        return checkPalindrome(str, i + 1, n);
}

int main()
{
    string str = "VEDANT";
    bool ans = checkPalindrome(str, 0, str.length() - 1);
    ans ? cout << "It is a palindrome" << endl : cout << "It is not a palindrome" << endl;

    return 0;
}