#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Best Case TC: O(1).
    // Worst Case TC: O(N).

    unordered_set<int> st;
    st.insert(10);
    st.insert(11);
    st.insert(12);
    st.insert(13);
    st.insert(14);

    for (auto i : st)
        cout << i << " ";

    // first preference should be unordered_set.
    // if get tle then switch to set.

    return 0;
}