#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;

    int i = 0, j = 0;
    queue<int> q;
    while (j < n)
    {
        if (a[j] < 0)
        {
            q.push(a[j]);
        }
        if (j >= k - 1)
        {
            if (q.size())
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            if (a[i] < 0)
            {
                q.pop();
            }
            i++;
        }

        j++;
    }

    return 0;
}