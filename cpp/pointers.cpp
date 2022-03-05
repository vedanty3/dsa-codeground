#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;

    cout << "the value of a is " << *(ptr) << endl;

    int *p = new int(43);
    cout << "the value at p is " << *(p) << endl;

    int *array = new int[3];
    array[0] = 11;
    // array[1] = 12;
    *(array + 1) = 12;
    array[2] = 13;

    // delete operator
    // delete[] array;

    cout << "the value at array[0] is " << array[0] << endl;
    cout << "the value at array[1] is " << array[1] << endl;
    cout << "the value at array[2] is " << array[2] << endl;

    return 0;
}