#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int array[], int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (array[s] == array[e])
    {
        return isPalindrome(array, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    int array[] = {1, 2, 2, 3, 2, 1};
    cout << isPalindrome(array, 0, 5) << endl;
    return 0;
}