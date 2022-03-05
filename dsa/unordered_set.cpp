#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    // set is collcetion of keys

    unordered_set<int> s{1, 2, 3, 4, 55, 6, 11, 22};
    int key;
    s.erase(11);
    cin >> key;
    if (s.find(key) != s.end())
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    s.insert(111);

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}