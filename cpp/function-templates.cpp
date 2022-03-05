#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
T1 average(T1 x, T2 y)
{
    T2 avg = (x + y) / 2.0;
    return avg;
}

int main()
{
    cout << average(44.2, 12.2) << endl;
    return 0;
}