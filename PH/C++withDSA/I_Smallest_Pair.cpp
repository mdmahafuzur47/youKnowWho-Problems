#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], min = INT_MAX, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                temp = arr[i - 1] + arr[j - 1] + j - i;
                if(min > temp){
                    min = temp;
                }
            }
        }
        cout<<min<<endl;
    }

    return 0;
}