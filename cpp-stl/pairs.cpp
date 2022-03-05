#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;
    /*
    p = {1, "a"};
    p = make_pair(1, 'a');
    ;
    pair<int, string> &p1 = p;
            p1.first = 3;
        cout << p.first << " " << p.second << endl;
        pair<int, int> array[3];
        array[0] = {1, 5};
        array[1] = {2, 6};
        array[2] = {3, 7};
        swap(array[0], array[2]);
        for (int i = 0; i < 3; i++)
        {
            cout << array[i].first << " " << array[i].second << endl;
        }
    */
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;
    return 0;
}