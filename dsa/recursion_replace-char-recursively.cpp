#include <bits/stdc++.h>
using namespace std;

void replaceChar(char array[])
{
    if (array[0] == '\0')
    {
        return;
    }
    if (array[0] == 'a')
    {
        array[0] = 'x';
    }
    replaceChar(array + 1);
}

int main()
{
    char array[100];
    cin >> array;
    replaceChar(array);
    cout << array << endl;

    return 0;
}