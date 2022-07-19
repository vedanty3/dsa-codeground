#include <bits/stdc++.h>
using namespace std;

void nature(int n)
{
    n = n & 1;
    cout << (n == 1 ? "ODD" : "EVEN") << endl;
    ;
}

void print_binary(int n)
{
    for (int i = n; i >= 0; i--)
        cout << ((n >> i) & 1);
    cout << endl;
}

int main()
{
    /*
    system("cls");
    nature(4);
    cout << "2x4 = " << (4 << 1) << "\n";
    cout << "8/2 = " << (8 >> 1) << "\n";
    cout << "2^3 = " << (1 << 3) << "\n";

    for (auto it = 'a'; it <= 'd'; it++)
    {
        cout << it << ": ";
        print_binary(int(it));
        cout << endl;
    }
    cout << endl;

    for (auto it = 'A'; it <= 'D'; it++)
    {
        cout << it << ": ";
        print_binary(int(it));
        cout << endl;
    }
    cout << endl;

    // A -> a
    char A = 'A';
    char a = int(A) | (1 << 5);
    cout << a << "\n";

    // a -> A
    char a = 'a';
    char A = int(a) & (~(1 << 5));
    cout << A << "\n";

    // char ? = 1<<5 (white-space)
    // char ? = ~(1<<5) (underscore)
    cout << char(1 << 5) << endl;
    cout << char('A' | ' ') << endl;
    cout << char('a' & '_') << endl;

    // clear bits upto ith bit from right(lsb).
    int ith = 2, num = 15;
    int new_num = num & (~((1 << ith + 1) - 1));
    print_binary(15);
    print_binary(new_num);

    // clear bits after ith bit from left(msb).
    int ith = 2;
    int num = 15;
    int new_num = num & ((1 << ith + 1) - 1);
    cout << new_num << endl;
    print_binary(num);
    print_binary(new_num);

    // check power of 2.
    int n = 11;
    n = n & (n - 1);
    if (n == 0)
        cout << "POWER OF TWO";
    else
        cout << "NOT A POWER OF TWO";
*/

    return 0;
}