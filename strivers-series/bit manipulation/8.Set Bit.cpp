#include <bits/stdc++.h>
using namespace std;

/*

N = 13 -> 1 1 0 1
i = 1

*/

int main()
{
    int N = 13, i = 1;
    int mask = 1 << i;
    N = mask | N;
    cout << N << endl;
    return 0;
}