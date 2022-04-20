// Check if a string is a palindrome.
// TC: O(N/2)
// SC: O(N/2)

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int idx, int n)
{
    if (idx >= n / 2)
    {
        return true;
    }

    if (s[idx] == s[n - idx - 1])
    {
        return isPalindrome(s, idx + 1, n);
    }

    return false;
}

int main()
{
    string s = "NAYAN";

    cout << isPalindrome(s, 0, s.size());

    return 0;
}