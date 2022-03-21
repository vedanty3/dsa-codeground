#include <iostream>
using namespace std;

void print(int n)
{
    if (n > 4)
    {
        return;
    }

    print(n + 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);

    return 0;
}
