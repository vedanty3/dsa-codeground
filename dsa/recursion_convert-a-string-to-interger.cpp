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

int convertStringToInt(char str[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = convertStringToInt(str, n - 1);
    int lastDigit = str[n - 1] - '0';
    int ans = (smallAns * 10) + lastDigit;
    return ans;
}

int main()
{
    char str[] = "12345";
    int n = length(str);
    int a = convertStringToInt(str, n);
    cout << a << endl;
    return 0;
}