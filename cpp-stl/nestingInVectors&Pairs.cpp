#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
/*
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
*/

/*
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    print(v);
    cout << endl;
    return 0;
}
*/

/*
int main()
{
    int N;
    cout << "Enter the size of array : ";
    cin >> N;
    vector<int> v[N]; // array of vectors
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "enter the size of vector : ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "insert value : ";
            cin >> x;
            v[i].push_back(x);
        }
    }
    cout << endl;
    cout << "output : " << endl;
    for (int i = 0; i < N; i++)
    {
        print(v[i]);
    }

    return 0;
}

*/

int main()
{
    int N;
    vector<vector<int>> v;
    cout << "Enter the size of vector : ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the size of inner vector : ";
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "insert value : " << j << " : ";
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout << endl;
    cout << "output : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        print(v[i]);
    }
    return 0;
}