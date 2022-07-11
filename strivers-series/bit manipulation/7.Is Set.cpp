// Check if ith bit of N is set or not.

#include <bits/stdc++.h>
using namespace std;

/*

N = 10 -> 1 0 1 0
i = 2

 */

int main()
{
    int N = 10, i = 2;
    int mask = 1 << 2;
    if ((N & mask) == 1)
        cout << "SET" << endl;
    else
        cout << "NOT SET" << endl;

    return 0;
}