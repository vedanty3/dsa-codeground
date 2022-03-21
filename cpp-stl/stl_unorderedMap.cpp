// unordered_maps stores key-value pairs, and performs operations in O(1) (constant) time.
// unordered_set stores only values.
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> menu;

    // "Time Complexity = O(1)"
    menu["maggi"] = 25;
    menu["coffee"] = 22;
    menu["pizza"] = 300;
    menu["noodles"] = 65;
    menu["samosa"] = 15;
    menu["momos"] = 20;
    menu["idli"] = 45;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["dosa"] = 1.1 * menu["dosa"]; // updation
    // cout << menu["dosa"] << endl;
    menu.erase("dosa"); //deletion

    // Search
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

    /*
    unordered_map<string, int>::iterator iter;
    for (iter = menu.begin(); iter != menu.end(); iter++)
    {
        cout << (*iter).first << " - " << (*iter).second << endl;
    }
   */

    /*
    for (auto item : menu)
    {
        cout << item.first << " - " << item.second << endl;
    }
   */

    return 0;
}