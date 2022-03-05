#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    /*
    string s; // dynamic array
    s = "hello world";
    getline(cin, s, '.');
    for (auto ch : s)
    {
        cout << ch << "--";
    }
    // cout << s << endl;
    int n = 5;
    vector<string> s;
    string temp;
    while (n--)
    {
        getline(cin, temp);
        s.push_back(temp);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
    */

    string para = "Hello World, I'm Vedant Yetekar...I love coding";

    string word;
    getline(cin, word);

    // Find function
    size_t index = para.find(word);
    cout << "size : " << index;
    if (index == -1)
    {
        cout << "string not found";
    }
    if (index != -1)
    {
        cout << "first occurence " << index;
    }
    index = para.find(word, index + 1);
    if (index != -1)
    {
        cout << "second " << index << endl;
    }
    return 0;
}