#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    cout << INT_MAX << endl;
    int x = 1 << 4;                   // power of 2.
    int y = (1LL << 31) - 1;          // 1 bit is reserved for sign that's why it stores only 2^31 not 2^32. (signed: stores both positive and negative numbers).
    unsigned int z = (1LL << 32) - 1; // it can store it because it's unsigned. (unsigned: stores positive numbers only).
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}