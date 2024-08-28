#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> qu;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int val1 = st.top();
        int val2 = qu.front();
        if (val1 != val2)
        {
            flag = false;
        }
    }

    (flag) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}