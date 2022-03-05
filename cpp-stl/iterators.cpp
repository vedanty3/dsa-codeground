#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    cout << (*(it + 1)) << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}
*/

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    return 0;
}