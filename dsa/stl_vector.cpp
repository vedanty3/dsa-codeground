#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // 2D vector
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j : v[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    /*
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    return 0;
    */
}