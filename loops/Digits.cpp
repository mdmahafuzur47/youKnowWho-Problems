#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (n > 0)
        {
            cout << n % 10 << " ";
            n = n / 10;
        }
        cout << endl;
    }

    return 0;
}