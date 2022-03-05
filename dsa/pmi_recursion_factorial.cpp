#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0) // base case
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }

    int smallAns = factorial(n - 1); // induction hypothesis (assumption)
    int Ans = n * smallAns;          // calculation
    return Ans;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}