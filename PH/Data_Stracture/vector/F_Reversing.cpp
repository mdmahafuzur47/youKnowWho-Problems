#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}