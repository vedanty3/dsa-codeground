#include <bits/stdc++.h>
using namespace std;

void print_binary(int n)
{
    for (int i = n; i >= 0; i--)
        cout << ((n >> i) & 1);
    cout << "\n";
}

void is_set(int n, int ith)
{
    if (n & (1 << ith))
        cout << "SET" << endl;
    else
        cout << "NOT SET" << endl;
}

int set_ith(int n, int ith)
{
    n = n | (1 << ith);
    return n;
}

int unset_ith(int n, int ith)
{
    n = n & (~(1 << ith));
    return n;
}

int toggle_ith(int n, int ith)
{
    n = n ^ (1 << ith);
    return n;
}

int cnt_set_bits(int n)
{
    int cnt = 0;
    while (n)
    {
        if (n & 1)
            cnt++;
        n = n >> 1;
    }
    return cnt;
}

int main()
{
    system("cls");
    cout << "Binary form: ";
    print_binary(10);
    print_binary((1 << 2) - 1); // number before power of two has all 1s. (1<<4 is same as 2^4)
    print_binary((1 << 3) - 1);
    print_binary((1 << 4) - 1);
    is_set(4, 2);
    print_binary(set_ith(10, 0));
    print_binary(unset_ith(9, 0));
    print_binary(toggle_ith(0, 2));
    print_binary(toggle_ith(4, 2));
    cout << cnt_set_bits(16) << endl;
    cout << __builtin_popcount(3) << endl;
    cout << __builtin_popcountll((1LL << 35) - 1) << endl;
    cout << (0 ^ 0) << endl;
    return 0;
}