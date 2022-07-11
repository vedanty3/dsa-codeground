#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*

    int N = 11, i = 1;
    int mask = 1 << i;
    N = N ^ mask;
    cout << N << endl;

    */

    int N = 11, i = 1;
    int mask = 1 << i;
    mask = ~mask;
    N = N & mask;
    cout << N << endl;

    return 0;
}