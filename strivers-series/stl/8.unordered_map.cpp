#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Best TC: O(1)
    // Worst TC: O(N)

    unordered_map<int, int> mpp;
    int arr[] = {1, 22, 3, 3, 4, 55, 6, 7, 88, 1};

    for (int i = 0; i < 10; i++)
        mpp[arr[i]]++;

    for (auto m : mpp)
        cout << m.first << ": " << m.second << endl;

    return 0;
}