#include <bits/stdc++.h>
using namespace std;
template <class T>

class vector1
{
public:
    T *array;
    double size;
    vector1(int size)
    {
        this->size = size;
        array = new double[size];
    }
    T dotProduct(vector1 &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += array[i] * v.array[i];
        }
        return d;
    }
};

int main()
{
    vector1<double> v1(3);
    v1.array[0] = 21;
    v1.array[1] = 22;
    v1.array[2] = 23;

    vector1<double> v2(3);
    v2.array[0] = 0.1;
    v2.array[1] = 0.2;
    v2.array[2] = 0.3;

    double ans = v1.dotProduct(v2);
    cout << ans << endl;

    return 0;
}