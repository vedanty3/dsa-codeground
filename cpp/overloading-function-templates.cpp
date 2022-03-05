#include <bits/stdc++.h>
using namespace std;

void display(int a)
{
    cout << "I am just a function " << a << endl;
}

template <class T>

void display(T a)
{
    cout << "I am a templatised function " << a << endl;
}

int main()
{
    display(4); // perfect match has highest priority.
    display(4.1);
    display("one");

    return 0;
}