/*
// algorithms

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout << "finding 2 : " << binary_search(v.begin(), v.end(), 2) << endl;

    cout << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a = 3, b = 4;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << "a = " << a << " "
         << "b = " << b << endl;

    string str = "vedant";
    reverse(str.begin(), str.end());
    cout << str << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end()); // based on intro sort (insertion sort + quick sort + heap sort).
    for (auto j : v)
    {
        cout << j << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
// map
// time complexity of erase, find, insert, count is O(log n).
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "vedant";
    m[2] = "yetekar";
    m[3] = "parth";
    m.insert({4, "joseph"});

    cout << "before erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << ". " << i.second << endl;
    }
    m.erase(3);
    cout << "after erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << ". " << i.second << endl;
    }
    cout << "finding 13 : " << m.count(3) << endl;
    cout << "finding 13 : " << m.count(-3) << endl;

    auto it = m.find(2);
    for (auto it : m)
    {
        cout << (it).first << endl;
    }

    return 0;
}
*/

/*
// set 
// (stores unique elements, i.e omits repeated elements and modification not allowed and elements are sorted always)
// time complexity = O(log n) (for erase, insert, find, count)
// time complexity = O(1)(for empty())

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    set<int>::iterator iter = s.begin();
    iter++;

    s.erase(iter);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "occurences of 5 : " << s.count(5) << endl;
    cout << "occurences of -5 : " << s.count(-5) << endl;

    set<int>::iterator j = s.find(5);
    for (auto i = j; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
// priority queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(11);
    maxi.push(12);
    maxi.push(13);
    maxi.push(14);

    int n = maxi.size();

    cout << "size : " << maxi.size() << endl;

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(11);
    mini.push(12);
    mini.push(13);
    mini.push(14);

    int m = mini.size();

    cout << "size : " << mini.size() << endl;

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "khali hai ky bhai ? " << mini.empty() << endl;

    return 0;
}
*/

/*
// queue (FIFO)
// time complexity = O(1)

#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;
    q.push("vedant");
    q.push("yetekar");
    q.push("parth");

    cout << "first element : " << q.front() << endl;
    cout << "first element : " << q.front() << endl;
    cout << endl;

    cout << "size before pop : " << q.size() << endl;
    q.pop();
    cout << "size after pop : " << q.size() << endl;
    return 0;
}
*/

/*
// STACK (LIFO)
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("vedant");
    s.push("yetekar");
    s.push("advait");
    s.push("virender");

    s.pop();
    cout << "top element : " << s.top() << endl;
    cout << "size of stack : " << s.size() << endl;
    cout << "Empty  : " << s.empty() << endl;

    return 0;
}
*/

/*
// list
// implemented using doubly linked list

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout << "Before erasing : ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erasing : ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size of list : " << l.size() << endl;

    list<int> n(5, 100);
    for (auto i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
// deque
#include <iostream>
#include <deque>
    using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_back(3);
    d.push_front(2);
    d.pop_back();
    d.pop_front();
    for (auto i : d)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "print fist index element : " << d.at(1) << endl;
    cout << "front : " << d.front() << endl;
    cout << "back : " << d.back() << endl;
    cout << "Empty : " << d.empty() << endl;
    d.erase(d.begin() + 1);
    cout << "SIZE : " << d.size() << endl;

    for (auto i : d)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

*/

/*
// Vector
// time complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(5, -1);
    vector<int> last(v1);
    for (auto i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    cout << "Element at 2nd Index : " << v.at(2) << endl;
    cout << "front : " << v.front() << endl;
    cout << "back : " << v.back() << endl;
    cout << "Before deletion : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After deletion : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Before clearing : " << v.size() << endl;
    v.clear();
    cout << "After clearing : " << v.size() << endl;

    return 0;
}
*/

/*
// Array
// time complexity O(1) for each operation

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> array = {1, 2, 3, 4, 5};
    for (int i = 0; i < array.size(); i++)
    {
        // cout << array[i] << " ";
        cout << array.at(i) << " ";
    }
    cout << endl;
    cout << "Empty : " << bool(array.empty()) << endl;
    cout << "first element : " << array.front() << endl;
    cout << "first element : " << array.back() << endl;
    return 0;
}
*/
