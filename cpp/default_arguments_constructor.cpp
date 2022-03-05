#include <bits/stdc++.h>
using namespace std;

class Simple
{
private:
    int data1;
    int data2;

public:
    Simple(int a, int b = 3)
    {
        data1 = a;
        data2 = b;
    }
    void display(void)
    {
        cout << endl;
        cout << "The value of data 1 and data 2 is " << data1 << " & " << data2 << endl;
        cout << endl;
    }
};
int main()
{
    Simple o1(1);
    Simple o2(1, 7);
    o1.display();
    o2.display();

    return 0;
}