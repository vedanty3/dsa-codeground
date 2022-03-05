#include <bits/stdc++.h>
using namespace std;
void prefixes(char array[])
{
    for (int e = 0; e < strlen(array); e++) // for (int e = 0; array[e] != '\0'; e++)
    {
        for (int s = 0; s <= e; s++)
        {

            cout << array[s];
        }

        cout << endl;
    }
}
int main()
{
    char array[100] = "vedantyetekar";
    prefixes(array);
    return 0;
}
