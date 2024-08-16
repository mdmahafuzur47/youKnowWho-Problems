#include <bits/stdc++.h>
using namespace std;

void concat(vector<int> &a, vector<int> &b, int n)
{
    vector<int> c;

    for (int i = 0; i < n; i++)
    {
        c.push_back(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }

    for (int i = 0; i < 2 * n; i++)
    {
        if (i == 2 * n - 1)
        {
            cout << c[i];
        }
        else
        {
            cout << c[i] << " ";
        }
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    concat(a, b, n);

    return 0;
}