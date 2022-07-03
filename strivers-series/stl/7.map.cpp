#include <bits/stdc++.h>
using namespace std;

int main()
{
    // eveything in map has TC: O(log N)
    map<string, int> mpp;
    mpp["vedant"] = 11;
    mpp["jane"] = 12;
    mpp["joseph"] = 13;
    mpp["dave"] = 14;
    mpp["vedant"] = 133;
    // mpp.emplace("vedant", 100);
    // mpp.erase("vedant");
    // mpp.erase(mpp.begin());
    // mpp.clear();
    // mpp.find("vedant");

    cout << mpp.empty() << endl;

    for (auto m : mpp)
        cout << m.first << ": " << m.second << endl;

    cout << mpp.count("jane") << endl;

    for (auto it = mpp.begin(); it != mpp.end(); it++)
        cout << it->first << ": " << it->second << endl;

    return 0;
}