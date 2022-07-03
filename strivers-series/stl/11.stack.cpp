#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.emplace(110);
    st.emplace(210);
    st.emplace(310);
    st.push(410);

    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}