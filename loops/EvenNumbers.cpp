#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            count++;
            cout << i << endl;
        }
    }

    if (count == 0)
    {
        cout << -1 << endl;
    }

    return 0;
}