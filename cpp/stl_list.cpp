#include <iostream>
#include <list>
using namespace std;

void print(list<int> &list1);

int main()
{
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    // print(list1);
    // list1.pop_back();
    // list1.pop_front();
    print(list1);

    list<int> list2(5);
    list<int>::iterator iter = list2.end();
    *iter = 92;
    iter++;
    *iter = 3;
    iter++;
    *iter = -44;
    iter++;
    *iter = 5;
    iter++;
    *iter = 26;
    iter++;
    *iter = 17;
    iter++;
    print(list2);
    list1.sort();
    list2.sort();
    print(list1);
    print(list2);
    list1.merge(list2);
    print(list1);
    list1.remove(3);
    print(list1);

    // print(list2);
    // list2.remove(55);
    // print(list2);
}
void print(list<int> &list1)
{
    list<int>::iterator iter;
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}