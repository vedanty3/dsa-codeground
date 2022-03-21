#include <bits/stdc++.h>
using namespace std;

void printSub(string in, string out, vector<string> &v)
{
    if (in.length() == 0)
    {
        v.push_back(out);
        return;
    }

    printSub(in.substr(1), out, v);
    printSub(in.substr(1), out + in[0], v);
}
int main()
{
    string in;
    string out = "";
    cin >> in;
    vector<string> v;
    printSub(in, out, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
