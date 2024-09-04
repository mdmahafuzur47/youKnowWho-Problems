#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &arr, int l, int r, int target)
{
    int flag = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            flag++;
        }
        if (target < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;

    binarySearch(v, 0, n - 1, x);

    return 0;
}