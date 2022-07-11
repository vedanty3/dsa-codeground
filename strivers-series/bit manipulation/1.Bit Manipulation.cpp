#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1 = 6 >> 1; // last bit goes off (it can be 0 or 1).
    int n2 = 5 & 5;  // any  0 = 0. all 1 = 1.
    int n3 = 7 | 6;  // any 1 = 1. all 0 = 0.
    int n4 = 7 ^ 6;  // even no. of 1s = 0. odd no. of 1s = 1.
    int n5 = ~8;     // flip 0 and one with each other.
    int n6 = 5 << 2;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
    cout << n6 << endl;

    return 0;
}