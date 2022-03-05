#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> menu;

    // "Time Complexity = O(log N)"
    // it internally implements a tree like data structure.

    menu["maggi"] = 25;
    menu["coffee"] = 22;
    menu["pizza"] = 300;
    menu["noodles"] = 65;
    menu["samosa"] = 15;
    menu["momos"] = 20;
    menu["idli"] = 45;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["dosa"] = 1.1 * menu["dosa"];
    menu.erase("dosa");

    string item;
    cout << "What item do you want ?" << endl;
    cin >> item;

    if (menu.count(item) == 0)
    {
        cout << item << " is not available" << endl;
    }
    else
    {
        cout << item << " is available, and it's cost is Rs. " << menu[item] << endl;
    }

    for (auto item : menu)
    {
        cout << item.first << " - " << item.second << endl;
    }

    return 0;
}