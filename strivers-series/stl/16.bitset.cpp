#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int -> 16 bits
    // char -> 8 bits
    // bitset -> 1 bit

    bitset<5> bt;
    cin >> bt;
    cout << bt.all() << endl;
    cout << bt.any() << endl;
    ;
    cout << bt.count() << endl;
    cout << bt.flip(2) << endl;
    // cout << bt.flip() << endl;
    cout << bt.none() << endl;
    bt.set();
    // bt.set(2);
    // bt.set(2, 0);
    bt.reset();
    // bt.reset(2);
    cout << bt << endl;
    cout << bt.size() << endl;
    cout << bt.test(1) << endl;

    return 0;
}