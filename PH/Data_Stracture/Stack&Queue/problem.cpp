#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

void print_stack(myStack st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

bool same_same(myStack st1, myStack st2)
{
    while (!st1.empty())
    {
        int val1 = st1.top();
        int val2 = st2.top();
        if (val1 != val2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    myStack st1;
    myStack st2;

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (m != n)
    {
        cout << "NO" << endl;
        return;
    }

    bool same = same_same(st1, st2);

    cout<<same<<endl;

    print_stack(st1);
    print_stack(st2);

    return 0;
}