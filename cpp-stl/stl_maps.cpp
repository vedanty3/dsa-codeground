#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 21;
    marksMap["vedant"] = 20;
    marksMap["joe"] = 42;
    marksMap["tanisha"] = 100;
    marksMap.insert({{"Rajul", 77}, {"pankaj", 44}});
    map<string, int>::iterator iter;
    cout << marksMap.empty() << endl;
    cout << marksMap.size() << endl;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++) // (*iter).first will display key.
    {                                                             // (*iter).second will display value.
        cout << (*iter).first << " -> " << (*iter).second << "\n";
    }

    return 0;
}