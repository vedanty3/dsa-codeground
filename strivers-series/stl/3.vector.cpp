#include <bits/stdc++.h>
using namespace std;

// int arr1[10000000]; max arr size declared globally will be 10^7.

// bool arr2[100000000]; max bool arr size declared globally will be 10^8.

int main()
{
    // int arr3[1000000]; max arr size declared globally will be 10^6.

    // bool arr4[10000000]; max bool arr size declared inside main function will be 10^7.

    vector<int> vec;
    cout << vec.size() << "\n";
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << vec.size() << "\n";
    vec.pop_back();
    cout << vec.size() << "\n";
    vec.clear();
    cout << vec.size() << "\n";

    vector<int> vec1(4, 0);                     // -> {0, 0, 0, 0}
    vector<int> vec2(4, 0);                     // -> {10, 10, 10, 10}
    vector<int> vec3(vec2.begin(), vec2.end()); // -> {10, 10, 10, 10}
    vector<int> vec4(vec3);

    vector<int> vedant;
    vedant.push_back(1);
    vedant.push_back(2);
    vedant.push_back(3);
    vedant.push_back(4);

    vector<int> vedant1(vedant.begin(), vedant.begin() + 2);

    for (auto i : vedant1)
        cout << i << " ";

    cout << endl;

    vector<int> vedant2;
    vedant2.emplace_back(11);
    vedant2.emplace_back(12);
    vedant2.emplace_back(13);

    for (auto i : vedant2)
        cout << i << " ";

    cout << endl
         << "\n";

    // 2-D vector
    vector<vector<int>> vec5;
    vec5.push_back(vec1);
    vec5.push_back(vec2);
    vec5.push_back(vec3);
    vec5.push_back(vec4);
    vec5.push_back(vedant1);
    vec5.push_back(vedant2);

    for (auto i : vec5)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < vec5.size(); i++)
    {
        for (int j = 0; j < vec5[i].size(); j++)
            cout << vec5[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    vector<vector<int>> vec6(10, vector<int>(20, 0));

    for (auto i : vec6)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }

    cout << endl;

    vector<int> arr[5];
    arr[0].push_back(10);
    arr[1].push_back(20);
    arr[2].push_back(30);
    arr[3].push_back(40);
    arr[4].push_back(40);
    arr[4].push_back(50);
    arr[2].push_back(50);
    arr[0].push_back(50);

    for (auto i : arr)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }

    cout << endl;

    // 3-D vector
    vector<vector<vector<int>>> vec7(3, vector<vector<int>>(2, vector<int>(5, 2)));

    for (auto i : vec7)
    {
        for (auto j : i)
        {
            for (auto x : j)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}