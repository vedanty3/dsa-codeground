#include <bits/stdc++.h>
using namespace std;

int main()
{
    // don't omit repeated elements.
    // TC: O(log N)

    multiset<int> ms;

    ms.emplace(11);
    ms.emplace(11);
    ms.emplace(12);
    ms.emplace(12);
    ms.emplace(13);
    ms.emplace(13);

    ms.erase(12);
    cout << *ms.find(13) << endl;
    // ms.clear();

    for (auto it : ms)
        cout << it << " ";

    return 0;
}