#include <bits/stdc++.h>
using namespace std;
/*

// EVEN (n = 10)

      1 0 1 0
   &  0 0 0 1
     ---------
      0 0 0 0

// ODD (n = 5)

      0 1 0 1
   &  0 0 0 1
     ---------
      0 0 0 1

*/
int main()
{
    int n = 10;
    if ((n & 1) == 1)
        cout << "ODD" << endl;
    else
        cout << "EVEN" << endl;

    return 0;
}