#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set is implemented using bst.
    // all operations are having O(log N) time complexity.

    int arr[] = {2, 5, 2, 1, 5};
    set<int> st;

    for (auto element : arr)
        st.insert(element); // TC: O(log N) of container.

    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";

    cout << "\n";

    // erase
    // TC: O(log N)
    // st.erase(st.begin());
    // st.erase(5);

    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";

    cout << "\n";

    auto it = st.find(5); // TC: O(log N) (will be an iterator pointing to 5).
    cout << *it << endl;

    auto iter = st.find(9); // it = st.end() (if 9 is not present).

    st.emplace(8); // equivalent to insert() but faster than it.

    cout << st.count(2);

    return 0;
}