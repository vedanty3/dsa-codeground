#include <bits/stdc++.h>
using namespace std;

array<int, 5> arr3; // whatever declared globally will have all zeroes inside it.

int main()
{
    array<int, 5> arr1; // it will have garbage values at all 5 indices.

    array<int, 5> arr2 = {1, 2, 3}; // last two indices will have zeroes.

    cout << arr2.at(3) << endl; // give value present at 3rd index.

    int arr4[1000] = {0}; // everything will be zero.

    array<int, 5> arr5;
    arr5.fill(4);

    for (auto i : arr5)
        cout << i << " ";

    cout << endl;

    // Iterators
    // 1.begin(): will point to element at first position.
    // 2.end(): will point to the position next to last element.
    // 3.rbegin(): will point to last element.
    // 4.rend(): will point to the position before the first element.

    array<int, 5> arr6 = {11, 22, 33, 44, 55};

    for (auto it = arr6.rbegin(); it != arr6.rend(); it++)
        cout << *it << " ";

    cout << endl;

    for (auto it = arr6.end() - 1; it >= arr6.begin(); it--)
        cout << *it << " ";

    cout << endl;

    for (auto it : arr6)
        cout << it << " ";

    cout << endl;

    string s = "VEDANT_YETEKAR";

    for (auto c : s)
        cout << c << " ";

    cout << endl;

    cout << arr6.size() << endl;
    cout << arr6.front() << endl;
    cout << arr6.at(0) << endl;
    cout << arr6.at(arr6.size() - 1) << endl;
    cout << arr6.back() << endl;

    return 0;
}