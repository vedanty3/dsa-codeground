#include <bits/stdc++.h>
using namespace std;

int length(char array[])
{
    if (array[0] == '\0')
    {
        return 0;
    }

    return 1 + length(array + 1);
}

int main()
{
    char array[] = "hello_world";
    cout << length(array) << endl;
    return 0;
}