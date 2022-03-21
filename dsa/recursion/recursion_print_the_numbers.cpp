#include <bits/stdc++.h>
using namespace std;

void print(int n) // ascending order
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);

    cout << n << " ";
    return;
}

void print2(int n) // descending order
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    print2(n - 1);

    return;
}

int main()
{
    int n;
    cin >> n;
    cout << "ascending order " << endl;
    print(n);
    cout << endl;
    cout << "descending order " << endl;
    print2(n);
    cout << endl;

    return 0;
}
