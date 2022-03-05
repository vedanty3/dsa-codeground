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

void removeChar(char array[])
{
    if (array[0] == '\0')
    {
        return;
    }
    if (array[0] != 'a')
    {
        removeChar(array + 1);
    }
    else
    {
        for (int i = 0; array[i] != '\0'; i++)
        {
            array[i] = array[i + 1];
        }
        removeChar(array);
    }
}

int main()
{
    char array[100];
    cin >> array;
    cout << length(array) << endl;
    removeChar(array);
    cout << array << endl;
    cout << length(array) << endl;

    return 0;
}