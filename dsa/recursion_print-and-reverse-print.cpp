#include <bits/stdc++.h>
using namespace std;

void print(char array[])
{
    if (array[0] == '\0')
    {
        return;
    }
    cout << array[0];
    print(array + 1);
}

void revPrint(char array[])
{
    if (array[0] == '\0')
    {
        return;
    }
    revPrint(array + 1);
    cout << array[0];
}

int main()
{
    char array[] = "abc";
    print(array);
    cout << endl;
    revPrint(array);
    cout << endl;
    return 0;
}