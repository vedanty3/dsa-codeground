#include <bits/stdc++.h>
using namespace std;

void printPermutaion(char array[], int i = 0)
{
    if (array[i] == '\0')
    {
        cout << array << endl;
        return;
    }

    for (int j = i; array[j] != '\0'; j++)
    {
        swap(array[i], array[j]);
        printPermutaion(array, i + 1);
        swap(array[i], array[j]);
    }
}

int main()
{
    char array[] = "ABC";
    printPermutaion(array);
    return 0;
}