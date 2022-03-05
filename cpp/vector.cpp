#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        // cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> v1(10);
    // vector<int> v1(10, 2);   // it creates vector of size 10 and insert 2 at all indexes.
    // vector<int> v2(v1);      // copy of v1.
    vector<char> v3(5, 'A'); // copy of v1.
    display(v3);
    // cout << v3.size() << endl;

    /*
    int size;
    cout << "Enter the size of vector : ";
    cin >> size;
    int element;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element "
             << i + 1 << " : ";
        cin >> element;
        v1.push_back(element);
    }

    // display(v1);
    // v1.pop_back();

    vector<int>::iterator i = v1.begin();
    v1.insert(i + 1, 20);
    // v1.insert(i + 1, 10, 22);
    display(v1);
    */
}
