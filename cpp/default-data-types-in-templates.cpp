#include <bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = float>

class vedant
{
public:
    T1 a;
    T2 b;
    vedant(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    vedant<> o1(2, 2.2);
    o1.display();
    cout << endl;
    vedant<char, string> o2('A', "hello world");
    o2.display();
    return 0;
}