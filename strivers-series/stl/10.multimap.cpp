#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<string, int> mpp;
    mpp.emplace("vedant", 100);
    mpp.emplace("vedant", 200);
    mpp.emplace("vedant", 300);
    mpp.emplace("vedant", 400);

    for (auto it : mpp)
        cout << it.first << ": " << it.second << endl;

    return 0;
}